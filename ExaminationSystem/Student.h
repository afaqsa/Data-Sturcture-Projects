#pragma once
#include "FileHandling.h"
namespace ExaminationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Student(void)
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
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Data data;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ info_heading;

	private: System::Windows::Forms::RadioButton^ del_radiobtn;

	private: System::Windows::Forms::RadioButton^ edite_radiobtn;

	private: System::Windows::Forms::RadioButton^ insert_radiobtn;
	private: System::Windows::Forms::TextBox^ FirstNametextBox;


	private: System::Windows::Forms::Label^ FirstName;
	private: System::Windows::Forms::TextBox^ LastNameTextBox;


	private: System::Windows::Forms::Label^ LastName;
	private: System::Windows::Forms::Label^ Dept;





	private: System::Windows::Forms::Label^ Reg_no;
	private: System::Windows::Forms::Label^ Exam_Time;





	private: System::Windows::Forms::Label^ batch;








	private: System::Windows::Forms::Button^ insert_btn;
	private: System::Windows::Forms::Button^ back_btn;


	private: System::Windows::Forms::Button^ reset_btn;
	private: System::Windows::Forms::TextBox^ RollNotoFind;

	private: System::Windows::Forms::Button^ check;


	private: System::Windows::Forms::Label^ Room;

	private: System::Windows::Forms::ComboBox^ DeptoFind;



	private: System::Windows::Forms::Panel^ Ed_panel;
	private: System::Windows::Forms::Label^ depfind;


	private: System::Windows::Forms::Button^ back_btn1;
	private: System::Windows::Forms::Label^ idFind;


	private: System::Windows::Forms::Panel^ insert_panel;








	private: System::Windows::Forms::TextBox^ RegNotextBox;
	private: System::Windows::Forms::ComboBox^ chose_Dept;
	private: System::Windows::Forms::ComboBox^ chose_room;

	private: System::Windows::Forms::ComboBox^ chose_batch;

	private: System::Windows::Forms::ComboBox^ chose_time;

	public: bool closed = false;

	private: Node^ found;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->info_heading = (gcnew System::Windows::Forms::Label());
			this->del_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->edite_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->insert_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->FirstNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->LastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LastName = (gcnew System::Windows::Forms::Label());
			this->Dept = (gcnew System::Windows::Forms::Label());
			this->Reg_no = (gcnew System::Windows::Forms::Label());
			this->Exam_Time = (gcnew System::Windows::Forms::Label());
			this->batch = (gcnew System::Windows::Forms::Label());
			this->insert_btn = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->reset_btn = (gcnew System::Windows::Forms::Button());
			this->RollNotoFind = (gcnew System::Windows::Forms::TextBox());
			this->check = (gcnew System::Windows::Forms::Button());
			this->Room = (gcnew System::Windows::Forms::Label());
			this->DeptoFind = (gcnew System::Windows::Forms::ComboBox());
			this->Ed_panel = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->depfind = (gcnew System::Windows::Forms::Label());
			this->back_btn1 = (gcnew System::Windows::Forms::Button());
			this->idFind = (gcnew System::Windows::Forms::Label());
			this->insert_panel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chose_room = (gcnew System::Windows::Forms::ComboBox());
			this->chose_batch = (gcnew System::Windows::Forms::ComboBox());
			this->chose_time = (gcnew System::Windows::Forms::ComboBox());
			this->chose_Dept = (gcnew System::Windows::Forms::ComboBox());
			this->RegNotextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Ed_panel->SuspendLayout();
			this->insert_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::RosyBrown;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->info_heading);
			this->panel1->Controls->Add(this->del_radiobtn);
			this->panel1->Controls->Add(this->edite_radiobtn);
			this->panel1->Controls->Add(this->insert_radiobtn);
			this->panel1->Location = System::Drawing::Point(-2, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 561);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Select option";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// info_heading
			// 
			this->info_heading->Font = (gcnew System::Drawing::Font(L"Georgia", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info_heading->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->info_heading->Location = System::Drawing::Point(10, 85);
			this->info_heading->Name = L"info_heading";
			this->info_heading->Size = System::Drawing::Size(211, 93);
			this->info_heading->TabIndex = 1;
			this->info_heading->Text = L"Student Information";
			// 
			// del_radiobtn
			// 
			this->del_radiobtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_radiobtn->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_radiobtn->Location = System::Drawing::Point(29, 337);
			this->del_radiobtn->Name = L"del_radiobtn";
			this->del_radiobtn->Size = System::Drawing::Size(165, 44);
			this->del_radiobtn->TabIndex = 0;
			this->del_radiobtn->Text = L"Delete Data ";
			this->del_radiobtn->UseVisualStyleBackColor = true;
			this->del_radiobtn->CheckedChanged += gcnew System::EventHandler(this, &Student::edite_CheckedChanged);
			// 
			// edite_radiobtn
			// 
			this->edite_radiobtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edite_radiobtn->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edite_radiobtn->Location = System::Drawing::Point(29, 273);
			this->edite_radiobtn->Name = L"edite_radiobtn";
			this->edite_radiobtn->Size = System::Drawing::Size(138, 44);
			this->edite_radiobtn->TabIndex = 0;
			this->edite_radiobtn->Text = L"Edit Data ";
			this->edite_radiobtn->UseVisualStyleBackColor = true;
			this->edite_radiobtn->CheckedChanged += gcnew System::EventHandler(this, &Student::edite_CheckedChanged);
			// 
			// insert_radiobtn
			// 
			this->insert_radiobtn->Checked = true;
			this->insert_radiobtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->insert_radiobtn->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert_radiobtn->Location = System::Drawing::Point(29, 223);
			this->insert_radiobtn->Name = L"insert_radiobtn";
			this->insert_radiobtn->Size = System::Drawing::Size(159, 44);
			this->insert_radiobtn->TabIndex = 0;
			this->insert_radiobtn->TabStop = true;
			this->insert_radiobtn->Text = L"Insert Data ";
			this->insert_radiobtn->UseVisualStyleBackColor = true;
			this->insert_radiobtn->CheckedChanged += gcnew System::EventHandler(this, &Student::insert_radiobtn_CheckedChanged);
			// 
			// FirstNametextBox
			// 
			this->FirstNametextBox->BackColor = System::Drawing::Color::Snow;
			this->FirstNametextBox->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNametextBox->Location = System::Drawing::Point(253, 112);
			this->FirstNametextBox->Name = L"FirstNametextBox";
			this->FirstNametextBox->Size = System::Drawing::Size(186, 26);
			this->FirstNametextBox->TabIndex = 1;
			// 
			// FirstName
			// 
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FirstName->Location = System::Drawing::Point(63, 115);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(125, 23);
			this->FirstName->TabIndex = 2;
			this->FirstName->Text = L"First Name : ";
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->BackColor = System::Drawing::Color::Snow;
			this->LastNameTextBox->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameTextBox->Location = System::Drawing::Point(253, 154);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(186, 26);
			this->LastNameTextBox->TabIndex = 1;
			// 
			// LastName
			// 
			this->LastName->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->LastName->Location = System::Drawing::Point(63, 153);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(128, 23);
			this->LastName->TabIndex = 2;
			this->LastName->Text = L"Last Name : ";
			// 
			// Dept
			// 
			this->Dept->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dept->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Dept->Location = System::Drawing::Point(63, 195);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(124, 23);
			this->Dept->TabIndex = 2;
			this->Dept->Text = L"Department :";
			// 
			// Reg_no
			// 
			this->Reg_no->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reg_no->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Reg_no->Location = System::Drawing::Point(63, 239);
			this->Reg_no->Name = L"Reg_no";
			this->Reg_no->Size = System::Drawing::Size(100, 23);
			this->Reg_no->TabIndex = 2;
			this->Reg_no->Text = L"Rig no:";
			// 
			// Exam_Time
			// 
			this->Exam_Time->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exam_Time->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Exam_Time->Location = System::Drawing::Point(63, 289);
			this->Exam_Time->Name = L"Exam_Time";
			this->Exam_Time->Size = System::Drawing::Size(124, 23);
			this->Exam_Time->TabIndex = 2;
			this->Exam_Time->Text = L"Exam Time :";
			// 
			// batch
			// 
			this->batch->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->batch->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->batch->Location = System::Drawing::Point(63, 334);
			this->batch->Name = L"batch";
			this->batch->Size = System::Drawing::Size(124, 23);
			this->batch->TabIndex = 2;
			this->batch->Text = L"Year/batch :";
			// 
			// insert_btn
			// 
			this->insert_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->insert_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->insert_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->insert_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->insert_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert_btn->Location = System::Drawing::Point(381, 455);
			this->insert_btn->Name = L"insert_btn";
			this->insert_btn->Size = System::Drawing::Size(116, 36);
			this->insert_btn->TabIndex = 5;
			this->insert_btn->Text = L"Insert";
			this->insert_btn->UseVisualStyleBackColor = false;
			this->insert_btn->Click += gcnew System::EventHandler(this, &Student::insert_btn_Click);
			this->insert_btn->MouseLeave += gcnew System::EventHandler(this, &Student::insert_btn_MouseLeave);
			this->insert_btn->MouseHover += gcnew System::EventHandler(this, &Student::insert_btn_MouseHover);
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(39, 459);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(109, 36);
			this->back_btn->TabIndex = 6;
			this->back_btn->Text = L"Back ";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &Student::back_btn_Click);
			this->back_btn->MouseLeave += gcnew System::EventHandler(this, &Student::back_btn_MouseLeave);
			this->back_btn->MouseHover += gcnew System::EventHandler(this, &Student::back_btn_MouseHover);
			// 
			// reset_btn
			// 
			this->reset_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->reset_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->reset_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_btn->Location = System::Drawing::Point(212, 459);
			this->reset_btn->Name = L"reset_btn";
			this->reset_btn->Size = System::Drawing::Size(116, 36);
			this->reset_btn->TabIndex = 5;
			this->reset_btn->Text = L"Reset";
			this->reset_btn->UseVisualStyleBackColor = false;
			this->reset_btn->Click += gcnew System::EventHandler(this, &Student::reset_btn_Click);
			this->reset_btn->MouseLeave += gcnew System::EventHandler(this, &Student::reset_btn_MouseLeave);
			this->reset_btn->MouseHover += gcnew System::EventHandler(this, &Student::reset_btn_MouseHover);
			// 
			// RollNotoFind
			// 
			this->RollNotoFind->BackColor = System::Drawing::Color::Snow;
			this->RollNotoFind->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RollNotoFind->Location = System::Drawing::Point(250, 215);
			this->RollNotoFind->Name = L"RollNotoFind";
			this->RollNotoFind->Size = System::Drawing::Size(183, 26);
			this->RollNotoFind->TabIndex = 1;
			this->RollNotoFind->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Student::RegNotextBox_KeyPress);
			// 
			// check
			// 
			this->check->BackColor = System::Drawing::Color::WhiteSmoke;
			this->check->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->check->Cursor = System::Windows::Forms::Cursors::Hand;
			this->check->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->check->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check->Location = System::Drawing::Point(378, 407);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(85, 32);
			this->check->TabIndex = 5;
			this->check->Text = L"Check";
			this->check->UseVisualStyleBackColor = false;
			this->check->Click += gcnew System::EventHandler(this, &Student::check_Click);
			this->check->MouseLeave += gcnew System::EventHandler(this, &Student::check_MouseLeave);
			this->check->MouseHover += gcnew System::EventHandler(this, &Student::check_MouseHover);
			// 
			// Room
			// 
			this->Room->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Room->Location = System::Drawing::Point(67, 385);
			this->Room->Name = L"Room";
			this->Room->Size = System::Drawing::Size(124, 23);
			this->Room->TabIndex = 2;
			this->Room->Text = L"Room no:";
			// 
			// DeptoFind
			// 
			this->DeptoFind->Font = (gcnew System::Drawing::Font(L"Georgia", 11));
			this->DeptoFind->FormattingEnabled = true;
			this->DeptoFind->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BSCS", L"BSSE", L"BSEE" });
			this->DeptoFind->Location = System::Drawing::Point(250, 275);
			this->DeptoFind->Name = L"DeptoFind";
			this->DeptoFind->Size = System::Drawing::Size(183, 26);
			this->DeptoFind->TabIndex = 3;
			this->DeptoFind->Leave += gcnew System::EventHandler(this, &Student::DeptoFind_Leave);
			// 
			// Ed_panel
			// 
			this->Ed_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Ed_panel->Controls->Add(this->label11);
			this->Ed_panel->Controls->Add(this->depfind);
			this->Ed_panel->Controls->Add(this->back_btn1);
			this->Ed_panel->Controls->Add(this->idFind);
			this->Ed_panel->Controls->Add(this->check);
			this->Ed_panel->Controls->Add(this->DeptoFind);
			this->Ed_panel->Controls->Add(this->RollNotoFind);
			this->Ed_panel->Location = System::Drawing::Point(266, 12);
			this->Ed_panel->Name = L"Ed_panel";
			this->Ed_panel->Size = System::Drawing::Size(509, 537);
			this->Ed_panel->TabIndex = 8;
			this->Ed_panel->Visible = false;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(168, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(211, 47);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Information";
			// 
			// depfind
			// 
			this->depfind->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depfind->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depfind->Location = System::Drawing::Point(86, 274);
			this->depfind->Name = L"depfind";
			this->depfind->Size = System::Drawing::Size(124, 23);
			this->depfind->TabIndex = 7;
			this->depfind->Text = L"Department :";
			// 
			// back_btn1
			// 
			this->back_btn1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->back_btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back_btn1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn1->Location = System::Drawing::Point(75, 407);
			this->back_btn1->Name = L"back_btn1";
			this->back_btn1->Size = System::Drawing::Size(109, 36);
			this->back_btn1->TabIndex = 6;
			this->back_btn1->Text = L"Back ";
			this->back_btn1->UseVisualStyleBackColor = false;
			this->back_btn1->Click += gcnew System::EventHandler(this, &Student::back_btn1_Click);
			this->back_btn1->MouseLeave += gcnew System::EventHandler(this, &Student::back_btn1_MouseLeave);
			this->back_btn1->MouseHover += gcnew System::EventHandler(this, &Student::back_btn1_MouseHover);
			// 
			// idFind
			// 
			this->idFind->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idFind->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->idFind->Location = System::Drawing::Point(86, 214);
			this->idFind->Name = L"idFind";
			this->idFind->Size = System::Drawing::Size(145, 23);
			this->idFind->TabIndex = 6;
			this->idFind->Text = L"Enter Reg no:";
			// 
			// insert_panel
			// 
			this->insert_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->insert_panel->Controls->Add(this->label1);
			this->insert_panel->Controls->Add(this->chose_room);
			this->insert_panel->Controls->Add(this->chose_batch);
			this->insert_panel->Controls->Add(this->chose_time);
			this->insert_panel->Controls->Add(this->chose_Dept);
			this->insert_panel->Controls->Add(this->back_btn);
			this->insert_panel->Controls->Add(this->reset_btn);
			this->insert_panel->Controls->Add(this->insert_btn);
			this->insert_panel->Controls->Add(this->batch);
			this->insert_panel->Controls->Add(this->Room);
			this->insert_panel->Controls->Add(this->Exam_Time);
			this->insert_panel->Controls->Add(this->Reg_no);
			this->insert_panel->Controls->Add(this->Dept);
			this->insert_panel->Controls->Add(this->LastName);
			this->insert_panel->Controls->Add(this->FirstName);
			this->insert_panel->Controls->Add(this->RegNotextBox);
			this->insert_panel->Controls->Add(this->LastNameTextBox);
			this->insert_panel->Controls->Add(this->FirstNametextBox);
			this->insert_panel->Location = System::Drawing::Point(263, 15);
			this->insert_panel->Name = L"insert_panel";
			this->insert_panel->Size = System::Drawing::Size(509, 534);
			this->insert_panel->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(171, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 47);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Information";
			// 
			// chose_room
			// 
			this->chose_room->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chose_room->FormattingEnabled = true;
			this->chose_room->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"GF-101", L"GF-102", L"GF-103", L"GF-104", L"GF-105",
					L"GF-106", L"GF-107", L"GF-108", L"GF-109", L"GF-110", L"FF-146", L"FF-147", L"FF-148", L"FF-149", L"FF-150", L"FF-151", L"FF-152",
					L"FF-153", L"FF-154", L"FF-155", L"SF-201", L"SF-202", L"SF-203", L"SF-204", L"SF-205", L"SF-206", L"SF-207", L"SF-208", L"SF-209",
					L"SF-210"
			});
			this->chose_room->Location = System::Drawing::Point(253, 382);
			this->chose_room->Name = L"chose_room";
			this->chose_room->Size = System::Drawing::Size(186, 26);
			this->chose_room->TabIndex = 8;
			// 
			// chose_batch
			// 
			this->chose_batch->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chose_batch->FormattingEnabled = true;
			this->chose_batch->Items->AddRange(gcnew cli::array< System::Object^  >(81) {
				L"1990", L"1991", L"1992", L"1993", L"1994",
					L"1995", L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008",
					L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019", L"2020", L"2021", L"2022",
					L"2023", L"2024", L"2025", L"2026", L"2027", L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036",
					L"2037", L"2038", L"2039", L"2040", L"2041", L"2042", L"2043", L"2044", L"2045", L"2046", L"2047", L"2048", L"2049", L"2050",
					L"2051", L"2052", L"2053", L"2054", L"2055", L"2056", L"2057", L"2058", L"2059", L"2060", L"2061", L"2062", L"2063", L"2064",
					L"2065", L"2066", L"2067", L"2068", L"2069", L"2070"
			});
			this->chose_batch->Location = System::Drawing::Point(253, 334);
			this->chose_batch->Name = L"chose_batch";
			this->chose_batch->Size = System::Drawing::Size(186, 26);
			this->chose_batch->TabIndex = 8;
			// 
			// chose_time
			// 
			this->chose_time->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chose_time->FormattingEnabled = true;
			this->chose_time->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"9AM-11AM", L"12PM-2PM", L"3PM-5PM  " });
			this->chose_time->Location = System::Drawing::Point(253, 286);
			this->chose_time->Name = L"chose_time";
			this->chose_time->Size = System::Drawing::Size(186, 26);
			this->chose_time->TabIndex = 8;
			// 
			// chose_Dept
			// 
			this->chose_Dept->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chose_Dept->FormattingEnabled = true;
			this->chose_Dept->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BSCS", L"BSSE", L"BSEE" });
			this->chose_Dept->Location = System::Drawing::Point(253, 196);
			this->chose_Dept->Name = L"chose_Dept";
			this->chose_Dept->Size = System::Drawing::Size(186, 26);
			this->chose_Dept->TabIndex = 8;
			this->chose_Dept->Leave += gcnew System::EventHandler(this, &Student::chose_Dept_Leave);
			// 
			// RegNotextBox
			// 
			this->RegNotextBox->BackColor = System::Drawing::Color::Snow;
			this->RegNotextBox->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegNotextBox->Location = System::Drawing::Point(253, 240);
			this->RegNotextBox->Name = L"RegNotextBox";
			this->RegNotextBox->Size = System::Drawing::Size(186, 26);
			this->RegNotextBox->TabIndex = 1;
			this->RegNotextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Student::RegNotextBox_KeyPress);
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->insert_panel);
			this->Controls->Add(this->Ed_panel);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Student";
			this->Load += gcnew System::EventHandler(this, &Student::Student_Load);
			this->Leave += gcnew System::EventHandler(this, &Student::Student_Leave);
			this->Resize += gcnew System::EventHandler(this, &Student::Student_Resize);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Ed_panel->ResumeLayout(false);
			this->Ed_panel->PerformLayout();
			this->insert_panel->ResumeLayout(false);
			this->insert_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Drawing::Rectangle^ label11_points;
	private: System::Drawing::Rectangle^ FirstName_points;
	private: System::Drawing::Rectangle^ FirstNametextBox_points;
	private: System::Drawing::Rectangle^ LastName_points;
	private: System::Drawing::Rectangle^ LastNameTextBox_point;
	private: System::Drawing::Rectangle^ Dept_point;
	private: System::Drawing::Rectangle^ chose_Dept_point;
	private: System::Drawing::Rectangle^ Id_no_point;
	private: System::Drawing::Rectangle^ Exam_Time_point;
	private: System::Drawing::Rectangle^ chose_time_point;
	private: System::Drawing::Rectangle^ RegNotextBox_point;
	private: System::Drawing::Rectangle^ Room_point;
	private: System::Drawing::Rectangle^ chose_room_point;
	private: System::Drawing::Rectangle^ insert_btn_point;
	private: System::Drawing::Rectangle^ reset_btn_point;
	private: System::Drawing::Rectangle^ back_btn_point;
	private: System::Drawing::Rectangle^ idFind_point;
	private: System::Drawing::Rectangle^ RollNotoFind_point;
	private: System::Drawing::Rectangle^ depfind_point;
	private: System::Drawing::Rectangle^ DeptoFind_point;
	private: System::Drawing::Rectangle^ check_point;
	private: System::Drawing::Rectangle^ back_btn1_point;
	private: System::Drawing::Rectangle^ batch_point;
	private: System::Drawing::Rectangle^ chose_batch_point;
		   System::Drawing::Size^ pan_size;
		 private: System::Drawing::Size size;
				int Loc_X;
				int Loc_y;
				//Location
		public: void setSize(System::Drawing::Size s, int x, int y) {
			size = s;
			Loc_X = x;
			Loc_y = y;
		}
	private: System::Void Student_Load(System::Object^ sender, System::EventArgs^ e) {
		data.isStudentData = true;
		pan_size = this->insert_panel->Size;
		label11_points = gcnew System::Drawing::Rectangle(label11->Location.X, label11->Location.Y, label11->Size.Width, label11->Size.Height);
		FirstName_points = gcnew System::Drawing::Rectangle(FirstName->Location.X, FirstName->Location.Y, FirstName->Size.Width, FirstName->Size.Height);
		FirstNametextBox_points = gcnew System::Drawing::Rectangle(FirstNametextBox->Location.X, FirstNametextBox->Location.Y, FirstNametextBox->Size.Width, FirstNametextBox->Size.Height);
		LastName_points = gcnew System::Drawing::Rectangle(LastName->Location.X, LastName->Location.Y, LastName->Size.Width, LastName->Size.Height);
		LastNameTextBox_point = gcnew System::Drawing::Rectangle(LastNameTextBox->Location.X, LastNameTextBox->Location.Y, LastNameTextBox->Size.Width, LastNameTextBox->Size.Height);
		Dept_point = gcnew System::Drawing::Rectangle(Dept->Location.X, Dept->Location.Y, Dept->Size.Width, Dept->Size.Height);
		chose_Dept_point = gcnew System::Drawing::Rectangle(chose_Dept->Location.X, chose_Dept->Location.Y, chose_Dept->Size.Width, chose_Dept->Size.Height);
		Id_no_point = gcnew System::Drawing::Rectangle(Reg_no->Location.X, Reg_no->Location.Y, Reg_no->Size.Width, Reg_no->Size.Height);
		RegNotextBox_point = gcnew System::Drawing::Rectangle(RegNotextBox->Location.X, RegNotextBox->Location.Y, RegNotextBox->Size.Width, RegNotextBox->Size.Height);
		Exam_Time_point = gcnew System::Drawing::Rectangle(Exam_Time->Location.X, Exam_Time->Location.Y, Exam_Time->Size.Width, Exam_Time->Size.Height);
		chose_time_point = gcnew System::Drawing::Rectangle(chose_time->Location.X, chose_time->Location.Y, chose_time->Size.Width, chose_time->Size.Height);
		Room_point = gcnew System::Drawing::Rectangle(Room->Location.X, Room->Location.Y, Room->Size.Width, Room->Size.Height);
		chose_room_point = gcnew System::Drawing::Rectangle(chose_room->Location.X, chose_room->Location.Y, chose_room->Size.Width, chose_room->Size.Height);
		insert_btn_point = gcnew System::Drawing::Rectangle(insert_btn->Location.X, insert_btn->Location.Y, insert_btn->Size.Width, insert_btn->Size.Height);
		reset_btn_point = gcnew System::Drawing::Rectangle(reset_btn->Location.X, reset_btn->Location.Y, reset_btn->Size.Width, reset_btn->Size.Height);
		back_btn_point = gcnew System::Drawing::Rectangle(back_btn->Location.X, back_btn->Location.Y, back_btn->Size.Width, back_btn->Size.Height);
		idFind_point = gcnew System::Drawing::Rectangle(idFind->Location.X, idFind->Location.Y, idFind->Size.Width, idFind->Size.Height);
		RollNotoFind_point = gcnew System::Drawing::Rectangle(RollNotoFind->Location.X, RollNotoFind->Location.Y, RollNotoFind->Size.Width, RollNotoFind->Size.Height);
		depfind_point = gcnew System::Drawing::Rectangle(depfind->Location.X, depfind->Location.Y, depfind->Size.Width, depfind->Size.Height);
		DeptoFind_point = gcnew System::Drawing::Rectangle(DeptoFind->Location.X, DeptoFind->Location.Y, DeptoFind->Size.Width, DeptoFind->Size.Height);
		check_point = gcnew System::Drawing::Rectangle(check->Location.X, check->Location.Y, check->Size.Width, check->Size.Height);
		back_btn1_point = gcnew System::Drawing::Rectangle(back_btn1->Location.X, back_btn1->Location.Y, back_btn1->Size.Width, back_btn1->Size.Height);
		batch_point =gcnew System::Drawing::Rectangle(batch->Location.X, batch->Location.Y, batch->Size.Width, batch->Size.Height);
		chose_batch_point = gcnew System::Drawing::Rectangle(chose_batch->Location.X, chose_batch->Location.Y, chose_batch->Size.Width, chose_batch->Size.Height);

		this -> Location.X = Loc_X;
		this->Location.Y = Loc_y;
		this->Size = size;
	}

	private: System::Void edite_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		insert_panel->Visible = false;
		Ed_panel->Visible = true;
		if (del_radiobtn->Checked)
			insert_btn->Text = "Delete";
		else
			insert_btn->Text = "Edit";
		reset_btn->Visible = false;
	}
	private: System::Void insert_radiobtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		insert_panel->Visible = true;
		Ed_panel->Visible = false;
		insert_btn->Text = "Insert";
		reset_btn->Visible = true;
}

	private: System::Void insert_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		insert_btn->BackColor = System::Drawing::Color::Red;
	
	}
	private: System::Void insert_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		insert_btn->BackColor = System::Drawing::Color::WhiteSmoke;
	}

	private: System::Void reset_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		reset_btn->BackColor = System::Drawing::Color::Red;

	}
	private: System::Void reset_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		reset_btn->BackColor = System::Drawing::Color::WhiteSmoke;

	}
	private: System::Void back_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	
		back_btn->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void back_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		back_btn->BackColor = System::Drawing::Color::WhiteSmoke;

	}

	private: System::Void back_btn1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		back_btn1->BackColor = System::Drawing::Color::Red;
	}

	private: System::Void check_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		check->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void back_btn1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		back_btn1->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	private: System::Void check_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		check->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	  private: System::Void back_btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		  Closing();
	}
	private: void Reset() {
		FirstNametextBox->Text = "";
		LastNameTextBox->Text = "";
		RegNotextBox->Text = "";
		chose_Dept->Text = "";
		chose_batch->Text = "";
		chose_room->Text = "";
		chose_time->Text = "";

	}
	private: System::Void insert_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (insert_radiobtn->Checked) {
			
				if (!is_validData()) {
					MessageBox::Show("Please Enter Correct Information");

				}

				else if (data.check(System::Convert::ToInt32(RegNotextBox->Text), chose_Dept->Text)) {
					MessageBox::Show("Registeration number Already Present");
				}
				else {

					data.Write(System::Convert::ToInt32(RegNotextBox->Text), FirstNametextBox->Text, LastNameTextBox->Text,
						chose_Dept->Text, chose_batch->Text, chose_room->Text,chose_time->Text);
					Reset();
				}
			
		}
		else if (edite_radiobtn->Checked) {
			
			EditeNode(found);
			Reset();
		}
		else if (del_radiobtn->Checked) {
			data.deleteData(found);
			Reset();
		}
	}   
	private: void EditeNode(Node^ value) {
		value->first_name = FirstNametextBox->Text;
		value->last_name  = LastNameTextBox->Text ;
		value->roll_no	  = System::Convert::ToInt32(RegNotextBox->Text);
		value->depart	  = chose_Dept->Text;
		value->year		  = chose_batch->Text;
		value->room_no	  = chose_room->Text;
		value->timing	  = chose_time->Text;
		data.Update();
	}
	private: bool is_validData() {
		if (RegNotextBox->Text == "" || FirstNametextBox->Text == "" || LastNameTextBox->Text == ""
			|| chose_Dept->Text == "" || chose_batch->Text == "" || chose_room->SelectedItem == "" ||
			chose_time->SelectedItem == "") {
			return false;
		}
		return true;
	   }
	private: void Closing() {
		data.insertDataToFile();
		closed = true;
		this->Close();
	}
		   float headingFont = 21.75f;
		   float textfont = 14.25f;
		   float boxfont = 13.0f;
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (insert_radiobtn->Checked)
		Closing();
	else {
		insert_panel->Visible = false;
		Ed_panel->Visible = true;
		data.insertDataToFile();
	}

}
	   private: void SetValues(Node^ value) {
		   FirstNametextBox->Text = value->first_name;
		   LastNameTextBox->Text = value->last_name;
		   RegNotextBox->Text = System::Convert::ToString(value->roll_no);
		   chose_Dept->Text = value->depart;
		   chose_batch->Text = value->year;
		   chose_room->Text = value->room_no;
		   chose_time->Text = value->timing;
	   }
