#pragma once
#include "Functions.h"
#include <iostream>
namespace YSA2Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int Number_of_Middleware = 6;
	int size = 1, size2 = 1;
	int dsize;
	float* position = new float[size];
	float* viewposition = new float[size];
	float* First_Points = new float[size];
	float* V;
	float* W;
	float* FirstW;
	float* FirstV;
	int* desired;
	int x, y;
	float Weight[15];
	float c = 0.5;
	int classnumber,fakeclass;
	int cycle = 0, ClickCount = 0, ClickCountt = 0, BeforeSize = 0;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{		
	public:	
		Graphics^ g;
		System::IO::FileStream^ fs;
		System::IO::StreamWriter^ sw;
		System::IO::StreamReader^ sr;
	private: System::Windows::Forms::Label^  label3;
	public:
		Pen^ pen;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  eBPTAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  showPointsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadTxtToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public:
	public: System::Windows::Forms::ComboBox^  comboBox2;
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  perceptionLearningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  perceptionLearningToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  deltaLearningToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  randomLineToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->perceptionLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perceptionLearningToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deltaLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eBPTAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showPointsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadTxtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(12, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(440, 370);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->perceptionLearningToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(686, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// perceptionLearningToolStripMenuItem
			// 
			this->perceptionLearningToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->perceptionLearningToolStripMenuItem1,
					this->deltaLearningToolStripMenuItem, this->randomLineToolStripMenuItem, this->eBPTAToolStripMenuItem, this->saveToolStripMenuItem,
					this->loadTxtToolStripMenuItem
			});
			this->perceptionLearningToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perceptionLearningToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->perceptionLearningToolStripMenuItem->Name = L"perceptionLearningToolStripMenuItem";
			this->perceptionLearningToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->perceptionLearningToolStripMenuItem->Text = L"Processes";
			// 
			// perceptionLearningToolStripMenuItem1
			// 
			this->perceptionLearningToolStripMenuItem1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->perceptionLearningToolStripMenuItem1->ForeColor = System::Drawing::Color::Aqua;
			this->perceptionLearningToolStripMenuItem1->Name = L"perceptionLearningToolStripMenuItem1";
			this->perceptionLearningToolStripMenuItem1->Size = System::Drawing::Size(207, 22);
			this->perceptionLearningToolStripMenuItem1->Text = L"Perception Learning";
			this->perceptionLearningToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::perceptionLearningToolStripMenuItem1_Click);
			// 
			// deltaLearningToolStripMenuItem
			// 
			this->deltaLearningToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->deltaLearningToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->deltaLearningToolStripMenuItem->Name = L"deltaLearningToolStripMenuItem";
			this->deltaLearningToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->deltaLearningToolStripMenuItem->Text = L"Delta Learning";
			this->deltaLearningToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deltaLearningToolStripMenuItem_Click);
			// 
			// randomLineToolStripMenuItem
			// 
			this->randomLineToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->randomLineToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->randomLineToolStripMenuItem->Name = L"randomLineToolStripMenuItem";
			this->randomLineToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->randomLineToolStripMenuItem->Text = L"Random Line";
			this->randomLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::randomLineToolStripMenuItem_Click);
			// 
			// eBPTAToolStripMenuItem
			// 
			this->eBPTAToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->eBPTAToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->showPointsToolStripMenuItem });
			this->eBPTAToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->eBPTAToolStripMenuItem->Name = L"eBPTAToolStripMenuItem";
			this->eBPTAToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->eBPTAToolStripMenuItem->Text = L"EBPTA";
			this->eBPTAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eBPTAToolStripMenuItem_Click);
			// 
			// showPointsToolStripMenuItem
			// 
			this->showPointsToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->showPointsToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->showPointsToolStripMenuItem->Name = L"showPointsToolStripMenuItem";
			this->showPointsToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->showPointsToolStripMenuItem->Text = L"Show Points";
			this->showPointsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showPointsToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->saveToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// loadTxtToolStripMenuItem
			// 
			this->loadTxtToolStripMenuItem->BackColor = System::Drawing::Color::DarkSlateGray;
			this->loadTxtToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->loadTxtToolStripMenuItem->Name = L"loadTxtToolStripMenuItem";
			this->loadTxtToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->loadTxtToolStripMenuItem->Text = L"Load Txt";
			this->loadTxtToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadTxtToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(232, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(3, 370);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(440, 3);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->ForeColor = System::Drawing::Color::Aqua;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Class 1", L"Class 2", L"Class 3", L"Class 4",
					L"Class 5"
			});
			this->comboBox1->Location = System::Drawing::Point(530, 85);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(458, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Class Number:";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->ForeColor = System::Drawing::Color::Aqua;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->comboBox2->Location = System::Drawing::Point(575, 47);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(76, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->checkBox1->ForeColor = System::Drawing::Color::Aqua;
			this->checkBox1->Location = System::Drawing::Point(524, 121);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(127, 19);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Normalized Data";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(6, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Cycle:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(65, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"0";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox1->ForeColor = System::Drawing::Color::Aqua;
			this->groupBox1->Location = System::Drawing::Point(461, 192);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(190, 139);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Status";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(37, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(37, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(6, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Y:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(6, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"X:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->ForeColor = System::Drawing::Color::Aqua;
			this->label10->Location = System::Drawing::Point(474, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 16);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Class:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::Aqua;
			this->checkBox2->Location = System::Drawing::Point(523, 151);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(123, 19);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->Text = L"Add Middleware";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(686, 427);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		x = System::Convert::ToInt32(e->X);
		y = System::Convert::ToInt32(e->Y);

		int show_x;
		int show_y;

		g = pictureBox1->CreateGraphics();
		if(comboBox1->Text == "Class 1") 
		{

			///// Position
			position[size - 1] = x - pictureBox1->Width / 2;
			size++;
			position[size - 1] = pictureBox1->Height / 2 - y;
			size++;
			position[size - 1] = 1;
			size++;
			////

			/// Show X-Y
			show_x = x - pictureBox1->Width / 2;
			show_y = pictureBox1->Height / 2 - y;
			label8->Text = "" + show_x;
			label9->Text = "" + show_y;
			///

			// Desired Output

			switch (classnumber)
			{
			case 2: {
				desired[dsize - 2] = 1;
				desired[dsize - 1] = -1;
				dsize += 2;

				break;
			}
			case 3: 
			{
				desired[dsize - 3] =  1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] = -1;
				dsize += 3;
			
				break;
			}
			case 4: 
			{
				desired[dsize - 4] =  1;
				desired[dsize - 3] = -1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] = -1;
				dsize += 4;

				break;
			}
			case 5: 
			{
				desired[dsize - 5] = 1;
				desired[dsize - 4] = -1;
				desired[dsize - 3] = -1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] = -1;
				dsize += 5;

				break;
			}
			default:
				break;
			}

			
			////

			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, x, y - 5, x, y + 5);
			g->DrawLine(pen, x - 5, y, x + 5, y);
		}
		else if(comboBox1->Text == "Class 2") 
		{

			///// Position
			position[size - 1] = x - pictureBox1->Width / 2;
			size++;
			position[size - 1] = pictureBox1->Height / 2 - y;
			size++;
			position[size - 1] = 1;
			size++;
			////


			show_x = x - pictureBox1->Width / 2;
			show_y = pictureBox1->Height / 2 - y;
			label8->Text = "" + show_x;
			label9->Text = "" + show_y;


			// Desired Output
			switch (classnumber)
			{
			case 2: {
				desired[dsize - 2] = -1;
				desired[dsize - 1] =  1;
				dsize += 2;

				break;
			}
			case 3:
			{
				desired[dsize - 3] = -1;
				desired[dsize - 2] =  1;
				desired[dsize - 1] = -1;
				dsize += 3;

				break;
			}
			case 4:
			{
				desired[dsize - 4] = -1;
				desired[dsize - 3] =  1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] = -1;
				dsize += 4;

				break;
			}
			case 5:
			{
				desired[dsize - 5] = -1;
				desired[dsize - 4] =  1;
				desired[dsize - 3] = -1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] = -1;
				dsize += 5;

				break;
			}
			default:
				break;
			}
			////

			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, x, y - 5, x, y + 5);
			g->DrawLine(pen, x - 5, y, x + 5, y);
		}
		else if (comboBox1->Text == "Class 3")
		{

			///// Position
			position[size - 1] = x - pictureBox1->Width / 2;
			size++;
			position[size - 1] = pictureBox1->Height / 2 - y;
			size++;
			position[size - 1] = 1;
			size++;
			////

			show_x = x - pictureBox1->Width / 2;
			show_y = pictureBox1->Height / 2 - y;
			label8->Text = "" + show_x;
			label9->Text = "" + show_y;



			// Desired Output
			switch (classnumber)
			{
			case 3:
			{
				desired[dsize - 3] = -1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] =  1;
				dsize += 3;

				break;
			}
			case 4:
			{
				desired[dsize - 4] = -1;
				desired[dsize - 3] = -1;
				desired[dsize - 2] =  1;
				desired[dsize - 1] = -1;
				dsize += 4;

				break;
			}
			case 5:
			{
				desired[dsize - 5] = -1;
				desired[dsize - 4] = -1;
				desired[dsize - 3] =  1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] = -1;
				dsize += 5;

				break;
			}
			default:
				break;
			}
			////

			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, x, y - 5, x, y + 5);
			g->DrawLine(pen, x - 5, y, x + 5, y);
		}
		else if (comboBox1->Text == "Class 4")
		{
			///// Position
			position[size - 1] = x - pictureBox1->Width / 2;
			size++;
			position[size - 1] = pictureBox1->Height / 2 - y;
			size++;
			position[size - 1] = 1;
			size++;
			////

			show_x = x - pictureBox1->Width / 2;
			show_y = pictureBox1->Height / 2 - y;
			label8->Text = "" + show_x;
			label9->Text = "" + show_y;





			// Desired Output
			switch (classnumber)
			{
			
			case 4:
			{
				desired[dsize - 4] = -1;
				desired[dsize - 3] = -1;
				desired[dsize - 2] = -1;
				desired[dsize - 1] =  1;
				dsize += 4;

				break;
			}
			case 5:
			{
				desired[dsize - 5] = -1;
				desired[dsize - 4] = -1;
				desired[dsize - 3] = -1;
				desired[dsize - 2] =  1;
				desired[dsize - 1] = -1;
				dsize += 5;

				break;
			}
			default:
				break;
			}
			////

			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, x, y - 5, x, y + 5);
			g->DrawLine(pen, x - 5, y, x + 5, y);
		}
		else if (comboBox1->Text == "Class 5")
		{

		///// Position
		position[size - 1] = x - pictureBox1->Width / 2;
		size++;
		position[size - 1] = pictureBox1->Height / 2 - y;
		size++;
		position[size - 1] = 1;
		size++;
		////


		show_x = x - pictureBox1->Width / 2;
		show_y = pictureBox1->Height / 2 - y;
		label8->Text = "" + show_x;
		label9->Text = "" + show_y;


		// Desired Output
		desired[dsize - 5] = -1;
		desired[dsize - 4] = -1;
		desired[dsize - 3] = -1;
		desired[dsize - 2] = -1;
		desired[dsize - 1] = 1;
		dsize += 5;
		////

		pen = gcnew Pen(Color::Orange, 2);
		g->DrawLine(pen, x, y - 5, x, y + 5);
		g->DrawLine(pen, x - 5, y, x + 5, y);
		}
	}
