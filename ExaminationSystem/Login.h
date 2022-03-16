#pragma once

#include "MyForm.h"
#include "Display.h"
#include "FileHandling.h"
namespace ExaminationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	
	public:
		
		Login(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}
	private: String^ admain = "Admain";
	private: String^ pass = "admain";
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;


	private: Data data;




	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ userName;
	private: System::Windows::Forms::Label^ forgot_Password;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::TextBox^ textBoxUserName;




	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ login_btn;

		 //  private: Data data;


	private: System::Drawing::Rectangle^ panelLocation;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Passward;
	public: System::Drawing::Size formOreginalSize;
	

	private: System::Windows::Forms::PictureBox^ logoBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->userName = (gcnew System::Windows::Forms::Label());
			this->forgot_Password = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Passward = (gcnew System::Windows::Forms::Label());
			this->logoBox = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoBox))->BeginInit();
			this->SuspendLayout();
			// 
			// userName
			// 
			this->userName->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userName->Location = System::Drawing::Point(273, 86);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(140, 25);
			this->userName->TabIndex = 0;
			this->userName->Text = L"User Name :";
			// 
			// forgot_Password
			// 
			this->forgot_Password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->forgot_Password->AutoSize = true;
			this->forgot_Password->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgot_Password->ForeColor = System::Drawing::Color::Red;
			this->forgot_Password->Location = System::Drawing::Point(436, 175);
			this->forgot_Password->Name = L"forgot_Password";
			this->forgot_Password->Size = System::Drawing::Size(157, 14);
			this->forgot_Password->TabIndex = 0;
			this->forgot_Password->Text = L"forgotten your Passward \?";
			this->forgot_Password->Click += gcnew System::EventHandler(this, &Login::forgot_Password_Click);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(419, 124);
			this->textBoxPassword->MaxLength = 20;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(174, 31);
			this->textBoxPassword->TabIndex = 1;
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUserName->Location = System::Drawing::Point(419, 83);
			this->textBoxUserName->MaxLength = 20;
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(174, 31);
			this->textBoxUserName->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->login_btn);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->Passward);
			this->panel1->Controls->Add(this->userName);
			this->panel1->Controls->Add(this->textBoxUserName);
			this->panel1->Controls->Add(this->forgot_Password);
			this->panel1->Controls->Add(this->textBoxPassword);
			this->panel1->Location = System::Drawing::Point(112, 177);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(609, 270);
			this->panel1->TabIndex = 2;
			this->panel1->Visible = false;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(19, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 5);
			this->label3->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Maroon;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(16, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 97);
			this->label2->TabIndex = 8;
			this->label2->Text = L"DSU Examination Management System";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(1, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 269);
			this->label1->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Maroon;
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(300, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 34);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// login_btn
			// 
			this->login_btn->BackColor = System::Drawing::Color::Maroon;
			this->login_btn->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->login_btn->Location = System::Drawing::Point(452, 210);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(130, 34);
			this->login_btn->TabIndex = 6;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &Login::login_btn_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(373, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Login";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Passward
			// 
			this->Passward->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Passward->Location = System::Drawing::Point(273, 130);
			this->Passward->Name = L"Passward";
			this->Passward->Size = System::Drawing::Size(140, 25);
			this->Passward->TabIndex = 0;
			this->Passward->Text = L"  Password :";
			// 
			// logoBox
			// 
			this->logoBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logoBox->BackColor = System::Drawing::Color::Transparent;
			this->logoBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoBox.Image")));
			this->logoBox->Location = System::Drawing::Point(299, 35);
			this->logoBox->Name = L"logoBox";
			this->logoBox->Size = System::Drawing::Size(230, 86);
			this->logoBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logoBox->TabIndex = 3;
			this->logoBox->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(308, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Student";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(308, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Admain";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->logoBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->Resize += gcnew System::EventHandler(this, &Login::Login_Resize);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		//formOreginalSize = this->Size;
		data.isStudentData = true;
		data.getData();
		data.isStudentData = false;
		data.getData();
		panelLocation = gcnew System::Drawing::Rectangle(panel1->Location.X, panel1->Location.Y, panel1->Size.Width, panel1->Size.Height);
		resize_items();
			//StudentBtn_points = gcnew System::Drawing::Rectangle(student_label->Location.X, student_label->Location.Y, student_label->Size.Width, student_label->Size.Height);
	}
		   private: void resize_items() {
			   placeAtCenter(panelLocation, panel1);
			  // resizeControls(StudentBtn_points, student_label);
			  // resizeControls(teacherBtn_points, teacher_label);
			  // resizeControls(DisplayBtn_points, Display_label);


		   }
	private: void placeAtCenter(System::Drawing::Rectangle^ item, System::Windows::Forms::Control^ control) {
		
		int xRatio = (this->Width) / 2;
		int yRatio = (this->Height) / 2;
		formOreginalSize = this->Size;
		//int newPoint_X = (int)(item->X * xRatio);
		//int newPoint_Y = (int)(item->Y * yRatio);
		
		int newWidth = (int)(control->Width /2);
		int newHight = (int)(control->Height /2);
		xRatio -= newWidth;
		yRatio -= newHight;
		control->Location = System::Drawing::Point(xRatio, yRatio);
		
		//control->Size = System::Drawing::Size(newWidth, newHight);
	}
		   
	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxUserName->Text == admain && textBoxPassword->Text == pass ) {
			MyForm mypage;
			this->Hide();
			mypage.setSize(this->Size, this->Location.X, this->Location.Y);
			mypage.ShowDialog(this);
			if (mypage.showpage) {
				this->Show();
				mypage.showpage = false;
			}
		}
		else {
			MessageBox::Show("Invalid Password or Username..");
		}
	}
#pragma endregion
private: System::Void Login_Resize(System::Object^ sender, System::EventArgs^ e) {
	resize_items();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = false;
	button2->Visible = false;
	panel1->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Display page;
	this->Hide();
	page.setSize(this->Size, this->Location.X, this->Location.Y);
	page.ShowDialog();
	if (page.isClosed) {
		this->Show();
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = true;
	button2->Visible = true;
	panel1->Visible = false;
}
private: System::Void forgot_Password_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Your user name is :: Admain \n Your Password is :: admain \t\t\t\t\n\n");
}
};

}
