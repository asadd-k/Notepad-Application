#pragma once
#include<fstream>

namespace Notepad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; 
	using namespace std; 

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//panel1->Hide();
			textBox1->Focus(); 
			openFileDialog1->FileName = "myfile.txt"; 
			panel2->Hide();  
			KeyPreview = true; 
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label7;
	public:
	private: System::Windows::Forms::Label^ label6;
	public: int line = 2;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ newbutton;
	private: System::Windows::Forms::Button^ openbutton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ saveasbutton;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ editbutton;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::TextBox^ linetextbox;
	private: System::Windows::Forms::Label^ filename;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ aboutbutton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ pnl2button;
	private: System::Windows::Forms::TextBox^ pnl2textbox;
	private: System::Windows::Forms::Label^ label5;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->aboutbutton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->editbutton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveasbutton = (gcnew System::Windows::Forms::Button());
			this->openbutton = (gcnew System::Windows::Forms::Button());
			this->newbutton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->linetextbox = (gcnew System::Windows::Forms::TextBox());
			this->filename = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pnl2button = (gcnew System::Windows::Forms::Button());
			this->pnl2textbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->aboutbutton);
			this->panel1->Controls->Add(this->ExitButton);
			this->panel1->Controls->Add(this->editbutton);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->saveasbutton);
			this->panel1->Controls->Add(this->openbutton);
			this->panel1->Controls->Add(this->newbutton);
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(84, 434);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// label7
			// 
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(0, 189);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 53);
			this->label7->TabIndex = 5;
			// 
			// aboutbutton
			// 
			this->aboutbutton->FlatAppearance->BorderSize = 0;
			this->aboutbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->aboutbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutbutton->Location = System::Drawing::Point(19, 198);
			this->aboutbutton->Name = L"aboutbutton";
			this->aboutbutton->Size = System::Drawing::Size(62, 34);
			this->aboutbutton->TabIndex = 4;
			this->aboutbutton->Text = L"About";
			this->aboutbutton->UseVisualStyleBackColor = true;
			this->aboutbutton->Click += gcnew System::EventHandler(this, &Form1::aboutbutton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(4, 339);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(75, 38);
			this->ExitButton->TabIndex = 3;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Form1::ExitButton_Click);
			// 
			// editbutton
			// 
			this->editbutton->FlatAppearance->BorderSize = 0;
			this->editbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editbutton->Location = System::Drawing::Point(24, 158);
			this->editbutton->Name = L"editbutton";
			this->editbutton->Size = System::Drawing::Size(49, 38);
			this->editbutton->TabIndex = 2;
			this->editbutton->Text = L"Edit";
			this->editbutton->UseVisualStyleBackColor = true;
			this->editbutton->Click += gcnew System::EventHandler(this, &Form1::editbutton_Click);
			// 
			// label4
			// 
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(7, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(7, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 20);
			this->label3->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(7, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 1;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(-1, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 36);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// saveasbutton
			// 
			this->saveasbutton->FlatAppearance->BorderSize = 0;
			this->saveasbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveasbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveasbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->saveasbutton->Location = System::Drawing::Point(18, 119);
			this->saveasbutton->Name = L"saveasbutton";
			this->saveasbutton->Size = System::Drawing::Size(65, 38);
			this->saveasbutton->TabIndex = 0;
			this->saveasbutton->Text = L"Save";
			this->saveasbutton->UseVisualStyleBackColor = false;
			this->saveasbutton->Click += gcnew System::EventHandler(this, &Form1::saveasbutton_Click);
			// 
			// openbutton
			// 
			this->openbutton->FlatAppearance->BorderSize = 0;
			this->openbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->openbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->openbutton->Location = System::Drawing::Point(5, 81);
			this->openbutton->Name = L"openbutton";
			this->openbutton->Size = System::Drawing::Size(75, 38);
			this->openbutton->TabIndex = 0;
			this->openbutton->Text = L"Open";
			this->openbutton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->openbutton->UseVisualStyleBackColor = false;
			this->openbutton->Click += gcnew System::EventHandler(this, &Form1::openbutton_Click);
			// 
			// newbutton
			// 
			this->newbutton->FlatAppearance->BorderSize = 0;
			this->newbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newbutton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->newbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->newbutton->Location = System::Drawing::Point(1, 35);
			this->newbutton->Name = L"newbutton";
			this->newbutton->Size = System::Drawing::Size(75, 52);
			this->newbutton->TabIndex = 0;
			this->newbutton->Text = L"New";
			this->newbutton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->newbutton->UseVisualStyleBackColor = false;
			this->newbutton->Click += gcnew System::EventHandler(this, &Form1::newbutton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 39);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->CausesValidation = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(103, 42);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(470, 425);
			this->textBox1->TabIndex = 0;
			this->textBox1->WordWrap = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"txtfiles|*.txt|All files|*.*";
			// 
			// fontDialog1
			// 
			this->fontDialog1->ShowApply = true;
			this->fontDialog1->ShowColor = true;
			this->fontDialog1->ShowHelp = true;
			// 
			// linetextbox
			// 
			this->linetextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->linetextbox->BackColor = System::Drawing::Color::SteelBlue;
			this->linetextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->linetextbox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linetextbox->Location = System::Drawing::Point(70, 42);
			this->linetextbox->Multiline = true;
			this->linetextbox->Name = L"linetextbox";
			this->linetextbox->Size = System::Drawing::Size(32, 425);
			this->linetextbox->TabIndex = 3;
			this->linetextbox->Text = L"1";
			this->linetextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->linetextbox->TextChanged += gcnew System::EventHandler(this, &Form1::linetextbox_TextChanged);
			// 
			// filename
			// 
			this->filename->AutoSize = true;
			this->filename->BackColor = System::Drawing::Color::Black;
			this->filename->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filename->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->filename->Location = System::Drawing::Point(106, 18);
			this->filename->Name = L"filename";
			this->filename->Size = System::Drawing::Size(82, 24);
			this->filename->TabIndex = 4;
			this->filename->Text = L"myfile.txt";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->pnl2button);
			this->panel2->Controls->Add(this->pnl2textbox);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(573, 467);
			this->panel2->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(456, 2);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L".NET4 & C++ / CLI";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnl2button
			// 
			this->pnl2button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pnl2button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pnl2button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->pnl2button->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl2button->Location = System::Drawing::Point(402, 342);
			this->pnl2button->Name = L"pnl2button";
			this->pnl2button->Size = System::Drawing::Size(128, 68);
			this->pnl2button->TabIndex = 1;
			this->pnl2button->Text = L"OK";
			this->pnl2button->UseVisualStyleBackColor = true;
			this->pnl2button->Click += gcnew System::EventHandler(this, &Form1::pnl2button_Click);
			// 
			// pnl2textbox
			// 
			this->pnl2textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pnl2textbox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl2textbox->Location = System::Drawing::Point(35, 55);
			this->pnl2textbox->Multiline = true;
			this->pnl2textbox->Name = L"pnl2textbox";
			this->pnl2textbox->ReadOnly = true;
			this->pnl2textbox->Size = System::Drawing::Size(293, 303);
			this->pnl2textbox->TabIndex = 0;
			this->pnl2textbox->Text = resources->GetString(L"pnl2textbox.Text");
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::Color::SteelBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(504, 448);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label5->Size = System::Drawing::Size(69, 19);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Saved";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(573, 467);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->filename);
			this->Controls->Add(this->linetextbox);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(593, 510);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NotePad Application";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//		StreamWriter^ text = gcnew StreamWriter("file1.txt"); 
		//text->Write(textBox1->Text); 
//		text->Close(); 
//	}
		 
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel1->Visible)
	{
		panel1->Hide(); 
	}
	else
	{
		panel1->Show();
	}
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Focus(); 
}
private: System::Void newbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	/*int line = 2; 
	textBox1->Clear(); 
	linetextbox->Clear(); 
	filename->Text = "myfile.txt";
	label5->Text = "Saved";
	linetextbox->Text = "1";
	textBox1->Focus(); */
	Application::Restart();  
}
private: System::Void saveasbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ writtentext = gcnew StreamWriter(saveFileDialog1->FileName);
		writtentext->Write(textBox1->Text);
		writtentext->Close();
	}
	label5->Text = "Saved"; 
}
private: System::Void openbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamReader^ file1 = gcnew StreamReader(openFileDialog1->FileName); 
		textBox1->Text = file1->ReadToEnd();
		file1->Close();
	}
	filename->Text = openFileDialog1->FileName; 
	label5->Text = "Saved";

	StreamReader^ file1 = gcnew StreamReader(openFileDialog1->FileName);

	int linecount; 

	while (file1)
	{
		for (linecount; file1->ReadLine();)
		{
			linecount++; 
		}
		break; 
	}
	linetextbox->AppendText("\r\n"); 
	for (int i = 2; i <= linecount; i++)
	{
		linetextbox->AppendText(System::Convert::ToString(i));
		linetextbox->AppendText("\r\n");
	}
	file1->Close();
}

