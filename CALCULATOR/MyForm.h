#pragma once
#include <string>
#include <iostream>

namespace CALCULATOR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button7;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textBox;
	private: System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ buttonadd;
	private: System::Windows::Forms::Button^ buttonsub;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ buttonmul;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttondiv;
	private: System::Windows::Forms::Button^ buttonequal;


	private: System::Windows::Forms::Button^ buttoncls;


	private: System::Windows::Forms::Button^ button0;

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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonadd = (gcnew System::Windows::Forms::Button());
			this->buttonsub = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonmul = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttondiv = (gcnew System::Windows::Forms::Button());
			this->buttonequal = (gcnew System::Windows::Forms::Button());
			this->buttoncls = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button7->Location = System::Drawing::Point(12, 123);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 87);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->textBox->Location = System::Drawing::Point(12, 12);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(538, 105);
			this->textBox->TabIndex = 4;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button8->Location = System::Drawing::Point(148, 123);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 87);
			this->button8->TabIndex = 5;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button9->Location = System::Drawing::Point(284, 123);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 87);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// buttonadd
			// 
			this->buttonadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonadd->Location = System::Drawing::Point(420, 123);
			this->buttonadd->Name = L"buttonadd";
			this->buttonadd->Size = System::Drawing::Size(130, 87);
			this->buttonadd->TabIndex = 7;
			this->buttonadd->Text = L"+";
			this->buttonadd->UseVisualStyleBackColor = true;
			this->buttonadd->Click += gcnew System::EventHandler(this, &MyForm::buttonadd_Click);
			// 
			// buttonsub
			// 
			this->buttonsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonsub->Location = System::Drawing::Point(420, 230);
			this->buttonsub->Name = L"buttonsub";
			this->buttonsub->Size = System::Drawing::Size(130, 87);
			this->buttonsub->TabIndex = 11;
			this->buttonsub->Text = L"-";
			this->buttonsub->UseVisualStyleBackColor = true;
			this->buttonsub->Click += gcnew System::EventHandler(this, &MyForm::buttonsub_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button6->Location = System::Drawing::Point(284, 230);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 87);
			this->button6->TabIndex = 10;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button5->Location = System::Drawing::Point(148, 230);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 87);
			this->button5->TabIndex = 9;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button4->Location = System::Drawing::Point(12, 230);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 87);
			this->button4->TabIndex = 8;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// buttonmul
			// 
			this->buttonmul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonmul->Location = System::Drawing::Point(420, 334);
			this->buttonmul->Name = L"buttonmul";
			this->buttonmul->Size = System::Drawing::Size(130, 87);
			this->buttonmul->TabIndex = 15;
			this->buttonmul->Text = L"*";
			this->buttonmul->UseVisualStyleBackColor = true;
			this->buttonmul->Click += gcnew System::EventHandler(this, &MyForm::buttonmul_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->Location = System::Drawing::Point(284, 334);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 87);
			this->button3->TabIndex = 14;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->Location = System::Drawing::Point(148, 334);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 87);
			this->button2->TabIndex = 13;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(12, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 87);
			this->button1->TabIndex = 12;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttondiv
			// 
			this->buttondiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttondiv->Location = System::Drawing::Point(420, 437);
			this->buttondiv->Name = L"buttondiv";
			this->buttondiv->Size = System::Drawing::Size(130, 87);
			this->buttondiv->TabIndex = 19;
			this->buttondiv->Text = L"/";
			this->buttondiv->UseVisualStyleBackColor = true;
			this->buttondiv->Click += gcnew System::EventHandler(this, &MyForm::buttondiv_Click);
			// 
			// buttonequal
			// 
			this->buttonequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonequal->Location = System::Drawing::Point(284, 437);
			this->buttonequal->Name = L"buttonequal";
			this->buttonequal->Size = System::Drawing::Size(130, 87);
			this->buttonequal->TabIndex = 18;
			this->buttonequal->Text = L"=";
			this->buttonequal->UseVisualStyleBackColor = true;
			this->buttonequal->Click += gcnew System::EventHandler(this, &MyForm::buttonequal_Click);
			// 
			// buttoncls
			// 
			this->buttoncls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttoncls->Location = System::Drawing::Point(148, 437);
			this->buttoncls->Name = L"buttoncls";
			this->buttoncls->Size = System::Drawing::Size(130, 87);
			this->buttoncls->TabIndex = 17;
			this->buttoncls->Text = L"C";
			this->buttoncls->UseVisualStyleBackColor = true;
			this->buttoncls->Click += gcnew System::EventHandler(this, &MyForm::buttoncls_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button0->Location = System::Drawing::Point(12, 437);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(130, 87);
			this->button0->TabIndex = 16;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 561);
			this->Controls->Add(this->buttondiv);
			this->Controls->Add(this->buttonequal);
			this->Controls->Add(this->buttoncls);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonmul);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonsub);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonadd);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->button7);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "0";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "9";
	}
	private: System::Void buttonadd_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "+";
	}
	private: System::Void buttonsub_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "-";
	}
	private: System::Void buttonmul_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "*";
	}
	private: System::Void buttondiv_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = textBox->Text + "/";
	}
	private: System::Void buttoncls_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = "";
	}
	private: System::Void buttonequal_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::String^ data = textBox->Text;

		std::string expression = toStandardString(data);
		int pos = 0;

		double result = parseTerm(expression, pos);


		textBox->Text = result.ToString();
		
	}

	static std::string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);

		return returnString;
	}



	double parseNumber(const std::string& expression, int & pos) {
		double number = 0;
		while (pos < expression.size() && isdigit(expression[pos])) {
			number = number * 10 + (expression[pos] - '0');
			pos++;
		}
		return number;
	}

	double parseFactor(const std::string& expression, int & pos) {
		char op;
		double left = parseNumber(expression, pos);

		while (pos < expression.size() && (expression[pos] == '*' || expression[pos] == '/')) {
			op = expression[pos++];
			double right = parseNumber(expression, pos);
			if (op == '*') {
				left *= right;
			}
			else if (op == '/') {
				if (right != 0) {
					left /= right;
				}
				else {
					std::cerr << "Error: Division by zero." << std::endl;
					return 0; // Division by zero error
				}
			}
		}

		return left;
	}

	double parseTerm(const std::string& expression, int & pos) {
		char op;
		double left = parseFactor(expression, pos);

		while (pos < expression.size() && (expression[pos] == '+' || expression[pos] == '-')) {
			op = expression[pos++];
			double right = parseFactor(expression, pos);
			if (op == '+') {
				left += right;
			}
			else if (op == '-') {
				left -= right;
			}
		}

		return left;
	}


};
}
