#pragma once

namespace WinForms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	public:
		Calc(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ butclose;
	private: System::Windows::Forms::Label^ output;
	private: System::Windows::Forms::Button^ btnac;
	private: System::Windows::Forms::Button^ btnpm;
	private: System::Windows::Forms::Button^ btnpr;
	private: System::Windows::Forms::Button^ btndivide;
	private: System::Windows::Forms::Button^ btnmult;
	private: System::Windows::Forms::Button^ btnminus;
	private: System::Windows::Forms::Button^ btnplus;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btn0;
	private: double fierst_num;
	private: char user_action;
	private: bool is_equal = false;
	private: System::Windows::Forms::LinkLabel^ copyrigt;

	protected:

	protected:




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calc::typeid));
			this->butclose = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::Label());
			this->btnac = (gcnew System::Windows::Forms::Button());
			this->btnpm = (gcnew System::Windows::Forms::Button());
			this->btnpr = (gcnew System::Windows::Forms::Button());
			this->btndivide = (gcnew System::Windows::Forms::Button());
			this->btnmult = (gcnew System::Windows::Forms::Button());
			this->btnminus = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->copyrigt = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// butclose
			// 
			this->butclose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->butclose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butclose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butclose->ForeColor = System::Drawing::Color::White;
			this->butclose->Location = System::Drawing::Point(22, 22);
			this->butclose->Name = L"butclose";
			this->butclose->Size = System::Drawing::Size(50, 50);
			this->butclose->TabIndex = 0;
			this->butclose->Text = L"X";
			this->butclose->UseVisualStyleBackColor = false;
			this->butclose->Click += gcnew System::EventHandler(this, &Calc::butclose_Click);
			// 
			// output
			// 
			this->output->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->output->ForeColor = System::Drawing::Color::White;
			this->output->Location = System::Drawing::Point(16, 16);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(330, 115);
			this->output->TabIndex = 1;
			this->output->Text = L"0";
			this->output->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// btnac
			// 
			this->btnac->BackColor = System::Drawing::Color::Silver;
			this->btnac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnac->Location = System::Drawing::Point(16, 136);
			this->btnac->Margin = System::Windows::Forms::Padding(5);
			this->btnac->Name = L"btnac";
			this->btnac->Size = System::Drawing::Size(78, 78);
			this->btnac->TabIndex = 2;
			this->btnac->Text = L"AC";
			this->btnac->UseVisualStyleBackColor = false;
			this->btnac->Click += gcnew System::EventHandler(this, &Calc::btnac_Click);
			// 
			// btnpm
			// 
			this->btnpm->BackColor = System::Drawing::Color::Silver;
			this->btnpm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnpm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnpm->Location = System::Drawing::Point(100, 136);
			this->btnpm->Margin = System::Windows::Forms::Padding(5);
			this->btnpm->Name = L"btnpm";
			this->btnpm->Size = System::Drawing::Size(78, 78);
			this->btnpm->TabIndex = 3;
			this->btnpm->Text = L"+/-";
			this->btnpm->UseVisualStyleBackColor = false;
			this->btnpm->Click += gcnew System::EventHandler(this, &Calc::btnpm_Click);
			// 
			// btnpr
			// 
			this->btnpr->BackColor = System::Drawing::Color::Silver;
			this->btnpr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnpr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnpr->Location = System::Drawing::Point(184, 136);
			this->btnpr->Margin = System::Windows::Forms::Padding(5);
			this->btnpr->Name = L"btnpr";
			this->btnpr->Size = System::Drawing::Size(78, 78);
			this->btnpr->TabIndex = 4;
			this->btnpr->Text = L"%";
			this->btnpr->UseVisualStyleBackColor = false;
			this->btnpr->Click += gcnew System::EventHandler(this, &Calc::btnpr_Click);
			// 
			// btndivide
			// 
			this->btndivide->BackColor = System::Drawing::Color::Gold;
			this->btndivide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btndivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btndivide->Location = System::Drawing::Point(268, 136);
			this->btndivide->Margin = System::Windows::Forms::Padding(5);
			this->btndivide->Name = L"btndivide";
			this->btndivide->Size = System::Drawing::Size(78, 78);
			this->btndivide->TabIndex = 5;
			this->btndivide->Text = L"/";
			this->btndivide->UseVisualStyleBackColor = false;
			this->btndivide->Click += gcnew System::EventHandler(this, &Calc::btndivide_Click);
			// 
			// btnmult
			// 
			this->btnmult->BackColor = System::Drawing::Color::Gold;
			this->btnmult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnmult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnmult->Location = System::Drawing::Point(266, 219);
			this->btnmult->Margin = System::Windows::Forms::Padding(5);
			this->btnmult->Name = L"btnmult";
			this->btnmult->Size = System::Drawing::Size(78, 78);
			this->btnmult->TabIndex = 9;
			this->btnmult->Text = L"*";
			this->btnmult->UseVisualStyleBackColor = false;
			this->btnmult->Click += gcnew System::EventHandler(this, &Calc::btnmult_Click);
			// 
			// btnminus
			// 
			this->btnminus->BackColor = System::Drawing::Color::Gold;
			this->btnminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnminus->Location = System::Drawing::Point(266, 303);
			this->btnminus->Margin = System::Windows::Forms::Padding(5);
			this->btnminus->Name = L"btnminus";
			this->btnminus->Size = System::Drawing::Size(78, 78);
			this->btnminus->TabIndex = 13;
			this->btnminus->Text = L"-";
			this->btnminus->UseVisualStyleBackColor = false;
			this->btnminus->Click += gcnew System::EventHandler(this, &Calc::btnminus_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Gray;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->ForeColor = System::Drawing::Color::White;
			this->btn9->Location = System::Drawing::Point(182, 220);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(78, 78);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Gray;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->ForeColor = System::Drawing::Color::White;
			this->btn8->Location = System::Drawing::Point(99, 220);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(78, 78);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Gray;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->ForeColor = System::Drawing::Color::White;
			this->btn7->Location = System::Drawing::Point(16, 220);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(78, 78);
			this->btn7->TabIndex = 6;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Gray;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->ForeColor = System::Drawing::Color::White;
			this->btn6->Location = System::Drawing::Point(182, 303);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(78, 78);
			this->btn6->TabIndex = 12;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Gray;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->ForeColor = System::Drawing::Color::White;
			this->btn5->Location = System::Drawing::Point(99, 303);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(78, 78);
			this->btn5->TabIndex = 11;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Gray;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->ForeColor = System::Drawing::Color::White;
			this->btn4->Location = System::Drawing::Point(16, 303);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(78, 78);
			this->btn4->TabIndex = 10;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btnplus
			// 
			this->btnplus->BackColor = System::Drawing::Color::Gold;
			this->btnplus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnplus->Location = System::Drawing::Point(266, 386);
			this->btnplus->Margin = System::Windows::Forms::Padding(5);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(78, 78);
			this->btnplus->TabIndex = 17;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = false;
			this->btnplus->Click += gcnew System::EventHandler(this, &Calc::btnplus_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Gray;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->ForeColor = System::Drawing::Color::White;
			this->btn3->Location = System::Drawing::Point(182, 386);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(78, 78);
			this->btn3->TabIndex = 16;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Gray;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->ForeColor = System::Drawing::Color::White;
			this->btn2->Location = System::Drawing::Point(99, 386);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(78, 78);
			this->btn2->TabIndex = 15;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Gray;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->ForeColor = System::Drawing::Color::White;
			this->btn1->Location = System::Drawing::Point(16, 386);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(78, 78);
			this->btn1->TabIndex = 14;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Gray;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->ForeColor = System::Drawing::Color::White;
			this->btn0->Location = System::Drawing::Point(16, 469);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(161, 78);
			this->btn0->TabIndex = 18;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Calc::BtnNumber_Click);
			// 
			// btndot
			// 
			this->btndot->BackColor = System::Drawing::Color::Gray;
			this->btndot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btndot->ForeColor = System::Drawing::Color::White;
			this->btndot->Location = System::Drawing::Point(182, 469);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(78, 78);
			this->btndot->TabIndex = 20;
			this->btndot->Text = L".";
			this->btndot->UseVisualStyleBackColor = false;
			this->btndot->Click += gcnew System::EventHandler(this, &Calc::btndot_Click);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::Color::Gold;
			this->btnequal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnequal->Location = System::Drawing::Point(266, 469);
			this->btnequal->Margin = System::Windows::Forms::Padding(5);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(78, 78);
			this->btnequal->TabIndex = 21;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &Calc::btnequal_Click);
			// 
			// copyrigt
			// 
			this->copyrigt->BackColor = System::Drawing::Color::Transparent;
			this->copyrigt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->copyrigt->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->copyrigt->LinkColor = System::Drawing::Color::White;
			this->copyrigt->Location = System::Drawing::Point(200, 22);
			this->copyrigt->Name = L"copyrigt";
			this->copyrigt->Size = System::Drawing::Size(140, 23);
			this->copyrigt->TabIndex = 22;
			this->copyrigt->TabStop = true;
			this->copyrigt->Text = L"AlexMel83 © 2023";
			this->copyrigt->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->copyrigt->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Calc::copyrigt_LinkClicked);
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(361, 562);
			this->Controls->Add(this->copyrigt);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnminus);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnmult);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btndivide);
			this->Controls->Add(this->btnpr);
			this->Controls->Add(this->btnpm);
			this->Controls->Add(this->btnac);
			this->Controls->Add(this->butclose);
			this->Controls->Add(this->output);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Calc";
			this->Padding = System::Windows::Forms::Padding(18, 16, 18, 16);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"My Calc";
			this->Load += gcnew System::EventHandler(this, &Calc::Calc_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Calc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void butclose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		output->ForeColor = Color::White;
		if (output->Text == "0" || is_equal) {
			output->Text = button->Text;
			is_equal = false;
		}
		else output->Text += button->Text;
	}
