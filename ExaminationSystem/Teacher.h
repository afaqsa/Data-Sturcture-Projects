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
	/// Summary for Teacher
	/// </summary>
	public ref class Teacher : public System::Windows::Forms::Form
	{
	public:
		Teacher(void)
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
		~Teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ insert_panel;
	protected:
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::Button^ reset_btn;
	private: System::Windows::Forms::Button^ insert_btn;
	private: System::Windows::Forms::Label^ Room;




	private: System::Windows::Forms::Label^ Exam_Time;
	private: System::Windows::Forms::Label^ Id_no;
	private: System::Windows::Forms::Label^ Dept;
	private: System::Windows::Forms::Label^ LastName;
	private: System::Windows::Forms::Label^ FirstName;

	private: System::Windows::Forms::TextBox^ LastNameTextBox;
	private: System::Windows::Forms::TextBox^ FirstNametextBox;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ info_heading;
	private: System::Windows::Forms::RadioButton^ del_radiobtn;
	private: System::Windows::Forms::RadioButton^ edite_radiobtn;
	private: System::Windows::Forms::RadioButton^ insert_radiobtn;
	private: System::Windows::Forms::Panel^ Ed_panel;
	private: System::Windows::Forms::Label^ depfind;

	private: System::Windows::Forms::Button^ back_btn1;
	private: System::Windows::Forms::Label^ idFind;

	private: System::Windows::Forms::Button^ check;
	private: System::Windows::Forms::ComboBox^ DeptoFind;

	private: System::Windows::Forms::TextBox^ RollNotoFind;





	private: System::Windows::Forms::TextBox^ RegNotextBox;
	private: System::Windows::Forms::ComboBox^ chose_Dept;
	private: System::Windows::Forms::ComboBox^ chose_room;
	private: System::Windows::Forms::ComboBox^ chose_time;

	private: Data data;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teacher::typeid));
			this->insert_panel = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->chose_room = (gcnew System::Windows::Forms::ComboBox());
			this->chose_time = (gcnew System::Windows::Forms::ComboBox());
			this->chose_Dept = (gcnew System::Windows::Forms::ComboBox());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->reset_btn = (gcnew System::Windows::Forms::Button());
			this->insert_btn = (gcnew System::Windows::Forms::Button());
			this->Room = (gcnew System::Windows::Forms::Label());
			this->Exam_Time = (gcnew System::Windows::Forms::Label());
			this->Id_no = (gcnew System::Windows::Forms::Label());
			this->Dept = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->RegNotextBox = (gcnew System::Windows::Forms::TextBox());
			this->LastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->info_heading = (gcnew System::Windows::Forms::Label());
			this->del_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->edite_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->insert_radiobtn = (gcnew System::Windows::Forms::RadioButton());
			this->Ed_panel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->depfind = (gcnew System::Windows::Forms::Label());
			this->back_btn1 = (gcnew System::Windows::Forms::Button());
			this->idFind = (gcnew System::Windows::Forms::Label());
			this->check = (gcnew System::Windows::Forms::Button());
			this->DeptoFind = (gcnew System::Windows::Forms::ComboBox());
			this->RollNotoFind = (gcnew System::Windows::Forms::TextBox());
			this->insert_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Ed_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// insert_panel
			// 
			this->insert_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->insert_panel->BackColor = System::Drawing::Color::Maroon;
			this->insert_panel->Controls->Add(this->label11);
			this->insert_panel->Controls->Add(this->chose_room);
			this->insert_panel->Controls->Add(this->chose_time);
			this->insert_panel->Controls->Add(this->chose_Dept);
			this->insert_panel->Controls->Add(this->back_btn);
			this->insert_panel->Controls->Add(this->reset_btn);
			this->insert_panel->Controls->Add(this->insert_btn);
			this->insert_panel->Controls->Add(this->Room);
			this->insert_panel->Controls->Add(this->Exam_Time);
			this->insert_panel->Controls->Add(this->Id_no);
			this->insert_panel->Controls->Add(this->Dept);
			this->insert_panel->Controls->Add(this->LastName);
			this->insert_panel->Controls->Add(this->FirstName);
			this->insert_panel->Controls->Add(this->RegNotextBox);
			this->insert_panel->Controls->Add(this->LastNameTextBox);
			this->insert_panel->Controls->Add(this->FirstNametextBox);
			this->insert_panel->Location = System::Drawing::Point(249, 15);
			this->insert_panel->Name = L"insert_panel";
			this->insert_panel->Size = System::Drawing::Size(523, 537);
			this->insert_panel->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(191, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(211, 47);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Information";
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
			this->chose_room->Location = System::Drawing::Point(259, 363);
			this->chose_room->Name = L"chose_room";
			this->chose_room->Size = System::Drawing::Size(190, 26);
			this->chose_room->TabIndex = 13;
			// 
			// chose_time
			// 
			this->chose_time->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chose_time->FormattingEnabled = true;
			this->chose_time->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"9AM-11AM", L"12PM-2PM", L"3PM-5PM  " });
			this->chose_time->Location = System::Drawing::Point(259, 315);
			this->chose_time->Name = L"chose_time";
			this->chose_time->Size = System::Drawing::Size(190, 26);
			this->chose_time->TabIndex = 14;
			// 
			// chose_Dept
			// 
			this->chose_Dept->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chose_Dept->FormattingEnabled = true;
			this->chose_Dept->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BSCS", L"BSSE", L"BSEE" });
			this->chose_Dept->Location = System::Drawing::Point(261, 221);
			this->chose_Dept->Name = L"chose_Dept";
			this->chose_Dept->Size = System::Drawing::Size(190, 26);
			this->chose_Dept->TabIndex = 12;
			this->chose_Dept->Leave += gcnew System::EventHandler(this, &Teacher::chose_Dept_Leave);
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(37, 449);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(109, 36);
			this->back_btn->TabIndex = 6;
			this->back_btn->Text = L"Back ";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &Teacher::back_btn_Click);
			this->back_btn->MouseLeave += gcnew System::EventHandler(this, &Teacher::back_btn_MouseLeave);
			this->back_btn->MouseHover += gcnew System::EventHandler(this, &Teacher::back_btn_MouseHover);
			// 
			// reset_btn
			// 
			this->reset_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->reset_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->reset_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_btn->Location = System::Drawing::Point(210, 449);
			this->reset_btn->Name = L"reset_btn";
			this->reset_btn->Size = System::Drawing::Size(116, 36);
			this->reset_btn->TabIndex = 5;
			this->reset_btn->Text = L"Reset";
			this->reset_btn->UseVisualStyleBackColor = false;
			this->reset_btn->Click += gcnew System::EventHandler(this, &Teacher::reset_btn_Click);
			this->reset_btn->MouseLeave += gcnew System::EventHandler(this, &Teacher::reset_btn_MouseLeave);
			this->reset_btn->MouseHover += gcnew System::EventHandler(this, &Teacher::reset_btn_MouseHover);
			// 
			// insert_btn
			// 
			this->insert_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->insert_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->insert_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->insert_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->insert_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert_btn->Location = System::Drawing::Point(367, 449);
			this->insert_btn->Name = L"insert_btn";
			this->insert_btn->Size = System::Drawing::Size(116, 36);
			this->insert_btn->TabIndex = 5;
			this->insert_btn->Text = L"Insert";
			this->insert_btn->UseVisualStyleBackColor = false;
			this->insert_btn->Click += gcnew System::EventHandler(this, &Teacher::insert_btn_Click);
			this->insert_btn->MouseLeave += gcnew System::EventHandler(this, &Teacher::insert_btn_MouseLeave);
			this->insert_btn->MouseHover += gcnew System::EventHandler(this, &Teacher::insert_btn_MouseHover);
			// 
			// Room
			// 
			this->Room->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Room->Location = System::Drawing::Point(72, 363);
			this->Room->Name = L"Room";
			this->Room->Size = System::Drawing::Size(124, 23);
			this->Room->TabIndex = 2;
			this->Room->Text = L"Room no:";
			// 
			// Exam_Time
			// 
			this->Exam_Time->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exam_Time->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Exam_Time->Location = System::Drawing::Point(72, 315);
			this->Exam_Time->Name = L"Exam_Time";
			this->Exam_Time->Size = System::Drawing::Size(168, 23);
			this->Exam_Time->TabIndex = 2;
			this->Exam_Time->Text = L"Invigilation Time :";
			// 
			// Id_no
			// 
			this->Id_no->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Id_no->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Id_no->Location = System::Drawing::Point(72, 264);
			this->Id_no->Name = L"Id_no";
			this->Id_no->Size = System::Drawing::Size(100, 23);
			this->Id_no->TabIndex = 2;
			this->Id_no->Text = L"ID no:";
			// 
			// Dept
			// 
			this->Dept->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dept->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Dept->Location = System::Drawing::Point(72, 220);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(124, 23);
			this->Dept->TabIndex = 2;
			this->Dept->Text = L"Department :";
			// 
			// LastName
			// 
			this->LastName->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->LastName->Location = System::Drawing::Point(72, 178);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(128, 23);
			this->LastName->TabIndex = 2;
			this->LastName->Text = L"Last Name : ";
			// 
			// FirstName
			// 
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FirstName->Location = System::Drawing::Point(72, 137);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(125, 26);
			this->FirstName->TabIndex = 2;
			this->FirstName->Text = L"First Name : ";
			// 
			// RegNotextBox
			// 
			this->RegNotextBox->BackColor = System::Drawing::Color::Snow;
			this->RegNotextBox->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegNotextBox->Location = System::Drawing::Point(261, 265);
			this->RegNotextBox->Name = L"RegNotextBox";
			this->RegNotextBox->Size = System::Drawing::Size(190, 26);
			this->RegNotextBox->TabIndex = 1;
			this->RegNotextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Teacher::RegNotextBox_KeyPress);
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->BackColor = System::Drawing::Color::Snow;
			this->LastNameTextBox->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameTextBox->Location = System::Drawing::Point(262, 179);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(190, 26);
			this->LastNameTextBox->TabIndex = 1;
			// 
			// FirstNametextBox
			// 
			this->FirstNametextBox->BackColor = System::Drawing::Color::Snow;
			this->FirstNametextBox->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNametextBox->Location = System::Drawing::Point(262, 137);
			this->FirstNametextBox->Name = L"FirstNametextBox";
			this->FirstNametextBox->Size = System::Drawing::Size(190, 26);
			this->FirstNametextBox->TabIndex = 1;
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
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 561);
			this->panel1->TabIndex = 9;
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
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->info_heading->Text = L"Teachers Information";
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
			this->del_radiobtn->CheckedChanged += gcnew System::EventHandler(this, &Teacher::edite_CheckedChanged);
			this->del_radiobtn->Click += gcnew System::EventHandler(this, &Teacher::edite_CheckedChanged);
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
			this->edite_radiobtn->CheckedChanged += gcnew System::EventHandler(this, &Teacher::edite_CheckedChanged);
			this->edite_radiobtn->Click += gcnew System::EventHandler(this, &Teacher::edite_CheckedChanged);
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
			this->insert_radiobtn->CheckedChanged += gcnew System::EventHandler(this, &Teacher::insert_radiobtn_CheckedChanged);
			this->insert_radiobtn->ClientSizeChanged += gcnew System::EventHandler(this, &Teacher::insert_radiobtn_CheckedChanged);
			// 
			// Ed_panel
			// 
			this->Ed_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Ed_panel->Controls->Add(this->label1);
			this->Ed_panel->Controls->Add(this->depfind);
			this->Ed_panel->Controls->Add(this->back_btn1);
			this->Ed_panel->Controls->Add(this->idFind);
			this->Ed_panel->Controls->Add(this->check);
			this->Ed_panel->Controls->Add(this->DeptoFind);
			this->Ed_panel->Controls->Add(this->RollNotoFind);
			this->Ed_panel->Location = System::Drawing::Point(246, 12);
			this->Ed_panel->Name = L"Ed_panel";
			this->Ed_panel->Size = System::Drawing::Size(529, 540);
			this->Ed_panel->TabIndex = 12;
			this->Ed_panel->Visible = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(194, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 47);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Information";
			// 
			// depfind
			// 
			this->depfind->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depfind->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depfind->Location = System::Drawing::Point(89, 264);
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
			this->back_btn1->Location = System::Drawing::Point(83, 385);
			this->back_btn1->Name = L"back_btn1";
			this->back_btn1->Size = System::Drawing::Size(109, 36);
			this->back_btn1->TabIndex = 6;
			this->back_btn1->Text = L"Back ";
			this->back_btn1->UseVisualStyleBackColor = false;
			this->back_btn1->Click += gcnew System::EventHandler(this, &Teacher::back_btn1_Click);
			this->back_btn1->MouseLeave += gcnew System::EventHandler(this, &Teacher::back_btn1_MouseLeave);
			this->back_btn1->MouseHover += gcnew System::EventHandler(this, &Teacher::back_btn1_MouseHover);
			// 
			// idFind
			// 
			this->idFind->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idFind->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->idFind->Location = System::Drawing::Point(89, 197);
			this->idFind->Name = L"idFind";
			this->idFind->Size = System::Drawing::Size(145, 23);
			this->idFind->TabIndex = 6;
			this->idFind->Text = L"Enter ID no:";
			// 
			// check
			// 
			this->check->BackColor = System::Drawing::Color::WhiteSmoke;
			this->check->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->check->Cursor = System::Windows::Forms::Cursors::Hand;
			this->check->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->check->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check->Location = System::Drawing::Point(388, 385);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(85, 32);
			this->check->TabIndex = 5;
			this->check->Text = L"Check";
			this->check->UseVisualStyleBackColor = false;
			this->check->Click += gcnew System::EventHandler(this, &Teacher::check_Click);
			this->check->MouseLeave += gcnew System::EventHandler(this, &Teacher::check_MouseLeave);
			this->check->MouseHover += gcnew System::EventHandler(this, &Teacher::check_MouseHover);
			// 
			// DeptoFind
			// 
			this->DeptoFind->Font = (gcnew System::Drawing::Font(L"Georgia", 11));
			this->DeptoFind->FormattingEnabled = true;
			this->DeptoFind->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BSCS", L"BSSE", L"BSEE" });
			this->DeptoFind->Location = System::Drawing::Point(268, 261);
			this->DeptoFind->Name = L"DeptoFind";
			this->DeptoFind->Size = System::Drawing::Size(183, 26);
			this->DeptoFind->TabIndex = 3;
			this->DeptoFind->Leave += gcnew System::EventHandler(this, &Teacher::DeptoFind_Leave);
			// 
			// RollNotoFind
			// 
			this->RollNotoFind->BackColor = System::Drawing::Color::Snow;
			this->RollNotoFind->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RollNotoFind->Location = System::Drawing::Point(269, 194);
			this->RollNotoFind->Name = L"RollNotoFind";
			this->RollNotoFind->Size = System::Drawing::Size(183, 26);
			this->RollNotoFind->TabIndex = 1;
			this->RollNotoFind->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Teacher::RegNotextBox_KeyPress);
			// 
			// Teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->insert_panel);
			this->Controls->Add(this->Ed_panel);
			this->DoubleBuffered = true;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Teacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Teacher";
			this->Load += gcnew System::EventHandler(this, &Teacher::Teacher_Load);
			this->Resize += gcnew System::EventHandler(this, &Teacher::Teacher_Resize);
			this->insert_panel->ResumeLayout(false);
			this->insert_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Ed_panel->ResumeLayout(false);
			this->Ed_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void edite_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
				insert_panel->Visible = false;
				Ed_panel->Visible = true;
				if(del_radiobtn->Checked) 
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
	 private: System::Drawing::Size size;
			int Loc_X;
			int Loc_y;
			//Location
		public: void setSize(System::Drawing::Size s, int x, int y) {
			size = s;
			Loc_X = x;
			Loc_y = y;
		}
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

		   System::Drawing::Size^ pan_size;