private: System::Void check_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RollNotoFind->Text == "" || DeptoFind->Text == "") {
		MessageBox::Show("Invaild input...\t\t\t\t");
	}
	else {
		found = data.Search(System::Convert::ToInt32(RollNotoFind->Text), DeptoFind->Text);
		if (found == nullptr) {
			MessageBox::Show("Data Not Found \t\t\t\t\n\n");
		}
		else {
			Ed_panel->Visible = false;
			insert_panel->Visible = true;
			SetValues(found);
		}
	}
}
		private: void resize_items() {
			resizeControls(label11_points, label11, headingFont);
			resizeControls(label11_points, label1, headingFont);
			resizeControls(FirstName_points, FirstName, textfont);
			resizeControls(FirstNametextBox_points, FirstNametextBox, boxfont);
			resizeControls(LastName_points, LastName, textfont);
			resizeControls(LastNameTextBox_point, LastNameTextBox, boxfont);
			resizeControls(Dept_point, Dept, textfont);
			resizeControls(chose_Dept_point, chose_Dept, boxfont);
			resizeControls(Id_no_point,Reg_no , textfont);
			resizeControls(RegNotextBox_point, RegNotextBox, boxfont);
			resizeControls(Exam_Time_point, Exam_Time, textfont);
			resizeControls(chose_time_point, chose_time, boxfont);
			resizeControls(Room_point, Room, textfont);
			resizeControls(chose_room_point, chose_room, boxfont);
			resizeControls(insert_btn_point, insert_btn, textfont);
			resizeControls(reset_btn_point, reset_btn, textfont);
			resizeControls(back_btn_point, back_btn, textfont);
			resizeControls(idFind_point, idFind, textfont);
			resizeControls(RollNotoFind_point, RollNotoFind, boxfont);
			resizeControls(depfind_point, depfind, textfont);
			resizeControls(DeptoFind_point, DeptoFind, boxfont);
			resizeControls(check_point, check, textfont);
			resizeControls(back_btn1_point, back_btn1, textfont);
			resizeControls(batch_point, batch, textfont);
			resizeControls(chose_batch_point, chose_batch, boxfont);



		}
	private: void resizeControls(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control, float originalSize) {
		float xRatio = (float)(this->insert_panel->Width) / (float)(pan_size->Width);
		float yRatio = (float)(this->insert_panel->Height) / (float)(pan_size->Height);// -(float)(insert_panel->Height) / (float)(2);

		int newPoint_X = (int)(item->X * xRatio);
		int newPoint_Y = (int)(item->Y * yRatio);

		int newWidth = (int)(item->Width * xRatio);
		int newHight = (int)(item->Height * yRatio);
		float ratio = xRatio;
		if (xRatio > yRatio) {
			ratio = yRatio;
		}
		float newFontsize = originalSize * ratio;
		System::Drawing::Font^ font = (gcnew System::Drawing::Font(L"Georgia", newFontsize));
		control->Font = font;
		//control->Font->SizeInPoints= (control->Font->GetHeight() * yRatio));
		control->Location = System::Drawing::Point(newPoint_X, newPoint_Y);
		control->Size = System::Drawing::Size(newWidth, newHight);
	}
private: System::Void Student_Leave(System::Object^ sender, System::EventArgs^ e) {
	Closing();
	Application::Exit();
}
private: System::Void Student_Resize(System::Object^ sender, System::EventArgs^ e) {
	resize_items();
}
private: System::Void reset_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
}
private: System::Void RegNotextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char key = e->KeyChar;
	if (!Char::IsDigit(key) && key != 8) {
		e->Handled = true;
	}
}
private: System::Void DeptoFind_Leave(System::Object^ sender, System::EventArgs^ e) {
	DeptoFind->Text = DeptoFind->Text->ToUpper();
}
private: System::Void chose_Dept_Leave(System::Object^ sender, System::EventArgs^ e) {
	chose_Dept->Text = chose_Dept->Text->ToUpper();
}

};
}
