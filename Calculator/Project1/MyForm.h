#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Line_error.h"
#include "Math_error.h"
#include "Initialization_error.h"
#include "Assign_expression.h"
#include "Math_expression.h"
#include <locale>         
#include <codecvt>
#include <thread>
#include <ctime>


namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	Assign_expression assign_expression;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:	ThreadStart^ thread_delegate_;
	private:    Thread^ exceptions_thread_;
	private:    System::Windows::Forms::TextBox^ tree_view_textBox;
	private:	
	public:
		MyForm(void)
		{
			Keys::Enter;
			AcceptButton;
			InitializeComponent();
			this->thread_delegate_ = gcnew ThreadStart(this, &MyForm::DoWork);
			this->exceptions_thread_ = gcnew Thread(thread_delegate_);
			this->exceptions_thread_->Start();
		}

		~MyForm() {
			this->exceptions_thread_->Abort();
		}

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::TextBox^ expression_textBox;//
	private: System::Windows::Forms::TextBox^ result_textBox;
	private: System::Windows::Forms::Button^ plus_button;
	private: System::Windows::Forms::Button^ three_button;
	private: System::Windows::Forms::Button^ two_button;
	private: System::Windows::Forms::Button^ one_button;
	private: System::Windows::Forms::Button^ cos_button;
	private: System::Windows::Forms::Button^ equal_button;
	private: System::Windows::Forms::Button^ tree_button;
	private: System::Windows::Forms::Button^ zero_button;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::Button^ tan_button;
	private: System::Windows::Forms::Button^ minus_button;
	private: System::Windows::Forms::Button^ six_button;
	private: System::Windows::Forms::Button^ five_button;
	private: System::Windows::Forms::Button^ four_button;
	private: System::Windows::Forms::Button^ sin_button;
	private: System::Windows::Forms::Button^ division_button;
	private: System::Windows::Forms::Button^ right_bracket_button;
	private: System::Windows::Forms::Button^ left_bracket_button;
	private: System::Windows::Forms::Button^ power_button;
	private: System::Windows::Forms::Button^ sqrt_button;
	private: System::Windows::Forms::Button^ multiplication_button;
	private: System::Windows::Forms::Button^ nine_button;
	private: System::Windows::Forms::Button^ eight_button;
	private: System::Windows::Forms::Button^ seven_button;
	private: System::Windows::Forms::Button^ log_button;
	private: System::Windows::Forms::TextBox^ exceptions_textBox;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->expression_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			   this->result_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->tan_button = (gcnew System::Windows::Forms::Button());
			   this->reset_button = (gcnew System::Windows::Forms::Button());
			   this->zero_button = (gcnew System::Windows::Forms::Button());
			   this->tree_button = (gcnew System::Windows::Forms::Button());
			   this->equal_button = (gcnew System::Windows::Forms::Button());
			   this->cos_button = (gcnew System::Windows::Forms::Button());
			   this->one_button = (gcnew System::Windows::Forms::Button());
			   this->two_button = (gcnew System::Windows::Forms::Button());
			   this->three_button = (gcnew System::Windows::Forms::Button());
			   this->plus_button = (gcnew System::Windows::Forms::Button());
			   this->sin_button = (gcnew System::Windows::Forms::Button());
			   this->four_button = (gcnew System::Windows::Forms::Button());
			   this->five_button = (gcnew System::Windows::Forms::Button());
			   this->six_button = (gcnew System::Windows::Forms::Button());
			   this->minus_button = (gcnew System::Windows::Forms::Button());
			   this->log_button = (gcnew System::Windows::Forms::Button());
			   this->seven_button = (gcnew System::Windows::Forms::Button());
			   this->eight_button = (gcnew System::Windows::Forms::Button());
			   this->nine_button = (gcnew System::Windows::Forms::Button());
			   this->multiplication_button = (gcnew System::Windows::Forms::Button());
			   this->sqrt_button = (gcnew System::Windows::Forms::Button());
			   this->power_button = (gcnew System::Windows::Forms::Button());
			   this->left_bracket_button = (gcnew System::Windows::Forms::Button());
			   this->right_bracket_button = (gcnew System::Windows::Forms::Button());
			   this->division_button = (gcnew System::Windows::Forms::Button());
			   this->exceptions_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->tree_view_textBox = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // expression_textBox
			   // 
			   this->expression_textBox->BackColor = System::Drawing::SystemColors::WindowText;
			   this->expression_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->expression_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->expression_textBox->ForeColor = System::Drawing::SystemColors::ScrollBar;
			   this->errorProvider1->SetIconAlignment(this->expression_textBox, System::Windows::Forms::ErrorIconAlignment::BottomLeft);
			   this->expression_textBox->Location = System::Drawing::Point(28, 74);
			   this->expression_textBox->Name = L"expression_textBox";
			   this->expression_textBox->Size = System::Drawing::Size(381, 43);
			   this->expression_textBox->TabIndex = 0;
			   this->expression_textBox->KeyDown += gcnew KeyEventHandler(this, &MyForm::expression_textBox_key_down);
			   this->expression_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->expression_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::expression_textBox_text_changed);
			   // 
			   // errorProvider1
			   // 
			   this->errorProvider1->ContainerControl = this;
			   // 
			   // result_textBox
			   // 
			   this->result_textBox->BackColor = System::Drawing::SystemColors::WindowText;
			   this->result_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->result_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->result_textBox->ForeColor = System::Drawing::SystemColors::ScrollBar;
			   this->result_textBox->Location = System::Drawing::Point(28, 130);
			   this->result_textBox->Name = L"result_textBox";
			   this->result_textBox->ReadOnly = true;
			   this->result_textBox->Size = System::Drawing::Size(381, 32);
			   this->result_textBox->TabIndex = 4;
			   this->result_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   // 
			   // tan_button
			   // 
			   this->tan_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tan_button.BackgroundImage")));
			   this->tan_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->tan_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->tan_button->Location = System::Drawing::Point(95, 495);
			   this->tan_button->Name = L"tan_button";
			   this->tan_button->Size = System::Drawing::Size(74, 71);
			   this->tan_button->TabIndex = 5;
			   this->tan_button->UseVisualStyleBackColor = true;
			   this->tan_button->Click += gcnew System::EventHandler(this, &MyForm::tan_button_click);
			   // 
			   // reset_button
			   // 
			   this->reset_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset_button.BackgroundImage")));
			   this->reset_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->reset_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->reset_button->Location = System::Drawing::Point(12, 187);
			   this->reset_button->Name = L"reset_button";
			   this->reset_button->Size = System::Drawing::Size(74, 71);
			   this->reset_button->TabIndex = 6;
			   this->reset_button->UseVisualStyleBackColor = true;
			   this->reset_button->Click += gcnew System::EventHandler(this, &MyForm::reset_button_click);
			   // 
			   // zero_button
			   // 
			   this->zero_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zero_button.BackgroundImage")));
			   this->zero_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->zero_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->zero_button->Location = System::Drawing::Point(175, 495);
			   this->zero_button->Name = L"zero_button";
			   this->zero_button->Size = System::Drawing::Size(74, 71);
			   this->zero_button->TabIndex = 7;
			   this->zero_button->UseVisualStyleBackColor = true;
			   this->zero_button->Click += gcnew System::EventHandler(this, &MyForm::zero_button_click);
			   // 
			   // tree_button
			   // 
			   this->tree_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tree_button.BackgroundImage")));
			   this->tree_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->tree_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->tree_button->Location = System::Drawing::Point(255, 495);
			   this->tree_button->Name = L"tree_button";
			   this->tree_button->Size = System::Drawing::Size(74, 71);
			   this->tree_button->TabIndex = 8;
			   this->tree_button->UseVisualStyleBackColor = true;
			   this->tree_button->Click += gcnew System::EventHandler(this, &MyForm::tree_button_click);
			   // 
			   // equal_button
			   // 
			   this->equal_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"equal_button.BackgroundImage")));
			   this->equal_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->equal_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->equal_button->Location = System::Drawing::Point(335, 495);
			   this->equal_button->Name = L"equal_button";
			   this->equal_button->Size = System::Drawing::Size(74, 71);
			   this->equal_button->TabIndex = 9;
			   this->equal_button->UseVisualStyleBackColor = true;
			   this->equal_button->Click += gcnew System::EventHandler(this, &MyForm::equal_button_click);
			   // 
			   // cos_button
			   // 
			   this->cos_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cos_button.BackgroundImage")));
			   this->cos_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->cos_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->cos_button->Location = System::Drawing::Point(15, 495);
			   this->cos_button->Name = L"cos_button";
			   this->cos_button->Size = System::Drawing::Size(74, 71);
			   this->cos_button->TabIndex = 10;
			   this->cos_button->UseVisualStyleBackColor = true;
			   this->cos_button->Click += gcnew System::EventHandler(this, &MyForm::cos_button_click);
			   // 
			   // one_button
			   // 
			   this->one_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"one_button.BackgroundImage")));
			   this->one_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->one_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->one_button->Location = System::Drawing::Point(95, 418);
			   this->one_button->Name = L"one_button";
			   this->one_button->Size = System::Drawing::Size(74, 71);
			   this->one_button->TabIndex = 11;
			   this->one_button->UseVisualStyleBackColor = true;
			   this->one_button->Click += gcnew System::EventHandler(this, &MyForm::one_button_click);
			   // 
			   // two_button
			   // 
			   this->two_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"two_button.BackgroundImage")));
			   this->two_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->two_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->two_button->Location = System::Drawing::Point(175, 418);
			   this->two_button->Name = L"two_button";
			   this->two_button->Size = System::Drawing::Size(74, 71);
			   this->two_button->TabIndex = 12;
			   this->two_button->UseVisualStyleBackColor = true;
			   this->two_button->Click += gcnew System::EventHandler(this, &MyForm::two_button_click);
			   // 
			   // three_button
			   // 
			   this->three_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"three_button.BackgroundImage")));
			   this->three_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->three_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->three_button->Location = System::Drawing::Point(255, 418);
			   this->three_button->Name = L"three_button";
			   this->three_button->Size = System::Drawing::Size(74, 71);
			   this->three_button->TabIndex = 13;
			   this->three_button->UseVisualStyleBackColor = true;
			   this->three_button->Click += gcnew System::EventHandler(this, &MyForm::three_button_click);
			   // 
			   // plus_button
			   // 
			   this->plus_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plus_button.BackgroundImage")));
			   this->plus_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->plus_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->plus_button->Location = System::Drawing::Point(335, 418);
			   this->plus_button->Name = L"plus_button";
			   this->plus_button->Size = System::Drawing::Size(74, 71);
			   this->plus_button->TabIndex = 14;
			   this->plus_button->UseVisualStyleBackColor = true;
			   this->plus_button->Click += gcnew System::EventHandler(this, &MyForm::plus_button_click);
			   // 
			   // sin_button
			   // 
			   this->sin_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sin_button.BackgroundImage")));
			   this->sin_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->sin_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->sin_button->Location = System::Drawing::Point(15, 418);
			   this->sin_button->Name = L"sin_button";
			   this->sin_button->Size = System::Drawing::Size(74, 71);
			   this->sin_button->TabIndex = 15;
			   this->sin_button->UseVisualStyleBackColor = true;
			   this->sin_button->Click += gcnew System::EventHandler(this, &MyForm::sin_button_click);
			   // 
			   // four_button
			   // 
			   this->four_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"four_button.BackgroundImage")));
			   this->four_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->four_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->four_button->Location = System::Drawing::Point(92, 341);
			   this->four_button->Name = L"four_button";
			   this->four_button->Size = System::Drawing::Size(74, 71);
			   this->four_button->TabIndex = 16;
			   this->four_button->UseVisualStyleBackColor = true;
			   this->four_button->Click += gcnew System::EventHandler(this, &MyForm::four_button_click);
			   // 
			   // five_button
			   // 
			   this->five_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"five_button.BackgroundImage")));
			   this->five_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->five_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->five_button->Location = System::Drawing::Point(173, 341);
			   this->five_button->Name = L"five_button";
			   this->five_button->Size = System::Drawing::Size(74, 71);
			   this->five_button->TabIndex = 17;
			   this->five_button->UseVisualStyleBackColor = true;
			   this->five_button->Click += gcnew System::EventHandler(this, &MyForm::five_button_click);
			   // 
			   // six_button
			   // 
			   this->six_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"six_button.BackgroundImage")));
			   this->six_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->six_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->six_button->Location = System::Drawing::Point(254, 341);
			   this->six_button->Name = L"six_button";
			   this->six_button->Size = System::Drawing::Size(74, 71);
			   this->six_button->TabIndex = 18;
			   this->six_button->UseVisualStyleBackColor = true;
			   this->six_button->Click += gcnew System::EventHandler(this, &MyForm::six_button_click);
			   // 
			   // minus_button
			   // 
			   this->minus_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minus_button.BackgroundImage")));
			   this->minus_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->minus_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->minus_button->Location = System::Drawing::Point(335, 341);
			   this->minus_button->Name = L"minus_button";
			   this->minus_button->Size = System::Drawing::Size(74, 71);
			   this->minus_button->TabIndex = 19;
			   this->minus_button->UseVisualStyleBackColor = true;
			   this->minus_button->Click += gcnew System::EventHandler(this, &MyForm::minus_button_click);
			   // 
			   // log_button
			   // 
			   this->log_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_button.BackgroundImage")));
			   this->log_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->log_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->log_button->Location = System::Drawing::Point(92, 187);
			   this->log_button->Name = L"log_button";
			   this->log_button->Size = System::Drawing::Size(74, 71);
			   this->log_button->TabIndex = 20;
			   this->log_button->UseVisualStyleBackColor = true;
			   this->log_button->Click += gcnew System::EventHandler(this, &MyForm::log_button_click);
			   // 
			   // seven_button
			   // 
			   this->seven_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seven_button.BackgroundImage")));
			   this->seven_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->seven_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->seven_button->Location = System::Drawing::Point(92, 264);
			   this->seven_button->Name = L"seven_button";
			   this->seven_button->Size = System::Drawing::Size(74, 71);
			   this->seven_button->TabIndex = 21;
			   this->seven_button->UseVisualStyleBackColor = true;
			   this->seven_button->Click += gcnew System::EventHandler(this, &MyForm::seven_button_click);
			   // 
			   // eight_button
			   // 
			   this->eight_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eight_button.BackgroundImage")));
			   this->eight_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->eight_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->eight_button->Location = System::Drawing::Point(173, 264);
			   this->eight_button->Name = L"eight_button";
			   this->eight_button->Size = System::Drawing::Size(74, 71);
			   this->eight_button->TabIndex = 22;
			   this->eight_button->UseVisualStyleBackColor = true;
			   this->eight_button->Click += gcnew System::EventHandler(this, &MyForm::eight_button_click);
			   // 
			   // nine_button
			   // 
			   this->nine_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nine_button.BackgroundImage")));
			   this->nine_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->nine_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->nine_button->Location = System::Drawing::Point(254, 264);
			   this->nine_button->Name = L"nine_button";
			   this->nine_button->Size = System::Drawing::Size(74, 71);
			   this->nine_button->TabIndex = 23;
			   this->nine_button->UseVisualStyleBackColor = true;
			   this->nine_button->Click += gcnew System::EventHandler(this, &MyForm::nine_button_click);
			   // 
			   // multiplication_button
			   // 
			   this->multiplication_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"multiplication_button.BackgroundImage")));
			   this->multiplication_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->multiplication_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->multiplication_button->Location = System::Drawing::Point(335, 264);
			   this->multiplication_button->Name = L"multiplication_button";
			   this->multiplication_button->Size = System::Drawing::Size(74, 71);
			   this->multiplication_button->TabIndex = 24;
			   this->multiplication_button->UseVisualStyleBackColor = true;
			   this->multiplication_button->Click += gcnew System::EventHandler(this, &MyForm::multiplication_button_click);
			   // 
			   // sqrt_button
			   // 
			   this->sqrt_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sqrt_button.BackgroundImage")));
			   this->sqrt_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->sqrt_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->sqrt_button->Location = System::Drawing::Point(12, 264);
			   this->sqrt_button->Name = L"sqrt_button";
			   this->sqrt_button->Size = System::Drawing::Size(74, 71);
			   this->sqrt_button->TabIndex = 25;
			   this->sqrt_button->UseVisualStyleBackColor = true;
			   this->sqrt_button->Click += gcnew System::EventHandler(this, &MyForm::sqrt_button_click);
			   // 
			   // power_button
			   // 
			   this->power_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"power_button.BackgroundImage")));
			   this->power_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->power_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->power_button->Location = System::Drawing::Point(12, 341);
			   this->power_button->Name = L"power_button";
			   this->power_button->Size = System::Drawing::Size(74, 71);
			   this->power_button->TabIndex = 26;
			   this->power_button->UseVisualStyleBackColor = true;
			   this->power_button->Click += gcnew System::EventHandler(this, &MyForm::power_button_click);
			   // 
			   // left_bracket_button
			   // 
			   this->left_bracket_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left_bracket_button.BackgroundImage")));
			   this->left_bracket_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->left_bracket_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->left_bracket_button->Location = System::Drawing::Point(173, 187);
			   this->left_bracket_button->Name = L"left_bracket_button";
			   this->left_bracket_button->Size = System::Drawing::Size(74, 71);
			   this->left_bracket_button->TabIndex = 27;
			   this->left_bracket_button->UseVisualStyleBackColor = true;
			   this->left_bracket_button->Click += gcnew System::EventHandler(this, &MyForm::left_bracket_button_click);
			   // 
			   // right_bracket_button
			   // 
			   this->right_bracket_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right_bracket_button.BackgroundImage")));
			   this->right_bracket_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->right_bracket_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->right_bracket_button->Location = System::Drawing::Point(254, 187);
			   this->right_bracket_button->Name = L"right_bracket_button";
			   this->right_bracket_button->Size = System::Drawing::Size(74, 71);
			   this->right_bracket_button->TabIndex = 28;
			   this->right_bracket_button->UseVisualStyleBackColor = true;
			   this->right_bracket_button->Click += gcnew System::EventHandler(this, &MyForm::right_bracket_button_click);
			   // 
			   // division_button
			   // 
			   this->division_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"division_button.BackgroundImage")));
			   this->division_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->division_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->division_button->Location = System::Drawing::Point(335, 187);
			   this->division_button->Name = L"division_button";
			   this->division_button->Size = System::Drawing::Size(74, 71);
			   this->division_button->TabIndex = 29;
			   this->division_button->UseVisualStyleBackColor = true;
			   this->division_button->Click += gcnew System::EventHandler(this, &MyForm::division_button_click);
			   // 
			   // exceptions_textBox
			   // 
			   this->exceptions_textBox->BackColor = System::Drawing::SystemColors::WindowText;
			   this->exceptions_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->exceptions_textBox->Cursor = System::Windows::Forms::Cursors::Default;
			   this->exceptions_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->exceptions_textBox->ForeColor = System::Drawing::SystemColors::ScrollBar;
			   this->exceptions_textBox->Location = System::Drawing::Point(38, 13);
			   this->exceptions_textBox->Name = L"exceptions_textBox";
			   this->exceptions_textBox->ReadOnly = true;
			   this->exceptions_textBox->Size = System::Drawing::Size(371, 20);
			   this->exceptions_textBox->TabIndex = 30;
			   this->exceptions_textBox->Visible = false;
			   // 
			   // tree_view_textBox
			   // 
			   this->tree_view_textBox->AcceptsReturn = true;
			   this->tree_view_textBox->AcceptsTab = true;
			   this->tree_view_textBox->BackColor = System::Drawing::SystemColors::ControlText;
			   this->tree_view_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->tree_view_textBox->Cursor = System::Windows::Forms::Cursors::Default;
			   this->tree_view_textBox->ForeColor = System::Drawing::Color::LightSlateGray;
			   this->tree_view_textBox->Location = System::Drawing::Point(12, 53);
			   this->tree_view_textBox->MaximumSize = System::Drawing::Size(600, 600);
			   this->tree_view_textBox->Multiline = true;
			   this->tree_view_textBox->Name = L"tree_view_textBox";
			   this->tree_view_textBox->ReadOnly = true;
			   this->tree_view_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			   this->tree_view_textBox->Size = System::Drawing::Size(428, 128);
			   this->tree_view_textBox->TabIndex = 31;
			   this->tree_view_textBox->Visible = false;
			   this->tree_view_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::tree_view_textBox_TextChanged);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(429, 581);
			   this->Controls->Add(this->tree_view_textBox);
			   this->Controls->Add(this->exceptions_textBox);
			   this->Controls->Add(this->division_button);
			   this->Controls->Add(this->right_bracket_button);
			   this->Controls->Add(this->left_bracket_button);
			   this->Controls->Add(this->power_button);
			   this->Controls->Add(this->sqrt_button);
			   this->Controls->Add(this->multiplication_button);
			   this->Controls->Add(this->nine_button);
			   this->Controls->Add(this->eight_button);
			   this->Controls->Add(this->seven_button);
			   this->Controls->Add(this->log_button);
			   this->Controls->Add(this->minus_button);
			   this->Controls->Add(this->six_button);
			   this->Controls->Add(this->five_button);
			   this->Controls->Add(this->four_button);
			   this->Controls->Add(this->sin_button);
			   this->Controls->Add(this->plus_button);
			   this->Controls->Add(this->three_button);
			   this->Controls->Add(this->two_button);
			   this->Controls->Add(this->one_button);
			   this->Controls->Add(this->cos_button);
			   this->Controls->Add(this->equal_button);
			   this->Controls->Add(this->tree_button);
			   this->Controls->Add(this->zero_button);
			   this->Controls->Add(this->reset_button);
			   this->Controls->Add(this->tan_button);
			   this->Controls->Add(this->result_textBox);
			   this->Controls->Add(this->expression_textBox);
			   this->Cursor = System::Windows::Forms::Cursors::Default;
			   this->DoubleBuffered = true;
			   this->HelpButton = true;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximumSize = System::Drawing::Size(480, 628);
			   this->Name = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion


		   //own functions
	private:
		void SetTextToTextBox() {
			if (!this->exceptions_textBox->IsDisposed)
				this->exceptions_textBox->Visible = true;
		}

		void DoWork() {
			Sleep(2000);
			this->Invoke(gcnew Action(this, &MyForm::SetTextToTextBox));
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void expression_textBox_key_down(Object^ sender, KeyEventArgs^ e) {
		try {
			if (e->KeyCode == Keys::Enter)
			{
				PlaySound(L"calc_click", NULL, SND_ASYNC);


				//String^ to string
				std::string line = msclr::interop::marshal_as<std::string>(expression_textBox->Text);

				if (assign_expression.is_assgignment(line)) {
					assign_expression.put_variables_into_kb(line);
					expression_textBox->Clear();
					result_textBox->Text = "";
				}
				else {
					expression_textBox->Text = result_textBox->Text;
					result_textBox->Clear();
					expression_textBox->Select(expression_textBox->Text->Length, 0);
				}
				exceptions_textBox->Clear();
				e->SuppressKeyPress = true;
			}
		}
		catch (Initizalization_error error) {
			this->thread_delegate_ = gcnew ThreadStart(this, &MyForm::DoWork);
			this->exceptions_thread_ = gcnew Thread(thread_delegate_);
			exceptions_thread_->Start();


			//string to String^
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
		}
	}



	private: System::Void expression_textBox_text_changed(System::Object^ sender, System::EventArgs^ e) {
		try {
			exceptions_textBox->Visible = false;
			exceptions_thread_->Abort();

			Math_expression math_expression;

			//String^ to string
			std::string line = msclr::interop::marshal_as<std::string>(expression_textBox->Text);

			line = assign_expression.assign_variables(line);

			if (line.empty())
				result_textBox->Text = "";
			else
				result_textBox->Text = Convert::ToString(math_expression.compute_value(line));

			exceptions_textBox->Clear();
		}
		catch (Line_error error) {

			//Starting new exceptions thread
			this->thread_delegate_ = gcnew ThreadStart(this, &MyForm::DoWork);
			this->exceptions_thread_ = gcnew Thread(thread_delegate_);
			exceptions_thread_->Start();
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
		}

		catch (Initizalization_error error) {
			this->thread_delegate_ = gcnew ThreadStart(this, &MyForm::DoWork);
			this->exceptions_thread_ = gcnew Thread(thread_delegate_);
			exceptions_thread_->Start();
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
		}
		catch (Math_error error) {
			this->thread_delegate_ = gcnew ThreadStart(this, &MyForm::DoWork);
			this->exceptions_thread_ = gcnew Thread(thread_delegate_);
			exceptions_thread_->Start();
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
		}
		// will be caught if not ASCII symbol used
		catch (...) {
			this->thread_delegate_ = gcnew ThreadStart(this, &MyForm::DoWork);
			this->exceptions_thread_ = gcnew Thread(thread_delegate_);
			exceptions_thread_->Start();
			string line = "Unknown variable";
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
		}
	}


	private: System::Void one_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "1";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void three_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "3";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void reset_button_click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"calc_click", NULL, SND_ASYNC);
		result_textBox->Text = "";
		exceptions_textBox->Text = "";
		expression_textBox->Text = "";
		tree_view_textBox->Text = "";
		tree_view_textBox->Visible = false;
		assign_expression.memory_clear();
		expression_textBox->Focus();
	}
	private: System::Void tree_button_click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (!tree_view_textBox->Visible) {
				exceptions_thread_->Abort();
				PlaySound(L"calc_click", NULL, SND_ASYNC);

				Math_expression math_expression;

				std::string line = msclr::interop::marshal_as<std::string>(expression_textBox->Text);

				if (!assign_expression.is_assgignment(line)) {
					line = assign_expression.assign_variables(line);
					Expression_tree tree;
					tree.build_tree(line);
					tree.print(tree_view_textBox, tree.root);
				}
				tree_view_textBox->Visible = true;
			}
			else {
				tree_view_textBox->Clear();
				tree_view_textBox->Visible = false;
			}
		}
		catch (Line_error error) {
			exceptions_textBox->Visible = true;
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
			tree_view_textBox->Visible = false;
		}

		catch (Initizalization_error error) {
			exceptions_textBox->Visible = true;
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
			tree_view_textBox->Visible = false;
		}
		catch (Math_error error) {
			exceptions_textBox->Visible = true;
			string line = error.get_message();
			String^ str = gcnew String(line.c_str());
			exceptions_textBox->Text = str;
			tree_view_textBox->Visible = false;
		}


	}
	private: System::Void four_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "4";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void eight_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "8";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void sqrt_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "sqrt(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void power_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "^(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void left_bracket_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void right_bracket_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = ")";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void division_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "/";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void log_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "log(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void seven_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "7";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void nine_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "9";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void multiplication_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "*";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void sin_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "sin(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void five_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "5";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void six_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "6";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void minus_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "-";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void cos_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "cos(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}

	private: System::Void two_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "2";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void plus_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "+";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void tan_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "tg(";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void zero_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->SelectedText = "0";
		expression_textBox->Focus();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void equal_button_click(System::Object^ sender, System::EventArgs^ e) {
		expression_textBox->Text = result_textBox->Text;
		result_textBox->Clear();
		expression_textBox->Select(expression_textBox->Text->Length, 0);
		exceptions_textBox->Clear();
		PlaySound(L"calc_click", NULL, SND_ASYNC);
	}
	private: System::Void tree_view_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
