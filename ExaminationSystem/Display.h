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
	/// Summary for Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	public:
		Display(void)
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
		~Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ ShowDataTable;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;


	private: System::Windows::Forms::Button^ search;

	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::ComboBox^ reg;
	private: System::Windows::Forms::ComboBox^ dep;
	private: System::Windows::Forms::PictureBox^ out_icon;
	private: System::Windows::Forms::Label^ logout_lab;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Display::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->ShowDataTable = (gcnew System::Windows::Forms::DataGridView());
			this->search = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->reg = (gcnew System::Windows::Forms::ComboBox());
			this->dep = (gcnew System::Windows::Forms::ComboBox());
			this->out_icon = (gcnew System::Windows::Forms::PictureBox());
			this->logout_lab = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShowDataTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->out_icon))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 566);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(28, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 23);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Select option";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::PapayaWhip;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 20);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(211, 81);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(26, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 93);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Student Information";
			// 
			// radioButton2
			// 
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F));
			this->radioButton2->Location = System::Drawing::Point(12, 292);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(251, 58);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->Text = L"Teachers\'s Information";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Display::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->Checked = true;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(12, 242);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(236, 44);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Student\'s Information";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Display::radioButton3_CheckedChanged);
			// 
			// ShowDataTable
			// 
			this->ShowDataTable->AllowUserToDeleteRows = false;
			this->ShowDataTable->AllowUserToResizeColumns = false;
			this->ShowDataTable->AllowUserToResizeRows = false;
			this->ShowDataTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ShowDataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ShowDataTable->BackgroundColor = System::Drawing::Color::NavajoWhite;
			this->ShowDataTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Sienna;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Azure;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Salmon;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ShowDataTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->ShowDataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::LightSeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->NullValue = L"---";
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Tomato;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ShowDataTable->DefaultCellStyle = dataGridViewCellStyle2;
			this->ShowDataTable->GridColor = System::Drawing::Color::OrangeRed;
			this->ShowDataTable->Location = System::Drawing::Point(285, 128);
			this->ShowDataTable->MinimumSize = System::Drawing::Size(495, 300);
			this->ShowDataTable->Name = L"ShowDataTable";
			this->ShowDataTable->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ShowDataTable->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->ShowDataTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->ShowDataTable->ShowEditingIcon = false;
			this->ShowDataTable->Size = System::Drawing::Size(498, 434);
			this->ShowDataTable->TabIndex = 2;
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(588, 12);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(89, 28);
			this->search->TabIndex = 4;
			this->search->Text = L"Seach";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &Display::search_Click);
			// 
			// reset
			// 
			this->reset->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(588, 54);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(89, 28);
			this->reset->TabIndex = 4;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Display::reset_Click);
			// 
			// reg
			// 
			this->reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reg->FormattingEnabled = true;
			this->reg->Location = System::Drawing::Point(296, 13);
			this->reg->Name = L"reg";
			this->reg->Size = System::Drawing::Size(188, 28);
			this->reg->TabIndex = 5;
			this->reg->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Display::reg_KeyPress);
			// 
			// dep
			// 
			this->dep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dep->FormattingEnabled = true;
			this->dep->Location = System::Drawing::Point(296, 55);
			this->dep->Name = L"dep";
			this->dep->Size = System::Drawing::Size(188, 28);
			this->dep->TabIndex = 5;
			this->dep->Leave += gcnew System::EventHandler(this, &Display::dep_Leave);
			// 
			// out_icon
			// 
			this->out_icon->BackColor = System::Drawing::Color::Transparent;
			this->out_icon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->out_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"out_icon.Image")));
			this->out_icon->Location = System::Drawing::Point(719, 12);
			this->out_icon->Name = L"out_icon";
			this->out_icon->Size = System::Drawing::Size(41, 41);
			this->out_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->out_icon->TabIndex = 10;
			this->out_icon->TabStop = false;
			this->out_icon->Click += gcnew System::EventHandler(this, &Display::out_icon_Click);
			// 
			// logout_lab
			// 
			this->logout_lab->AutoSize = true;
			this->logout_lab->BackColor = System::Drawing::Color::Transparent;
			this->logout_lab->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout_lab->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->logout_lab->Location = System::Drawing::Point(718, 59);
			this->logout_lab->Name = L"logout_lab";
			this->logout_lab->Size = System::Drawing::Size(42, 18);
			this->logout_lab->TabIndex = 11;
			this->logout_lab->Text = L"Back";
			// 
			// Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->logout_lab);
			this->Controls->Add(this->out_icon);
			this->Controls->Add(this->dep);
			this->Controls->Add(this->reg);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->search);
			this->Controls->Add(this->ShowDataTable);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Display";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Display";
			this->Load += gcnew System::EventHandler(this, &Display::Display_Load);
			this->Leave += gcnew System::EventHandler(this, &Display::Display_Leave);
			this->Resize += gcnew System::EventHandler(this, &Display::Display_Resize);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShowDataTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->out_icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		Data data;
		System::Drawing::Rectangle^ reg_points;
		System::Drawing::Rectangle^ dep_points;
		System::Drawing::Rectangle^ search_points;
		System::Drawing::Rectangle^ reset_points;
		System::Drawing::Rectangle^ logout_icon;
		System::Drawing::Rectangle^ logout;
		System::Drawing::Size formOreginalSize;

	private: System::Void Display_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
		data.isStudentData = true;
		formOreginalSize = this->Size;
		reg_points = gcnew System::Drawing::Rectangle(reg->Location.X, reg->Location.Y, reg->Size.Width, reg->Size.Height);
		dep_points = gcnew System::Drawing::Rectangle(dep->Location.X, dep->Location.Y, dep->Size.Width, dep->Size.Height);
		search_points = gcnew System::Drawing::Rectangle(search->Location.X, search->Location.Y, search->Size.Width, search->Size.Height);
		reset_points = gcnew System::Drawing::Rectangle(reset->Location.X, reset->Location.Y, reset->Size.Width, reset->Size.Height);
		logout_icon = gcnew System::Drawing::Rectangle(out_icon->Location.X, out_icon->Location.Y, out_icon->Size.Width, out_icon->Size.Height);
		logout = gcnew System::Drawing::Rectangle(logout_lab->Location.X, logout_lab->Location.Y, logout_lab->Size.Width, logout_lab->Size.Height);
		 setData();
		 this->Location.X = Loc_X;
		 this->Location.Y = Loc_y;
		 this->Size = size;
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
			 
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	data.isStudentData = false;
	
	setData();
}
	   void setData() {
		   DataTable^ table = gcnew DataTable();
		   table->Columns->Add("Reg No");
		   table->Columns->Add("First Name");
		   table->Columns->Add("Last Name");
		   table->Columns->Add("Department");
		   table->Columns->Add("Romm No");
		   table->Columns->Add("Timing");
		   if (data.isStudentData)
			   table->Columns->Add("Batch/Year");
		   else
			   table->Columns->Add(" ");
		   ShowDataTable->DataSource = table;
		   array<String^>^ lines = data.ReadallLines();
		   
		   for (int i = 0; i < lines->Length; i++) {
			   array<String^>^ values = lines[i]->ToString()->Split(' ');
			   
			   for (int j = 0; j < values->Length; j++) {
				   values[j] = values[j]->Trim();
			   }
			   table->Rows->Add(values);
			  
		   }
	   }
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	data.isStudentData = true;
	
	setData();
}