private: System::Void MathActions(char action) {
	fierst_num = System::Convert::ToDouble(output->Text);
	user_action = action;
	output->Text = "0";
}
private: System::Void btndivide_Click(System::Object^ sender, System::EventArgs^ e) {
	MathActions('/');
}
private: System::Void btnmult_Click(System::Object^ sender, System::EventArgs^ e) {
	MathActions('*');
}
private: System::Void btnminus_Click(System::Object^ sender, System::EventArgs^ e) {
	MathActions('-');
}
private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
	MathActions('+');
}

private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
	double second = System::Convert::ToDouble(output->Text);
	double res;
	if (user_action == '*' || user_action == '/' || user_action == '+' || user_action == '-' || user_action == '%') {
		switch (user_action) {
		case '%': res = fierst_num * second / 100;
			break;
		case '+': res = fierst_num + second;
			break;
		case '-': res = fierst_num - second;
			break;
		case '*': res = fierst_num * second;
			break;
		case '/':
			if (second != 0)
				res = fierst_num / second;
			else {
				output->ForeColor = Color::Red;
				MessageBox::Show(this, "Action is forbidden", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				res = 0;
			}
		}
		output->Text = System::Convert::ToString(res);
		user_action = ' ';
		is_equal = true;
	}
}
private: System::Void btnac_Click(System::Object^ sender, System::EventArgs^ e) {
	output->Text = "0";
	output->ForeColor = Color::White;
	fierst_num = 0;
	user_action = ' ';
	is_equal = false;
}
private: System::Void btnpm_Click(System::Object^ sender, System::EventArgs^ e) {
	double num = System::Convert::ToDouble(output->Text);
	output->Text = System::Convert::ToString(-num);
}
private: System::Void btnpr_Click(System::Object^ sender, System::EventArgs^ e) {
	MathActions('%');
}
private: System::Void btndot_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!output->Text->Contains(","))
		output->Text += ",";
}
private: System::Void copyrigt_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://cfhope.in.ua/htm/index.html");
}
};
}
