#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int argum1 = 3;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;



	private:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(328, 243);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(328, 165);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(328, 321);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(328, 87);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 70);
			this->button6->TabIndex = 5;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->CausesValidation = false;
			this->button7->Location = System::Drawing::Point(20, 320);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(89, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(117, 320);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 70);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(231, 320);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 70);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(276, 215);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(44, 98);
			this->button10->TabIndex = 9;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(72, 212);
			this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(198, 101);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(22, 214);
			this->button12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(42, 97);
			this->button12->TabIndex = 11;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(20, 87);
			this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(119, 117);
			this->button13->TabIndex = 12;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(147, 87);
			this->button14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(38, 117);
			this->button14->TabIndex = 13;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(193, 87);
			this->button15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(127, 117);
			this->button15->TabIndex = 14;
			this->button15->Text = L"9";
			this->button15->UseMnemonic = false;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 398);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 70);
			this->button2->TabIndex = 16;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(16, 15);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(586, 64);
			this->button4->TabIndex = 17;
			this->button4->Text = L"0";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(485, 87);
			this->button16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(117, 381);
			this->button16->TabIndex = 18;
			this->button16->Text = L"Ñ";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button17->Location = System::Drawing::Point(328, 398);
			this->button17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(149, 70);
			this->button17->TabIndex = 19;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 479);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
		int firstnum=0;
		int secondnum=0;
		int Result;
		char operation;
		short int fl = 0;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		firstnum = Convert::ToInt32(button4->Text);
		button4->Text = "0";
		operation = 'x';
		fl++;
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	firstnum = Convert::ToInt32(button4->Text);
	button4->Text = "0";
	operation = '+';
	fl++;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "1";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "1";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "0";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "0";
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "2";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "2";
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "3";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "3";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "4";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "4";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "5";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "5";
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "6";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "6";
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "7";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "7";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "8";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "8";
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Text == "0")
	{
		button4->Text = "9";
	}
	else
	{
		button4->Text = Convert::ToInt32(button4->Text) + "9";
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	button4->Text = "0";
	fl = 0;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	firstnum = Convert::ToInt32(button4->Text);
	button4->Text = "0";
	operation = '/';
	fl++;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	firstnum = Convert::ToInt32(button4->Text);
	button4->Text = "0";
	operation = '-';
	fl++;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fl != 0)
	{
		fl--;
		secondnum = Convert::ToInt32(button4->Text);

		switch (operation)
		{
		case '+':
			Result = firstnum + secondnum;
			button4->Text = System::Convert::ToString(Result);
			firstnum = 0;
			secondnum = 0;
			break;
		case 'x':
			Result = firstnum * secondnum;
			button4->Text = System::Convert::ToString(Result);
			firstnum = 0;
			secondnum = 0;
			break;
		case '/':
			if (secondnum != 0)
			{
			Result = firstnum / secondnum;
			button4->Text = System::Convert::ToString(Result);
			}
			else
			{
				button4->Text = "Error";
			}
			firstnum = 0;
			secondnum = 0;
			break;
		case '-':
			Result = firstnum - secondnum;
			button4->Text = System::Convert::ToString(Result);
			firstnum = 0;
			secondnum = 0;
			break;
		}
	}


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
