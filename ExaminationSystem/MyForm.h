#pragma once

#include "Student.h"
#include "Teacher.h"
#include "Display.h"

namespace ExaminationSystem {

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
	public: bool^ showpage = false;
	private: System::Windows::Forms::PictureBox^ logoBox;
	
	protected:
	private:

		System::Drawing::Rectangle^ logolab_points;
		System::Drawing::Rectangle^ StudentBtn_points;
		System::Drawing::Rectangle^ teacherBtn_points;
		System::Drawing::Rectangle^ DisplayBtn_points;
		System::Drawing::Rectangle^ logout_icon;
		System::Drawing::Rectangle^ logout;
		
	private: System::Windows::Forms::Label^ student_label;
	private: System::Windows::Forms::Label^ teacher_label;
	private: System::Windows::Forms::Label^ Display_label;
	private: System::Windows::Forms::PictureBox^ out_icon;
	private: System::Windows::Forms::Label^ logout_lab;
	public:


	public:  System::Drawing::Size formOreginalSize;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->logoBox = (gcnew System::Windows::Forms::PictureBox());
			this->student_label = (gcnew System::Windows::Forms::Label());
			this->teacher_label = (gcnew System::Windows::Forms::Label());
			this->Display_label = (gcnew System::Windows::Forms::Label());
			this->out_icon = (gcnew System::Windows::Forms::PictureBox());
			this->logout_lab = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->out_icon))->BeginInit();
			this->SuspendLayout();
			// 
			// logoBox
			// 
			this->logoBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->logoBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logoBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoBox.Image")));
			this->logoBox->Location = System::Drawing::Point(37, 12);
			this->logoBox->Name = L"logoBox";
			this->logoBox->Size = System::Drawing::Size(178, 141);
			this->logoBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logoBox->TabIndex = 0;
			this->logoBox->TabStop = false;
			// 
			// student_label
			// 
			this->student_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->student_label->BackColor = System::Drawing::Color::PaleVioletRed;
			this->student_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->student_label->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->student_label->Font = (gcnew System::Drawing::Font(L"Sitka Small", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->student_label->ForeColor = System::Drawing::Color::Maroon;
			this->student_label->Location = System::Drawing::Point(194, 206);
			this->student_label->Name = L"student_label";
			this->student_label->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->student_label->Size = System::Drawing::Size(419, 57);
			this->student_label->TabIndex = 1;
			this->student_label->Text = L"Student\'s Information";
			this->student_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->student_label->Click += gcnew System::EventHandler(this, &MyForm::student_label_Click);
			// 
			// teacher_label
			// 
			this->teacher_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->teacher_label->BackColor = System::Drawing::Color::PaleVioletRed;
			this->teacher_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->teacher_label->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->teacher_label->Font = (gcnew System::Drawing::Font(L"Sitka Small", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacher_label->ForeColor = System::Drawing::Color::Maroon;
			this->teacher_label->Location = System::Drawing::Point(194, 287);
			this->teacher_label->Name = L"teacher_label";
			this->teacher_label->Size = System::Drawing::Size(419, 57);
			this->teacher_label->TabIndex = 1;
			this->teacher_label->Text = L"Teacher\'s Information";
			this->teacher_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->teacher_label->Click += gcnew System::EventHandler(this, &MyForm::teacher_label_Click);
			// 
			// Display_label
			// 
			this->Display_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Display_label->BackColor = System::Drawing::Color::PaleVioletRed;
			this->Display_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Display_label->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Display_label->Font = (gcnew System::Drawing::Font(L"Sitka Small", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display_label->ForeColor = System::Drawing::Color::Maroon;
			this->Display_label->Location = System::Drawing::Point(194, 379);
			this->Display_label->Name = L"Display_label";
			this->Display_label->Size = System::Drawing::Size(419, 57);
			this->Display_label->TabIndex = 1;
			this->Display_label->Text = L"Display Information";
			this->Display_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Display_label->Click += gcnew System::EventHandler(this, &MyForm::Display_label_Click);
			// 
			// out_icon
			// 
			this->out_icon->BackColor = System::Drawing::Color::Transparent;
			this->out_icon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->out_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"out_icon.Image")));
			this->out_icon->Location = System::Drawing::Point(718, 12);
			this->out_icon->Name = L"out_icon";
			this->out_icon->Size = System::Drawing::Size(41, 41);
			this->out_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->out_icon->TabIndex = 2;
			this->out_icon->TabStop = false;
			this->out_icon->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// logout_lab
			// 
			this->logout_lab->AutoSize = true;
			this->logout_lab->BackColor = System::Drawing::Color::Maroon;
			this->logout_lab->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout_lab->ForeColor = System::Drawing::SystemColors::Control;
			this->logout_lab->Location = System::Drawing::Point(711, 56);
			this->logout_lab->Name = L"logout_lab";
			this->logout_lab->Size = System::Drawing::Size(57, 18);
			this->logout_lab->TabIndex = 3;
			this->logout_lab->Text = L"Logout";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->logout_lab);
			this->Controls->Add(this->out_icon);
			this->Controls->Add(this->Display_label);
			this->Controls->Add(this->teacher_label);
			this->Controls->Add(this->student_label);
			this->Controls->Add(this->logoBox);
			this->DoubleBuffered = true;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"MyForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->out_icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//this->Size = Owner->Size;
		
		formOreginalSize = this->Size;
		logolab_points = gcnew System::Drawing::Rectangle(logoBox->Location.X, logoBox->Location.Y, logoBox->Size.Width, logoBox->Size.Height);
		StudentBtn_points = gcnew System::Drawing::Rectangle(student_label->Location.X, student_label->Location.Y, student_label->Size.Width, student_label->Size.Height);
		teacherBtn_points = gcnew System::Drawing::Rectangle(teacher_label->Location.X, teacher_label->Location.Y, teacher_label->Size.Width, teacher_label->Size.Height);
		DisplayBtn_points = gcnew System::Drawing::Rectangle(Display_label->Location.X, Display_label->Location.Y, Display_label->Size.Width, Display_label->Size.Height);
		logout_icon = gcnew System::Drawing::Rectangle(out_icon->Location.X, out_icon->Location.Y, out_icon->Size.Width, out_icon->Size.Height);
		logout = gcnew System::Drawing::Rectangle(logout_lab->Location.X, logout_lab->Location.Y, logout_lab->Size.Width, logout_lab->Size.Height);
		this->Location.X = Loc_X;
		this->Location.Y = Loc_y;

		this->Size = size;
	}
		private: void resize_items() {
			resizeControls(logolab_points, logoBox);
			resizeControls(StudentBtn_points, student_label);
			resizeControls(teacherBtn_points, teacher_label);
			resizeControls(DisplayBtn_points, Display_label);
			changePosition(logout_icon, out_icon);
			changePosition(logout, logout_lab);

		}
	private: void resizeControls(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control) {
		float xRatio = (float)(this->Width) / (float)(formOreginalSize.Width);
		float yRatio = (float)(this->Height) / (float)(formOreginalSize.Height);

		int newPoint_X = (int)(item->X * xRatio);
		int newPoint_Y = (int)(item->Y * yRatio);

		int newWidth = (int)(item->Width * xRatio );
		int newHight = (int)(item->Height * yRatio );

		control->Location = System::Drawing::Point(newPoint_X, newPoint_Y);
		control->Size = System::Drawing::Size(newWidth , newHight);
	}
	private: void changePosition(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control) {
		float xRatio = (float)(this->Width) / (float)(formOreginalSize.Width);
		float yRatio = (float)(this->Height) / (float)(formOreginalSize.Height);
		int newPoint_X = (int)(item->X * xRatio);
		int newPoint_Y = (int)(item->Y * yRatio);
		control->Location = System::Drawing::Point(newPoint_X, newPoint_Y);
	}

private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	resize_items();
}
private: System::Void student_label_Click(System::Object^ sender, System::EventArgs^ e) {
	Student studentPage;
	this->Hide();
	studentPage.setSize(this->Size, this->Location.X, this->Location.Y);
	studentPage.ShowDialog();
	if (studentPage.closed) {
		this->Show();
		studentPage.closed = false;

	}

}
private: System::Void teacher_label_Click(System::Object^ sender, System::EventArgs^ e) {
	Teacher teacherPage;
	teacherPage.setSize(this->Size, this->Location.X, this->Location.Y);
	this->Hide();
	teacherPage.ShowDialog();
}
private: System::Void Display_label_Click(System::Object^ sender, System::EventArgs^ e) {
	Display page;
	page.setSize(this->Size, this->Location.X, this->Location.Y);
	this->Hide();
	page.ShowDialog();
	if (page.isClosed) {
		this->Show();
	}

}
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	showpage = true;
	this->Hide();
	
}
#pragma endregion
};
}
