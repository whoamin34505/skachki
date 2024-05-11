#pragma once
#include <iostream>
#include <time.h>

namespace gol {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int x1, x2, x3, x4, y1, y2, y3, y4, x, xx, xxx, xxxx, f1, f2, f3, f4,
		z1, z2, z3, z4, sum = 1000, stavka = 0, num = 0;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Button^ button3;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(53, 160);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(53, 238);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 42);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(53, 326);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(56, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(53, 413);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(49, 39);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(76, 468);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(174, 86);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(491, 468);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(174, 86);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PeachPuff;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(604, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 63);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(27, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(27, 428);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(41, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Сумма:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->textBox1->Location = System::Drawing::Point(136, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(87, 27);
			this->textBox1->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(131, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"1000";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(41, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ставка:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->Location = System::Drawing::Point(41, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(114, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"№ лошади:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->textBox2->Location = System::Drawing::Point(161, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 27);
			this->textBox2->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label9->Location = System::Drawing::Point(289, 11);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Финиш";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label10->Location = System::Drawing::Point(385, 11);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 25);
			this->label10->TabIndex = 18;
			this->label10->Text = L" ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label11->Location = System::Drawing::Point(272, 492);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 50);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Вы должны казино, \r\nигра окончена)";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PeachPuff;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(326, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 63);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Выйти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(838, 566);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label11->Visible = false;
		srand(time(NULL));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			stavka = Convert::ToInt32(textBox1->Text);
			num = Convert::ToInt32(textBox2->Text);
		}
		catch (...) {};
		f1 = 0; f2 = 0; f3 = 0; f4 = 0;
		z1 = 0; z2 = 0; z3 = 0; z4 = 0;
		x1 = 53; y1 = 160;
		x2 = 53; y2 = 238;
		x3 = 53; y3 = 326;
		x4 = 53; y4 = 413;
		pictureBox1->Location = Point(x1, y1);
		pictureBox2->Location = Point(x2, y2);
		pictureBox3->Location = Point(x3, y3);
		pictureBox4->Location = Point(x4, y4);
		timer1->Enabled = true;

	}


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (sum <= 0) {
			timer1->Enabled = false;
			DisableControlsExceptButton2();
			label11->Visible = true;
			MessageBox::Show("Ваш баланс равен нулю! Вы не можете больше ставить!");
		}
		else {
			if (x1 >= 690)
			{
				if (f2 == 0 && f3 == 0 && f4 == 0) f1 = 1;
			}
			else
			{
				x = rand() % 20;
				pictureBox1->Location = Point(x1 += x, y1);
			}

			if (x2 >= 690)
			{
				if (f1 == 0 && f3 == 0 && f4 == 0) f2 = 1;
			}
			else
			{
				xx = rand() % 5;
				pictureBox2->Location = Point(x2 += xx, y2);
			}

			if (x3 >= 690)
			{
				if (f1 == 0 && f2 == 0 && f4 == 0) f3 = 1;
			}
			else
			{
				xxx = rand() % 5;
				pictureBox3->Location = Point(x3 += xxx, y3);
			}

			if (x4 >= 690)
			{
				if (f1 == 0 && f2 == 0 && f3 == 0) f4 = 1;
			}
			else
			{
				xxxx = rand() % 5;
				pictureBox4->Location = Point(x4 += xxxx, y4);
			}

			if (x1 >= 690 && x2 >= 690 && x3 >= 690 && x4 >= 690)
			{
				timer1->Enabled = false;
				label9->Text = Convert::ToString(f1) + Convert::ToString(f2) + Convert::ToString(f3) + Convert::ToString(f4);
				String^ result = Convert::ToString(f1) + Convert::ToString(f2) + Convert::ToString(f3) + Convert::ToString(f4);
				if (result == "1000") {
					label10->Text = "Выиграл первый";
				}
				else if (result == "0100") {
					label10->Text = "Выиграл второй";
				}
				else if (result == "0010") {
					label10->Text = "Выиграл третий";
				}
				else if (result == "0001") {
					label10->Text = "Выиграл четвертый";
				}

			}

			try {
				if (Convert::ToInt32(textBox2->Text) == 1 && f1 == 1 && z1 == 0) {
					sum += Convert::ToInt32(textBox1->Text) * 2;
					label6->Text = Convert::ToString(sum);
					z1 = 1;
				}
				if (Convert::ToInt32(textBox2->Text) == 2 && f2 == 1 && z2 == 0) {
					sum += Convert::ToInt32(textBox1->Text) * 2;
					label6->Text = Convert::ToString(sum);
					z2 = 1;
				}
				if (Convert::ToInt32(textBox2->Text) == 3 && f3 == 1 && z3 == 0) {
					sum += Convert::ToInt32(textBox1->Text) * 2;
					label6->Text = Convert::ToString(sum);
					z3 = 1;
				}
				if (Convert::ToInt32(textBox2->Text) == 4 && f4 == 1 && z4 == 0) {
					sum += Convert::ToInt32(textBox1->Text) * 2;
					label6->Text = Convert::ToString(sum);
					z4 = 1;
				}
				if (Convert::ToInt32(textBox2->Text) != 1 && f1 == 1 && z1 == 0) {
					sum -= Convert::ToInt32(textBox1->Text);
					label6->Text = Convert::ToString(sum);
					z1 = 1;
				}

			}
			catch (...) {};
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void DisableControlsExceptButton2() {
		for each (Control ^ control in this->Controls) {
			if (control != button3) { 
				control->Enabled = false;
			}
		}
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
