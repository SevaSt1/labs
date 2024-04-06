#include <iostream>
#include <string>
#include <memory>

// Product (Продукт)
class Pizza {
public:
    void setDough(const std::string& dough) {
        dough_ = dough;
    }

    void setSauce(const std::string& sauce) {
        sauce_ = sauce;
    }

    void setTopping(const std::string& topping) {
        topping_ = topping;
    }

    void displayPizza() const {
        std::cout << "Pizza with dough: " << dough_ << ", sauce: " << sauce_ << ", topping: " << topping_ << std::endl;
    }

private:
    std::string dough_;
    std::string sauce_;
    std::string topping_;
};

// Abstract Builder (Абстрактный Строитель)
class PizzaBuilder {
public:
    virtual ~PizzaBuilder() {}
    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
    virtual std::shared_ptr<Pizza> getPizza() = 0;
};

// Concrete Builder 1 (Конкретный Строитель 1)
class HawaiianPizzaBuilder : public PizzaBuilder {
public:
    void buildDough() override {
        pizza_->setDough("cross");
    }

    void buildSauce() override {
        pizza_->setSauce("mild");
    }

    void buildTopping() override {
        pizza_->setTopping("ham and pineapple");
    }

    std::shared_ptr<Pizza> getPizza() override {
        return pizza_;
    }

    HawaiianPizzaBuilder() : pizza_(std::make_shared<Pizza>()) {}

private:
    std::shared_ptr<Pizza> pizza_;
};

// Concrete Builder 2 (Конкретный Строитель 2)
class SpicyPizzaBuilder : public PizzaBuilder {
public:
    void buildDough() override {
        pizza_->setDough("pan baked");
    }

    void buildSauce() override {
        pizza_->setSauce("hot");
    }

    void buildTopping() override {
        pizza_->setTopping("pepperoni and salami");
    }

    std::shared_ptr<Pizza> getPizza() override {
        return pizza_;
    }

    SpicyPizzaBuilder() : pizza_(std::make_shared<Pizza>()) {}

private:
    std::shared_ptr<Pizza> pizza_;
};

// Director (Директор)
class Waiter {
public:
    void setPizzaBuilder(std::shared_ptr<PizzaBuilder> builder) {
        pizzaBuilder_ = builder;
    }

    std::shared_ptr<Pizza> getPizza() {
        return pizzaBuilder_->getPizza();
    }

    void constructPizza() {
        pizzaBuilder_->buildDough();
        pizzaBuilder_->buildSauce();
        pizzaBuilder_->buildTopping();
    }

private:
    std::shared_ptr<PizzaBuilder> pizzaBuilder_;
};

int main() {
    Waiter waiter;

    // Конкретный Строитель 1
    std::shared_ptr<PizzaBuilder> hawaiianBuilder = std::make_shared<HawaiianPizzaBuilder>();
    waiter.setPizzaBuilder(hawaiianBuilder);
    waiter.constructPizza();
    std::shared_ptr<Pizza> hawaiianPizza = waiter.getPizza();
    hawaiianPizza->displayPizza();

    // Конкретный Строитель 2
    std::shared_ptr<PizzaBuilder> spicyBuilder = std::make_shared<SpicyPizzaBuilder>();
    waiter.setPizzaBuilder(spicyBuilder);
    waiter.constructPizza();
    std::shared_ptr<Pizza> spicyPizza = waiter.getPizza();
    spicyPizza->displayPizza();

    return 0;

    std::cin.getline();
}