private: System::Void editbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		textBox1->Font = fontDialog1->Font;
		linetextbox->Font = fontDialog1->Font;
	}
}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); 
}


private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ lineno = "\r\n";
	if (e->KeyChar == int(Keys::Enter))
	{
		lineno = lineno + System::Convert::ToString(line);
		linetextbox->AppendText(lineno);
		line++; 
	}

	/*if (e->KeyChar == int(Keys::Back))
	{
		LineDecrease(); 
	}*/


	//also add an event for line decrease
	//same logic
	//use backspace key or line decrease 

	
}
	/*public: void LineDecrease()
	{
		StreamReader^ newfile = gcnew StreamReader(textBox1->Text);
		int linecount;
		while (newfile)
		{
			for (linecount; newfile->ReadLine();)
			{
				linecount++;
			}
			break;
		}

		if (linecount < line)
		{
			linetextbox->AppendText(System::Convert::ToString(linecount));
		}
		newfile->Close();
	}*/
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void aboutbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show(); 
}
private: System::Void pnl2button_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide(); 
}
	public : bool textchange = false;
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) { 
	textchange = true; 
	label5->Text = "UnSaved"; 

	if (filename->Text == "*myfile.txt")
	{
		textchange = false; 
	}
	if (textchange)
	{
		filename->Text = "*" + "myfile.txt";
		textchange = false; 
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyData == Keys::Control + Keys::S)
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter^ writtentext = gcnew StreamWriter(saveFileDialog1->FileName);
			writtentext->Write(textBox1->Text);
			writtentext->Close();
		}
	}
	filename->Text = saveFileDialog1->FileName; 
	label5->Text = "Saved";
}
private: System::Void linetextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//linetextbox->ScrollToCaret(); 
}
};
}