private: System::Void perceptionLearningToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	
	float net = 0;
	int k = 0;
	int step = 0;
	float deltaw[3];
	float error = 0;
	bool control[5] = {false,false,false,false,false};
	int count = (size - 1) / 3;
	int* output = new int[classnumber];
	

	if (checkBox1->Checked)
	{
		float sum_x = 0;
		float sum_y = 0;
		float avarage_x = 0, avarage_y = 0;
		float sigmasum_x = 0.0, sigmasum_y = 0.0, sigma_x = 0.0, sigma_y = 0.0;
		for (int r = 0; r < size - 1; r += 3)
		{
			sum_x += position[r];
			sum_y += position[r + 1];
		}
		avarage_x = sum_x / ((size - 1) / 3);
		avarage_y = sum_y / ((size - 1) / 3);
		for (int r = 0; r < size - 1; r += 3)
		{
			sigmasum_x += (position[r] - avarage_x) * (position[r] - avarage_x);
			sigmasum_y += (position[r + 1] - avarage_y) * (position[r + 1] - avarage_y);
		}
		sigma_x = Math::Sqrt(sigmasum_x / ((size - 1) / 3));
		sigma_y = Math::Sqrt(sigmasum_y / ((size - 1) / 3));

		for (int r = 0; r < size - 1; r += 3)
		{
			position[r] = ((position[r] - avarage_x) / sigma_x) ;
			position[r + 1] = ((position[r + 1] - avarage_y) / sigma_y) ;
		}


	}





	while (true)
	{
		error = 0;
		step = 0;
		
		while (step < count)
		{
			k = 0;
			
			while (k < fakeclass)
			{
				net = 0;
				for (int i=0; i < 3; i++)
				{
					net += Weight[i + 3 * k] * position[i + 3*step];
				}
				if (net >= 0)
				{
					output[k] = 1;
				}
				else if (net < 0)
				{
					output[k] = -1;
				}
				k++;
			}

			for (int j = 0; j < classnumber; j++)
			{
				if (desired[j + classnumber* step] == output[j])
				{
					control[j] = true;
				}
				else {
					control[j] = false;
				}

			}

			for (int m = 0; m < fakeclass; m++)
			{

				if (control[m] == false)
				{
					float mul = 0;
					mul = (float)c * (desired[m + classnumber *step] - output[m]);

					for (int p = 0; p < 3; p++)
					{
						deltaw[p] = mul * position[p + 3 * step]; 
						Weight[p + 3 * m] += deltaw[p];
					}

					error += Math::Abs( (desired[m + classnumber * step] - output[m]) ) / (float)2;
				}
			}

			step++;

		}
		cycle++;

		pictureBox1->Refresh();
		float* coordinates;

		switch (classnumber)
		{
		case 2:
		{

			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 3:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 4:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[9], Weight[10], Weight[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 5:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[9], Weight[10], Weight[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[12], Weight[13], Weight[14], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Orange, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);
			break;
		}

		default:  break;
		}


		for (int h = 0; h < size - 1; h += 3) {


			if (checkBox1->Checked)
			{
				viewposition[h] = position[h] * 50;
				viewposition[h + 1] = position[h + 1] * 50;
			}
			else
			{
				viewposition[h] = position[h];
				viewposition[h + 1] = position[h + 1];
			}

			viewposition[h + 2] = position[h + 2];

		}






		int t = 0;
		int m = 0;
		for (int p = 0; p < dsize - classnumber; p += classnumber)
		{

			if (desired[p] == 1)
			{
				pen = gcnew Pen(Color::Red, 2);
			}
			else if (m + 1 < classnumber && desired[p + 1] == 1)
			{
				pen = gcnew Pen(Color::Blue, 2);
			}
			else if (m + 2 < classnumber && desired[p + 2] == 1)
			{
				pen = gcnew Pen(Color::Black, 2);
			}
			else if (m + 3 < classnumber && desired[p + 3] == 1)
			{
				pen = gcnew Pen(Color::Green, 2);
			}
			else if (m + 4 < classnumber && desired[p + 4] == 1)
			{
				pen = gcnew Pen(Color::Orange, 2);
			}

			g->DrawLine(pen, viewposition[t] + pictureBox1->Width / 2, (pictureBox1->Height / 2 - viewposition[t + 1]) - 5, viewposition[t] + pictureBox1->Width / 2, (pictureBox1->Height / 2 - viewposition[t + 1]) + 5);
			g->DrawLine(pen, (viewposition[t] + pictureBox1->Width / 2) - 5, pictureBox1->Height / 2 - viewposition[t + 1], (viewposition[t] + pictureBox1->Width / 2) + 5, (pictureBox1->Height / 2 - viewposition[t + 1]));
			t += 3;
		}

		if (error == 0) {
			
			label5->Text = "" + cycle;
			break;
		}

	}

	
}
	private: System::Void randomLineToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		classnumber = System::Convert::ToInt32(comboBox2->Text);
		fakeclass = System::Convert::ToInt32(comboBox2->Text);
		if (classnumber == 2)
		{
			fakeclass -= 1;
		}
		dsize = classnumber;
		desired = new int[dsize];

		Random rnd;
		g = pictureBox1->CreateGraphics();
		float* coordinates;
		if (checkBox2->Checked)
		{
			V = new float[Number_of_Middleware * 3];
			W = new float[fakeclass * (Number_of_Middleware + 1)];

			FirstV = new float[Number_of_Middleware * 3];
			FirstW = new float[fakeclass * (Number_of_Middleware + 1)];


			for (int p = 0; p < Number_of_Middleware * 3; p++)
			{
				V[p] = (float)rnd.NextDouble();
				FirstV[p] = V[p];
			}

			for (int p = 0; p < fakeclass * (Number_of_Middleware + 1); p++)
			{
				W[p] = (float)rnd.NextDouble();
				FirstW[p] = W[p];
			}



			coordinates = coordinate_point(V[0], V[1], V[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[3], V[4], V[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[6], V[7], V[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[9], V[10], V[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[12], V[13], V[14], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Brown, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[15], V[16], V[17], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Yellow, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

		//	coordinates = coordinate_point(V[18], V[19], V[20], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
		//	pen = gcnew Pen(Color::Gray, 2);
		//	g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

		//	coordinates = coordinate_point(V[21], V[22], V[23], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
	//		pen = gcnew Pen(Color::Pink, 2);
	//		g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);


		}

		else
		{
		
		for (int i = 0; i < 15; i++)
		{
			Weight[i] = (float)rnd.NextDouble();
		}


		switch (classnumber)
		{
		case 2:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 3:
		{

			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 4:
		{

			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[9], Weight[10], Weight[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 5:
		{

			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[9], Weight[10], Weight[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[12], Weight[13], Weight[14], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Orange, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);
			break;
		}

		default:  break;
		}

	}

}
private: System::Void deltaLearningToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	float net = 0;
	int k = 0;
	int step = 0;
	float deltaw[3];
	float error = 0;
	//bool control[5] = { false,false,false,false,false };
	int count = (size - 1) / 3;
	float* fnet = new float[fakeclass];
	float *Tfnet = new float[fakeclass];
//	float fnet = 0;

	if (checkBox1->Checked)
	{
		float sum_x = 0;
		float sum_y = 0;
		float avarage_x = 0, avarage_y = 0;
		float sigmasum_x = 0.0, sigmasum_y = 0.0, sigma_x = 0.0, sigma_y = 0.0 ;
		for (int r = 0; r < size - 1; r += 3)
		{
			sum_x += position[r];
			sum_y += position[r + 1];
		}
		avarage_x = sum_x / ((size - 1) / 3);
		avarage_y = sum_y / ((size - 1) / 3);
		for (int r = 0; r < size - 1; r += 3)
		{
			sigmasum_x += (position[r] - avarage_x) * (position[r] - avarage_x);
			sigmasum_y += (position[r + 1] - avarage_y) * (position[r + 1] - avarage_y);
		}
		sigma_x = Math::Sqrt((sigmasum_x / ((size - 1) / 3)));
		sigma_y = Math::Sqrt((sigmasum_y / ((size - 1) / 3)));

		for (int r = 0; r < size - 1; r += 3)
		{
			position[r] = ((position[r] - avarage_x) / sigma_x) ;
			position[r + 1] = ((position[r + 1] - avarage_y) / sigma_y);
		}


	}
	


	while (true)
	{
		error = 0;
		step = 0;

		while (step < count)
		{
			k = 0;

			while (k < fakeclass)
			{
				net = 0;
				for (int i = 0; i < 3; i++)
				{
					net += Weight[i + 3 * k] * position[i + 3 * step];
				}
	
				fnet[k] = ((float)2 / (1 + Math::Exp(-net))) - (float)1;
				Tfnet[k] = 0.5 * (1 - (fnet[k]*fnet[k]));
				k++;
			}

			float mul = 0;
			for (int m = 0; m < fakeclass; m++)
			{

		
					
					mul = c * (desired[m + classnumber * step] - fnet[m]) * Tfnet[m] ;

					for (int p = 0; p < 3; p++)
					{
						deltaw[p] = mul * position[p + 3 * step];
						Weight[p + 3 * m] += deltaw[p];
					}

					error += ( (desired[m + classnumber * step] - fnet[m])  *  (desired[m + classnumber * step] - fnet[m]) ) / (float)2;
		
			}

			step++;

		}

		cycle++;

		pictureBox1->Refresh();
		float* coordinates;

		switch (classnumber)
		{
		case 2:
		{

			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 3:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 4:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[9], Weight[10], Weight[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			break;
		}
		case 5:
		{
			coordinates = coordinate_point(Weight[0], Weight[1], Weight[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[3], Weight[4], Weight[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[6], Weight[7], Weight[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[9], Weight[10], Weight[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(Weight[12], Weight[13], Weight[14], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Orange, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);
			break;
		}

		default:  break;
		}

		for (int h = 0; h < size - 1; h += 3) {


			if (checkBox1->Checked)
			{
				viewposition[h] = position[h] * 50;
				viewposition[h + 1] = position[h + 1] * 50;
			}
			else
			{
				viewposition[h] = position[h];
				viewposition[h + 1] = position[h + 1];
			}

			viewposition[h + 2] = position[h + 2];
			
		}






		int t = 0;
		int m = 0;
		for (int p = 0; p < dsize - classnumber; p += classnumber)
		{

			if (desired[p] == 1)
			{
				pen = gcnew Pen(Color::Red, 2);
			}
			else if (m + 1 < classnumber && desired[p + 1] == 1)
			{
				pen = gcnew Pen(Color::Blue, 2);
			}
			else if (m + 2 < classnumber && desired[p + 2] == 1)
			{
				pen = gcnew Pen(Color::Black, 2);
			}
			else if (m + 3 < classnumber && desired[p + 3] == 1)
			{
				pen = gcnew Pen(Color::Green, 2);
			}
			else if (m + 4 < classnumber && desired[p + 4] == 1)
			{
				pen = gcnew Pen(Color::Orange, 2);
			}

			g->DrawLine(pen, viewposition[t] + pictureBox1->Width / 2, (pictureBox1->Height / 2 - viewposition[t + 1]) - 5, viewposition[t] + pictureBox1->Width / 2, (pictureBox1->Height / 2 - viewposition[t + 1]) + 5);
			g->DrawLine(pen, (viewposition[t] + pictureBox1->Width / 2) - 5, pictureBox1->Height / 2 - viewposition[t + 1], (viewposition[t] + pictureBox1->Width / 2) + 5, (pictureBox1->Height / 2 - viewposition[t + 1]));
			t += 3;


		}

		if (error >= 0 && error <= 0.05) {

			label5->Text = "" + cycle;
			/*delete[] position;
			delete[] viewposition;
			delete[] Tfnet;
			delete[] fnet;*/
			break;
		}


	}

}

private: System::Void eBPTAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{

	int dotnumber = (size - 1) / 3;
	float* output_j = new float[Number_of_Middleware + 1];
	float* ouput_k = new float[fakeclass];
	float error = 0;
	float constant1 = 0.2, constant2 = 0.3;
	int n = ((size - 1) / 3) + (pictureBox1->Width * pictureBox1->Height);
	float* Picturebox_Point_x = new float[pictureBox1->Width * pictureBox1->Height];
	float* Picturebox_Point_y = new float[pictureBox1->Width * pictureBox1->Height];
	g = pictureBox1->CreateGraphics();


	if (ClickCount != 0)
	{
		for (int c = 0; c < BeforeSize - 1; c += 3)
		{
			position[c] = First_Points[c];
			position[c + 1] = First_Points[c + 1];
			position[c + 2] = First_Points[c + 2];
		}

	}

	for (int y = 0; y < size - 1; y += 3)
	{
		First_Points[y] = position[y];
		First_Points[y + 1] = position[y + 1];
		First_Points[y + 2] = position[y + 2];
	}



	if (checkBox1->Checked)
	{
		float sum_x = 0;
		float sum_y = 0;
		float avarage_x = 0, avarage_y = 0;
		float sigmasum_x = 0.0, sigmasum_y = 0.0, sigma_x = 0.0, sigma_y = 0.0;

		int f = 0;
		for (int x = 185; x > -185; x--)
		{
			for (int z = -220; z < 220; z++)
			{
				Picturebox_Point_x[f] = (float)z;
				Picturebox_Point_y[f] = (float)x;
				f++;
			}

		}


		for (int r = 0; r < size - 1; r += 3)
		{
			sum_x += position[r];
			sum_y += position[r + 1];
		}

		float picture_sum_x = (-220) * (float)370;
		float picture_sum_y = 185 * (float)440;

		sum_x += picture_sum_x;
		sum_y += picture_sum_y;



		avarage_x = sum_x / n;
		avarage_y = sum_y / n;

		for (int r = 0; r < size - 1; r += 3)
		{
			sigmasum_x += (position[r] - avarage_x) * (position[r] - avarage_x);
			sigmasum_y += (position[r + 1] - avarage_y) * (position[r + 1] - avarage_y);
		}

		for (int r = 0; r < pictureBox1->Height * pictureBox1->Width; r++)
		{
			sigmasum_x += (Picturebox_Point_x[r] - avarage_x) * (Picturebox_Point_x[r] - avarage_x);
			sigmasum_y += (Picturebox_Point_y[r] - avarage_y) * (Picturebox_Point_y[r] - avarage_y);
		}



		sigma_x = Math::Sqrt(sigmasum_x / n);
		sigma_y = Math::Sqrt(sigmasum_y / n);

		for (int r = 0; r < size - 1; r += 3)
		{
			position[r] = ((position[r] - avarage_x) / sigma_x);
			position[r + 1] = ((position[r + 1] - avarage_y) / sigma_y);
		}

		for (int r = 0; r < pictureBox1->Height * pictureBox1->Width; r++)
		{
			Picturebox_Point_x[r] = ((Picturebox_Point_x[r] - avarage_x) / sigma_x);
			Picturebox_Point_y[r] = ((Picturebox_Point_y[r] - avarage_y) / sigma_y);
		}



	}
	float sum, errorsum = 0;

	while (true)
	{
		error = 0;
		
		for (int i = 0; i < dotnumber; i++)
		{
			errorsum = 0;
			for (int j = 0; j < Number_of_Middleware; j++)
			{
				sum = 0;
				for (int k = 0; k < 3; k++)
				{
					sum += V[k + 3 * j] * position[k + 3 * i];
				}
				output_j[j] = ((float)2 / (1 + Math::Exp(-2 * sum))) - (float)1;

			}

			output_j[Number_of_Middleware] = 1;


			for (int m = 0; m < fakeclass; m++)
			{

				sum = 0;

				for (int l = 0; l < Number_of_Middleware + 1; l++)
				{

					sum += W[l + (Number_of_Middleware+1) * m] * output_j[l];
				}

				ouput_k[m] = ((float)2 / (1 + Math::Exp(-2 * sum))) - (float)1;
			}

			for (int e = 0; e < fakeclass; e++)
			{
				errorsum += ( (float)desired[e + classnumber * i] - ouput_k[e]) * ( (float)desired[e + classnumber * i] - ouput_k[e]);

			}
			error += errorsum / (float)2;


			//Update W 
			for (int k = 0; k < fakeclass; k++)
			{

				for (int j = 0; j < Number_of_Middleware + 1; j++)
				{
					W[(Number_of_Middleware + 1) * k + j] += constant1 * (desired[k + classnumber * i] - ouput_k[k]) * ((float)1 - (float)Math::Pow(ouput_k[k], 2)) * output_j[j];

				}

			}

			//Update V
			float SumResult = 0;
			for (int j = 0; j < Number_of_Middleware; j++)
			{

				for (int h = 0; h < 3; h++)
				{
					SumResult = 0;

					for (int u = 0; u < fakeclass; u++)
					{
						SumResult += (desired[u + classnumber * i] - ouput_k[u]) *  ((float)1 - (float)Math::Pow(ouput_k[u], 2)) * W[(Number_of_Middleware + 1) * u + j];
					}


					V[3 * j + h] += constant2 * (1.0 - Math::Pow(output_j[j], 2))  * position[h + 3 * i] * SumResult;

				}

			}
			pictureBox1->Refresh();

		

			float* coordinates;
			coordinates = coordinate_point(V[0], V[1], V[2], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[3], V[4], V[5], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[6], V[7], V[8], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Black, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[9], V[10], V[11], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[12], V[13], V[14], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Brown, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

			coordinates = coordinate_point(V[15], V[16], V[17], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			pen = gcnew Pen(Color::Yellow, 2);
			g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

		//	coordinates = coordinate_point(V[18], V[19], V[20], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
		//	pen = gcnew Pen(Color::Gray, 2);
		//	g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);

		//	coordinates = coordinate_point(V[21], V[22], V[23], (float)pictureBox1->Width / 2, (float)-(pictureBox1->Width / 2));
			//pen = gcnew Pen(Color::Pink, 2);
		//	g->DrawLine(pen, (float)0, pictureBox1->Height / 2 - coordinates[1], (float)pictureBox1->Width, pictureBox1->Height / 2 - coordinates[0]);


		} // dotnumber scope


		cycle++;
		label5->Text = "" + cycle;

		if (error <= 0.4)
			break;

	} // while scope

	/*float* Picturebox_Point_x = new float[pictureBox1->Width * pictureBox1->Height];
	float* Picturebox_Point_y = new float[pictureBox1->Width * pictureBox1->Height];
	pictureBox1->Refresh();

	int f = 0;
	for (int x = 185; x > -185; x--)
	{
		for (int z = -220; z < 220; z++)
		{
			Picturebox_Point_x[f] = (float)z;
			Picturebox_Point_y[f] =(float)x;
			f++;
		}

	}


	float sum_x =  (-220) * (float)370;
	float sum_y = 185 * (float)440 ;
	float avarage_x = sum_x / (pictureBox1->Height * pictureBox1->Width);
	float avarage_y = sum_y / (pictureBox1->Height * pictureBox1->Width);
	float sigmasum_x = 0.0, sigmasum_y = 0.0, sigma_x = 0.0, sigma_y = 0.0;


	for (int r = 0; r < pictureBox1->Height * pictureBox1->Width; r++)
	{
		sigmasum_x += (Picturebox_Point_x[r] - avarage_x) * (Picturebox_Point_x[r] - avarage_x);
		sigmasum_y += (Picturebox_Point_y[r] - avarage_y) * (Picturebox_Point_y[r] - avarage_y);
	}
	sigma_x = Math::Sqrt(sigmasum_x / pictureBox1->Height * pictureBox1->Width);
	sigma_y = Math::Sqrt(sigmasum_y / pictureBox1->Height * pictureBox1->Width);

	for (int r = 0; r < pictureBox1->Height * pictureBox1->Width; r++)
	{
		Picturebox_Point_x[r] = ((Picturebox_Point_x[r] - avarage_x) / sigma_x);
		Picturebox_Point_y[r] = ((Picturebox_Point_y[r] - avarage_y) / sigma_y);
	}*/

	//delete[] desired;
	//delete[] position;
	//delete[] viewposition;


	// !!!!!!!
	Bitmap ^ fsum = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
	pictureBox1->Image = fsum;
	Color color;
	int p_x = 0, p_y = 0;
	float add;
	for (int w = 0; w < pictureBox1->Height * pictureBox1->Width; w++)
	{

		for (int j = 0; j < Number_of_Middleware; j++)
		{
			add = 0;
			for (int k = 0; k < 3; k++)
			{
				if (k == 0)
				{
				add += V[k + 3 * j] * Picturebox_Point_x[w];
				}
				else if (k == 1)
				{
				add += V[k + 3 * j] * Picturebox_Point_y[w];
				}
				else if (k == 2)
				{
				add += V[k + 3 * j] * (1);
				}
			}
			output_j[j] = ((float)2 / (1 + Math::Exp(-2 * add))) - (float)1;


		}

		output_j[Number_of_Middleware] = 1;

		for (int m = 0; m < fakeclass; m++)
		{

			add = 0;

			for (int l = 0; l < Number_of_Middleware + 1; l++)
			{

				add += W[l + (Number_of_Middleware + 1) * m] * output_j[l];
			}

			ouput_k[m] = ((float)2 / (1 + Math::Exp(-2 * add))) - (float)1;
		}
		float ControlValue = -800.2;
		int controlindis;
		for (int q = 0; q < fakeclass; q++)
		{
			if (ouput_k[q] >= ControlValue)
			{
				ControlValue = ouput_k[q];
				controlindis = q;

			}

		}

		if (controlindis == 0)
		{
			if (classnumber == 2)
			{
				if (ouput_k[controlindis] > 0)
				{
					color = Color::FromArgb(255, 128, 128);
					fsum->SetPixel(p_x, p_y, color);
				}
				else {
					color = Color::FromArgb(153, 194, 255);
					fsum->SetPixel(p_x, p_y, color);
				}
			}
			else {
				color = Color::FromArgb(255, 128, 128);
				fsum->SetPixel(p_x, p_y, color);
			}
		}
		else if (controlindis == 1)
		{
			color = Color::FromArgb(153, 194, 255);
			fsum->SetPixel(p_x, p_y, color);

		}
		else if (controlindis == 2)
		{
			color = Color::FromArgb(166, 166, 166);
			fsum->SetPixel(p_x, p_y, color);
		}
		else if (controlindis == 3)
		{
			color = Color::FromArgb(173, 235, 173);
			fsum->SetPixel(p_x, p_y, color);
		}

		p_x++;
		if (p_x == 440)
		{
			p_x = 0;
			p_y++;
		}

} // noktalar
	ClickCount++;
	BeforeSize = size;
//	delete[] output_j;
//	delete[] ouput_k;
//	delete[] V;
//	delete[] W;
	
}
private: System::Void showPointsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	int t = 0;
	int m = 0;
	for (int p = 0; p < dsize - classnumber; p += classnumber)
	{

		if (desired[p] == 1)
		{
			pen = gcnew Pen(Color::Red, 2);
		}
		else if (m + 1 < classnumber && desired[p + 1] == 1)
		{
			pen = gcnew Pen(Color::Blue, 2);
		}
		else if (m + 2 < classnumber && desired[p + 2] == 1)
		{
			pen = gcnew Pen(Color::Black, 2);
		}
		else if (m + 3 < classnumber && desired[p + 3] == 1)
		{
			pen = gcnew Pen(Color::Green, 2);
		}
		else if (m + 4 < classnumber && desired[p + 4] == 1)
		{
			pen = gcnew Pen(Color::Orange, 2);
		}

		g->DrawLine(pen, First_Points[t] + pictureBox1->Width / 2, (pictureBox1->Height / 2 - First_Points[t + 1]) - 5, First_Points[t] + pictureBox1->Width / 2, (pictureBox1->Height / 2 - First_Points[t + 1]) + 5);
		g->DrawLine(pen, (First_Points[t] + pictureBox1->Width / 2) - 5, pictureBox1->Height / 2 - First_Points[t + 1], (First_Points[t] + pictureBox1->Width / 2) + 5, (pictureBox1->Height / 2 - First_Points[t + 1]));
		t += 3;


	}


}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//fs = gcnew System::IO::FileStream("data.txt", System::IO::FileMode::Create);
	//String^ fileName = ;
	openFileDialog1->ShowDialog();
	String^ file = openFileDialog1->FileName;
	sw = gcnew System::IO::StreamWriter(file);
	sw->WriteLine(classnumber);
	sw->WriteLine(size);
	sw->WriteLine(dsize);
	for (int p = 0; p < Number_of_Middleware * 3; p++)
	{
		sw->WriteLine(FirstV[p]);
	}

	for (int p = 0; p < fakeclass * (Number_of_Middleware + 1); p++)
	{
		sw->WriteLine(FirstW[p]);
	}

	for (int i = 0; i < size - 1; i++)
	{
		sw->WriteLine(First_Points[i]);
	}

	for (int j = 0; j < dsize - classnumber; j++)
	{
		sw->WriteLine(desired[j]);
	}


	sw->Close();
}
private: System::Void loadTxtToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{	
		String^  ss;
		openFileDialog1->ShowDialog();
		float x;
		sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);

		ss = sr->ReadLine();
		classnumber = int::Parse(ss);

		if (classnumber == 2)
		{
			fakeclass = 1;
		}
		else {
			fakeclass = classnumber;
		}

		ss = sr->ReadLine();
		size = int::Parse(ss);

		ss = sr->ReadLine();
		dsize = int::Parse(ss);

		desired = new int[dsize];
		FirstV = new float[Number_of_Middleware * 3];
		FirstW = new float[fakeclass * (Number_of_Middleware + 1)];
		V = new float[Number_of_Middleware * 3];
		W = new float[fakeclass * (Number_of_Middleware + 1)];
		
		for (int p = 0; p < Number_of_Middleware * 3; p++)
		{
			ss = sr->ReadLine();
			V[p] = float::Parse(ss);
		}

		for (int p = 0; p < fakeclass * (Number_of_Middleware + 1); p++)
		{
			ss = sr->ReadLine();
			W[p] = float::Parse(ss);
		}
			
		for (int i = 0; i < size - 1; i++)
		{
			ss = sr->ReadLine();
			position[i] = float::Parse(ss);
		}

		for (int y = 0; y < dsize - classnumber; y++)
		{
			ss = sr->ReadLine();
			desired[y] = int::Parse(ss);
		}

		sr->Close();
}
};
}
