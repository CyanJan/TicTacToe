#pragma once
#include "Spielfeld.h"
namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Spielfeld* DasSpielfeld;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DasSpielfeld = new Spielfeld(10, 10);
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox1;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(10, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(60, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(110, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(10, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(60, 60);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(110, 60);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(10, 110);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(60, 110);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(110, 110);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(212, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 13);
			this->textBox1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(434, 404);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		DasSpielfeld->Draw(e->Graphics);
	}
	private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {
	}
#pragma region buttonFunctions
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 0);
	button1->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 1);
	button2->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 2);
	button3->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}

	;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 3);
	button4->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 4);
	button5->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 5);
	button6->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 6);
	button7->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 7);
	button8->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DasSpielfeld->increaseTurn();
	DasSpielfeld->setmark(DasSpielfeld->welcherSpieler(), 8);
	button9->Visible = false;
	if (DasSpielfeld->CheckWin1() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Cross Won!";
	}
	if (DasSpielfeld->CheckWin2() == true)
	{
		textBox1->Visible = true;
		textBox1->Text = "Circle Won!";
	}
	
}
#pragma endregion // Here Lies Dragons


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Visible = false;
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	DasSpielfeld->clear();
}
};
}