private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
	if (reg->Text == "" || reg->Text->Trim() == "Enter Reg/Id no" || dep->Text == "" | dep->Text->Trim() == "Enter Department")
	{
		MessageBox::Show("InVaild Reg/Id no or Department \t\t");
	}
	else {
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("Reg No");
		table->Columns->Add("First Name");
		table->Columns->Add("Last Name");
		table->Columns->Add("Department");
		table->Columns->Add("Romm No");
		table->Columns->Add("Timing");
		if (data.isStudentData)
			table->Columns->Add("Batch/Year");
		else
			table->Columns->Add(" ");
		
		Node^ node = data.Search(System::Convert::ToInt32(reg->Text),dep->Text);
		if (node != nullptr)
		{
			String^ line = System::Convert::ToString(node->roll_no + " " + node->first_name + " " + node->last_name + " " + node->depart + " " + node->room_no + " " + node->timing + " " + node->year);
			array<String^>^ values = line->ToString()->Split(' ');
			table->Rows->Add(values);
		}
		ShowDataTable->DataSource = table;
	}
}
	   public: bool isClosed = false;
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	reg->Text = "Enter Reg/Id no";
	dep->Text = "Enter Department";
	setData();
}
	   private: void resize_items() {
		   resizeControls(reg_points, reg);
		   resizeControls(dep_points, dep);
		   resizeControls(search_points, search);
		   resizeControls(reset_points, reset);
		   changePosition(logout_icon, out_icon);
		  changePosition(logout, logout_lab);

	   }
	private: void resizeControls(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control) {
		float xRatio = (float)(this->Width) / (float)(formOreginalSize.Width);
		float yRatio = (float)(this->Height) / (float)(formOreginalSize.Height);

		int newPoint_X = (int)(item->X * xRatio);
		int newPoint_Y = (int)(item->Y * yRatio);

		int newWidth = (int)(item->Width * xRatio);
		int newHight = (int)(item->Height * yRatio);

		control->Location = System::Drawing::Point(newPoint_X, newPoint_Y);
		control->Size = System::Drawing::Size(newWidth, newHight);
	}
	
private: System::Void Display_Resize(System::Object^ sender, System::EventArgs^ e) {
	resize_items();
}
	   private: void changePosition(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control) {
		   float xRatio = (float)(this->Width) / (float)(formOreginalSize.Width);
		   float yRatio = (float)(this->Height) / (float)(formOreginalSize.Height);
		   int newPoint_X = (int)(item->X * xRatio);
		   int newPoint_Y = (int)(item->Y * yRatio);
		   control->Location = System::Drawing::Point(newPoint_X, newPoint_Y);
	   }
private: System::Void Display_Leave(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void out_icon_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	isClosed = true;
}
private: System::Void reg_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char key = e->KeyChar;
	if (!Char::IsDigit(key) && key != 8) {
		e->Handled = true;
	}
}
private: System::Void dep_Leave(System::Object^ sender, System::EventArgs^ e) {
	dep->Text = dep->Text->ToUpper();
}
};
}
