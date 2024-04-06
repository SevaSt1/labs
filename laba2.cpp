#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Arachnid { // Класс "паукообразные"
private:
    string name;
    float weight;
    int age;

public:
    void set_base_data() {
        cout << "Enter name, weight (in gramms) and age (in months) of your "
            "arachnid: "
            << endl;
        cin >> name;
        cin >> weight;
        cin >> age;
    }
    void get_base_data() {
        cout << "Arachnid: " << name << ", " << age << ", " << weight << endl;
    }
};

class Spiders : public Arachnid { // Подкласс "пауки" в классе "паукообразные"
private:
    string habitat; // Среда обитания

public:
    void set_habitat(string habitat) { this->habitat = habitat; }

    void get_habitat() { cout << "Habitat: " << habitat << endl; }
};

class LarinioidesSclopetarius
    : public Spiders { // Подкласс "лариниоиды" в классе "пауки"
private:
    bool is_poisonous;

public:
    void set_poisonous(bool is_poisonous) { // Ядовитый или нет
        this->is_poisonous = is_poisonous;
    }

    void get_poisonous() {
        cout << "Is poisonous: " << (is_poisonous ? "Yes" : "No") << endl;
    }
};

class Tick : public Arachnid { // Подкласс "клещи" в классе "паукообразные"
private:
    int blood_sucking_period;

public:
    void set_blood_sucking_period(int period) { blood_sucking_period = period; }

    void get_blood_sucking_period() {
        cout << "Blood sucking period: " << blood_sucking_period << " days" << endl;
    }
};

class Ixodidae : public Tick { // Подкласс "иксоидовые" в классе "клещи"
private:
    bool is_disease_carrier; // Имеет ли он болезнь

public:
    void set_disease_carrier(bool is_disease_carrier) {
        this->is_disease_carrier = is_disease_carrier;
    }

    void get_disease_carrier() {
        cout << "Is disease carrier: " << (is_disease_carrier ? "Yes" : "No")
            << endl;
    }
};

int main() {
    Ixodidae At;
    At.set_base_data();
    At.set_blood_sucking_period(7);
    At.set_disease_carrier(true);
    At.get_base_data();
    At.get_blood_sucking_period();
    At.get_disease_carrier();
}