private: System::Void Teacher_Load(System::Object^ sender, System::EventArgs^ e) {
	data.isStudentData = false;
	
	pan_size = this->insert_panel->Size;
	label11_points = gcnew System::Drawing::Rectangle(label11->Location.X, label11->Location.Y, label11->Size.Width, label11->Size.Height);
	FirstName_points = gcnew System::Drawing::Rectangle(FirstName->Location.X, FirstName->Location.Y, FirstName->Size.Width, FirstName->Size.Height);
	FirstNametextBox_points = gcnew System::Drawing::Rectangle(FirstNametextBox->Location.X, FirstNametextBox->Location.Y, FirstNametextBox->Size.Width, FirstNametextBox->Size.Height);
	LastName_points = gcnew System::Drawing::Rectangle(LastName->Location.X, LastName->Location.Y, LastName->Size.Width, LastName->Size.Height);
	LastNameTextBox_point = gcnew System::Drawing::Rectangle(LastNameTextBox->Location.X, LastNameTextBox->Location.Y, LastNameTextBox->Size.Width, LastNameTextBox->Size.Height);
	Dept_point = gcnew System::Drawing::Rectangle(Dept->Location.X, Dept->Location.Y, Dept->Size.Width, Dept->Size.Height);
	chose_Dept_point  = gcnew System::Drawing::Rectangle(chose_Dept->Location.X, chose_Dept->Location.Y, chose_Dept->Size.Width, chose_Dept->Size.Height);
	Id_no_point = gcnew System::Drawing::Rectangle(Id_no->Location.X, Id_no->Location.Y, Id_no->Size.Width, Id_no->Size.Height);
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
	check_point  = gcnew System::Drawing::Rectangle(check->Location.X, check->Location.Y, check->Size.Width, check->Size.Height);
	back_btn1_point = gcnew System::Drawing::Rectangle(back_btn1->Location.X, back_btn1->Location.Y, back_btn1->Size.Width, back_btn1->Size.Height);

	this->Size = size;
	this->Location.X = Loc_X;
	this->Location.Y = Loc_y;
}
	private: void Reset() {
		FirstNametextBox->Text = "";
		LastNameTextBox->Text = "";
		RegNotextBox->Text = "";
		chose_Dept->Text = "";
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
					chose_Dept->Text, "", chose_room->Text, chose_time->Text);
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
		value->last_name = LastNameTextBox->Text;
		value->roll_no = System::Convert::ToInt32(RegNotextBox->Text);
		value->depart = chose_Dept->Text;
		value->year = "";
		value->room_no = chose_room->Text;
		value->timing = chose_time->Text;
		data.Update();
	}
	private: bool is_validData() {
		if (RegNotextBox->Text == "" || FirstNametextBox->Text == "" || LastNameTextBox->Text == ""
			|| chose_Dept->Text == "" || chose_room->SelectedItem == "" ||
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

private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if(insert_radiobtn->Checked)
		Closing();
	else {
		insert_panel->Visible = false;
		Ed_panel->Visible = true;
	}
}
	   private: void SetValues(Node^ value) {
		   FirstNametextBox->Text = value->first_name;
		   LastNameTextBox->Text = value->last_name;
		   RegNotextBox->Text = System::Convert::ToString(value->roll_no);
		   chose_Dept->Text = value->depart;
		   chose_room->Text = value->room_no;
		   chose_time->Text = value->timing;
	   }
private: System::Void check_Click(System::Object^ sender, System::EventArgs^ e) {
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
	   float headingFont = 21.75f;
	   float textfont = 14.25f;
	   float boxfont = 13.0f;
private: System::Void Teacher_Leave(System::Object^ sender, System::EventArgs^ e) {
	Closing();
	Application::Exit();
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
		   resizeControls(Id_no_point, Id_no, textfont);
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
		  


	   }
	private: void resizeControls(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control,float originalSize) {
		float xRatio = (float)(this->insert_panel->Width ) / (float)(pan_size->Width);
		float yRatio = (float)(this->insert_panel->Height ) / (float)(pan_size->Height);// -(float)(insert_panel->Height) / (float)(2);
		
		int newPoint_X = (int)( item->X * xRatio);
		int newPoint_Y = (int)(item->Y *yRatio);

		int newWidth = (int)(item->Width * xRatio);
		int newHight = (int)(item->Height * yRatio);
		float ratio = xRatio;
		if (xRatio > yRatio) {
			ratio = yRatio;
		}
		float newFontsize = originalSize * ratio;
		System::Drawing::Font^ font = (gcnew System::Drawing::Font(L"Georgia", newFontsize));
		control->Font= font;
		//control->Font->SizeInPoints= (control->Font->GetHeight() * yRatio));
		control->Location = System::Drawing::Point(newPoint_X, newPoint_Y);
		control->Size = System::Drawing::Size(newWidth, newHight);
	}

private: System::Void Teacher_Resize(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void back_btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	Closing();
}
};
}
