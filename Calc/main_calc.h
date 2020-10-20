#pragma once


namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ form;

	private: System::Windows::Forms::Button^ num_1;
	private: System::Windows::Forms::Button^ num_2;
	private: System::Windows::Forms::Button^ num_3;
	private: System::Windows::Forms::Button^ num_4;
	private: System::Windows::Forms::Button^ num_5;
	private: System::Windows::Forms::Button^ num_6;
	private: System::Windows::Forms::Button^ num_7;
	private: System::Windows::Forms::Button^ num_8;
	private: System::Windows::Forms::Button^ num_9;









	private: System::Windows::Forms::Button^ num_0;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ num_plus;


	private: System::Windows::Forms::Button^ num_reduce;


	private: System::Windows::Forms::Button^ num_multiply;



	private: System::Windows::Forms::Button^ num_devide;
	private: System::Windows::Forms::Button^ num_dot;
	private: System::Windows::Forms::Button^ num_result;
	private: System::Windows::Forms::TabControl^ calc_func;
	private: System::Windows::Forms::TabPage^ page_1;
	private: System::Windows::Forms::TabPage^ page_percent;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ percent_value;
	private: System::Windows::Forms::TextBox^ p_result;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ num;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ open_file;






























	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->form = (gcnew System::Windows::Forms::TextBox());
			this->num_1 = (gcnew System::Windows::Forms::Button());
			this->num_2 = (gcnew System::Windows::Forms::Button());
			this->num_3 = (gcnew System::Windows::Forms::Button());
			this->num_4 = (gcnew System::Windows::Forms::Button());
			this->num_5 = (gcnew System::Windows::Forms::Button());
			this->num_6 = (gcnew System::Windows::Forms::Button());
			this->num_7 = (gcnew System::Windows::Forms::Button());
			this->num_8 = (gcnew System::Windows::Forms::Button());
			this->num_9 = (gcnew System::Windows::Forms::Button());
			this->num_0 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->open_file = (gcnew System::Windows::Forms::Button());
			this->num_dot = (gcnew System::Windows::Forms::Button());
			this->num_result = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->num_plus = (gcnew System::Windows::Forms::Button());
			this->num_reduce = (gcnew System::Windows::Forms::Button());
			this->num_multiply = (gcnew System::Windows::Forms::Button());
			this->num_devide = (gcnew System::Windows::Forms::Button());
			this->calc_func = (gcnew System::Windows::Forms::TabControl());
			this->page_1 = (gcnew System::Windows::Forms::TabPage());
			this->page_percent = (gcnew System::Windows::Forms::TabPage());
			this->p_result = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->percent_value = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->calc_func->SuspendLayout();
			this->page_1->SuspendLayout();
			this->page_percent->SuspendLayout();
			this->SuspendLayout();
			// 
			// form
			// 
			this->form->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->form->Location = System::Drawing::Point(7, 18);
			this->form->MinimumSize = System::Drawing::Size(662, 100);
			this->form->Multiline = true;
			this->form->Name = L"form";
			this->form->ReadOnly = true;
			this->form->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->form->Size = System::Drawing::Size(662, 100);
			this->form->TabIndex = 0;
			this->form->TextChanged += gcnew System::EventHandler(this, &MyForm::form_TextChanged);
			// 
			// num_1
			// 
			this->num_1->Location = System::Drawing::Point(30, 141);
			this->num_1->Name = L"num_1";
			this->num_1->Size = System::Drawing::Size(75, 23);
			this->num_1->TabIndex = 1;
			this->num_1->Text = L"1";
			this->num_1->UseVisualStyleBackColor = true;
			this->num_1->Click += gcnew System::EventHandler(this, &MyForm::num_1_Click);
			// 
			// num_2
			// 
			this->num_2->Location = System::Drawing::Point(129, 141);
			this->num_2->Name = L"num_2";
			this->num_2->Size = System::Drawing::Size(75, 23);
			this->num_2->TabIndex = 2;
			this->num_2->Text = L"2";
			this->num_2->UseVisualStyleBackColor = true;
			this->num_2->Click += gcnew System::EventHandler(this, &MyForm::num_2_Click);
			// 
			// num_3
			// 
			this->num_3->Location = System::Drawing::Point(224, 141);
			this->num_3->Name = L"num_3";
			this->num_3->Size = System::Drawing::Size(75, 23);
			this->num_3->TabIndex = 3;
			this->num_3->Text = L"3";
			this->num_3->UseVisualStyleBackColor = true;
			this->num_3->Click += gcnew System::EventHandler(this, &MyForm::num_3_Click);
			// 
			// num_4
			// 
			this->num_4->Location = System::Drawing::Point(30, 88);
			this->num_4->Name = L"num_4";
			this->num_4->Size = System::Drawing::Size(75, 23);
			this->num_4->TabIndex = 4;
			this->num_4->Text = L"4";
			this->num_4->UseVisualStyleBackColor = true;
			this->num_4->Click += gcnew System::EventHandler(this, &MyForm::num_4_Click);
			// 
			// num_5
			// 
			this->num_5->Location = System::Drawing::Point(129, 88);
			this->num_5->Name = L"num_5";
			this->num_5->Size = System::Drawing::Size(75, 23);
			this->num_5->TabIndex = 5;
			this->num_5->Text = L"5";
			this->num_5->UseVisualStyleBackColor = true;
			this->num_5->Click += gcnew System::EventHandler(this, &MyForm::num_5_Click);
			// 
			// num_6
			// 
			this->num_6->Location = System::Drawing::Point(224, 88);
			this->num_6->Name = L"num_6";
			this->num_6->Size = System::Drawing::Size(75, 23);
			this->num_6->TabIndex = 6;
			this->num_6->Text = L"6";
			this->num_6->UseVisualStyleBackColor = true;
			this->num_6->Click += gcnew System::EventHandler(this, &MyForm::num_6_Click);
			// 
			// num_7
			// 
			this->num_7->Location = System::Drawing::Point(30, 41);
			this->num_7->Name = L"num_7";
			this->num_7->Size = System::Drawing::Size(75, 23);
			this->num_7->TabIndex = 7;
			this->num_7->Text = L"7";
			this->num_7->UseVisualStyleBackColor = true;
			this->num_7->Click += gcnew System::EventHandler(this, &MyForm::num_7_Click);
			// 
			// num_8
			// 
			this->num_8->Location = System::Drawing::Point(129, 41);
			this->num_8->Name = L"num_8";
			this->num_8->Size = System::Drawing::Size(75, 23);
			this->num_8->TabIndex = 8;
			this->num_8->Text = L"8";
			this->num_8->UseVisualStyleBackColor = true;
			this->num_8->Click += gcnew System::EventHandler(this, &MyForm::num_8_Click);
			// 
			// num_9
			// 
			this->num_9->Location = System::Drawing::Point(224, 41);
			this->num_9->Name = L"num_9";
			this->num_9->Size = System::Drawing::Size(75, 23);
			this->num_9->TabIndex = 9;
			this->num_9->Text = L"9";
			this->num_9->UseVisualStyleBackColor = true;
			this->num_9->Click += gcnew System::EventHandler(this, &MyForm::num_9_Click);
			// 
			// num_0
			// 
			this->num_0->Location = System::Drawing::Point(129, 184);
			this->num_0->Name = L"num_0";
			this->num_0->Size = System::Drawing::Size(75, 23);
			this->num_0->TabIndex = 10;
			this->num_0->Text = L"0";
			this->num_0->UseVisualStyleBackColor = true;
			this->num_0->Click += gcnew System::EventHandler(this, &MyForm::num_0_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->open_file);
			this->panel1->Controls->Add(this->num_dot);
			this->panel1->Controls->Add(this->num_result);
			this->panel1->Controls->Add(this->num_2);
			this->panel1->Controls->Add(this->num_0);
			this->panel1->Controls->Add(this->num_1);
			this->panel1->Controls->Add(this->num_9);
			this->panel1->Controls->Add(this->num_3);
			this->panel1->Controls->Add(this->num_8);
			this->panel1->Controls->Add(this->num_4);
			this->panel1->Controls->Add(this->num_7);
			this->panel1->Controls->Add(this->num_5);
			this->panel1->Controls->Add(this->num_6);
			this->panel1->Location = System::Drawing::Point(41, 146);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(336, 258);
			this->panel1->TabIndex = 11;
			// 
			// open_file
			// 
			this->open_file->Location = System::Drawing::Point(224, 224);
			this->open_file->Name = L"open_file";
			this->open_file->Size = System::Drawing::Size(75, 23);
			this->open_file->TabIndex = 13;
			this->open_file->Text = L"файл";
			this->open_file->UseVisualStyleBackColor = true;
			this->open_file->Click += gcnew System::EventHandler(this, &MyForm::open_file_Click);
			// 
			// num_dot
			// 
			this->num_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num_dot->Location = System::Drawing::Point(30, 184);
			this->num_dot->Name = L"num_dot";
			this->num_dot->Size = System::Drawing::Size(75, 23);
			this->num_dot->TabIndex = 12;
			this->num_dot->Text = L".";
			this->num_dot->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->num_dot->UseVisualStyleBackColor = true;
			this->num_dot->Click += gcnew System::EventHandler(this, &MyForm::num_dot_Click);
			// 
			// num_result
			// 
			this->num_result->Location = System::Drawing::Point(224, 184);
			this->num_result->Name = L"num_result";
			this->num_result->Size = System::Drawing::Size(75, 23);
			this->num_result->TabIndex = 11;
			this->num_result->Text = L"=";
			this->num_result->UseVisualStyleBackColor = true;
			this->num_result->Click += gcnew System::EventHandler(this, &MyForm::num_result_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->clear);
			this->panel2->Controls->Add(this->num_plus);
			this->panel2->Controls->Add(this->num_reduce);
			this->panel2->Controls->Add(this->num_multiply);
			this->panel2->Controls->Add(this->num_devide);
			this->panel2->Location = System::Drawing::Point(455, 143);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 275);
			this->panel2->TabIndex = 12;
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(63, 32);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(75, 23);
			this->clear->TabIndex = 4;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// num_plus
			// 
			this->num_plus->Location = System::Drawing::Point(63, 228);
			this->num_plus->Name = L"num_plus";
			this->num_plus->Size = System::Drawing::Size(75, 23);
			this->num_plus->TabIndex = 3;
			this->num_plus->Text = L"+";
			this->num_plus->UseVisualStyleBackColor = true;
			this->num_plus->Click += gcnew System::EventHandler(this, &MyForm::num_plus_Click);
			// 
			// num_reduce
			// 
			this->num_reduce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num_reduce->Location = System::Drawing::Point(63, 173);
			this->num_reduce->Name = L"num_reduce";
			this->num_reduce->Size = System::Drawing::Size(75, 23);
			this->num_reduce->TabIndex = 2;
			this->num_reduce->Text = L"--";
			this->num_reduce->UseVisualStyleBackColor = true;
			this->num_reduce->Click += gcnew System::EventHandler(this, &MyForm::num_reduce_Click);
			// 
			// num_multiply
			// 
			this->num_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num_multiply->Location = System::Drawing::Point(63, 132);
			this->num_multiply->Name = L"num_multiply";
			this->num_multiply->Size = System::Drawing::Size(75, 23);
			this->num_multiply->TabIndex = 1;
			this->num_multiply->Text = L"*";
			this->num_multiply->UseVisualStyleBackColor = true;
			this->num_multiply->Click += gcnew System::EventHandler(this, &MyForm::num_multiply_Click);
			// 
			// num_devide
			// 
			this->num_devide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num_devide->Location = System::Drawing::Point(63, 85);
			this->num_devide->Name = L"num_devide";
			this->num_devide->Size = System::Drawing::Size(75, 23);
			this->num_devide->TabIndex = 0;
			this->num_devide->Text = L"/";
			this->num_devide->UseVisualStyleBackColor = true;
			this->num_devide->Click += gcnew System::EventHandler(this, &MyForm::num_devide_Click);
			// 
			// calc_func
			// 
			this->calc_func->Controls->Add(this->page_1);
			this->calc_func->Controls->Add(this->page_percent);
			this->calc_func->Location = System::Drawing::Point(3, 3);
			this->calc_func->Name = L"calc_func";
			this->calc_func->SelectedIndex = 0;
			this->calc_func->Size = System::Drawing::Size(685, 474);
			this->calc_func->TabIndex = 13;
			// 
			// page_1
			// 
			this->page_1->Controls->Add(this->form);
			this->page_1->Controls->Add(this->panel1);
			this->page_1->Controls->Add(this->panel2);
			this->page_1->Location = System::Drawing::Point(4, 25);
			this->page_1->Name = L"page_1";
			this->page_1->Padding = System::Windows::Forms::Padding(3);
			this->page_1->Size = System::Drawing::Size(677, 445);
			this->page_1->TabIndex = 0;
			this->page_1->Text = L"Калькулятор";
			this->page_1->UseVisualStyleBackColor = true;
			// 
			// page_percent
			// 
			this->page_percent->Controls->Add(this->p_result);
			this->page_percent->Controls->Add(this->label3);
			this->page_percent->Controls->Add(this->num);
			this->page_percent->Controls->Add(this->label2);
			this->page_percent->Controls->Add(this->label1);
			this->page_percent->Controls->Add(this->percent_value);
			this->page_percent->Location = System::Drawing::Point(4, 25);
			this->page_percent->Name = L"page_percent";
			this->page_percent->Padding = System::Windows::Forms::Padding(3);
			this->page_percent->Size = System::Drawing::Size(677, 445);
			this->page_percent->TabIndex = 1;
			this->page_percent->Text = L"Процент";
			this->page_percent->UseVisualStyleBackColor = true;
			// 
			// p_result
			// 
			this->p_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->p_result->Location = System::Drawing::Point(225, 349);
			this->p_result->Multiline = true;
			this->p_result->Name = L"p_result";
			this->p_result->Size = System::Drawing::Size(186, 33);
			this->p_result->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(239, 279);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(161, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Результат";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// num
			// 
			this->num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num->Location = System::Drawing::Point(225, 207);
			this->num->Multiline = true;
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(186, 33);
			this->num->TabIndex = 4;
			this->num->Text = L"100";
			this->num->TextChanged += gcnew System::EventHandler(this, &MyForm::num_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(239, 127);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(161, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Всего";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(239, 18);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(161, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Процент(%)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// percent_value
			// 
			this->percent_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percent_value->Location = System::Drawing::Point(225, 65);
			this->percent_value->Multiline = true;
			this->percent_value->Name = L"percent_value";
			this->percent_value->Size = System::Drawing::Size(186, 33);
			this->percent_value->TabIndex = 1;
			this->percent_value->Text = L"10";
			this->percent_value->TextChanged += gcnew System::EventHandler(this, &MyForm::percent_value_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 478);
			this->Controls->Add(this->calc_func);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"Простой калькулятор";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->calc_func->ResumeLayout(false);
			this->page_1->ResumeLayout(false);
			this->page_1->PerformLayout();
			this->page_percent->ResumeLayout(false);
			this->page_percent->PerformLayout();
			this->ResumeLayout(false);

		}


#pragma endregion
	



private: System::Void num_dot_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_0_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_result_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_1_Click(System::Object^ sender, System::EventArgs^ e);
	

private: System::Void num_2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_3_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_4_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_5_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_6_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void num_7_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_8_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_9_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_devide_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_multiply_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_reduce_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void num_plus_Click(System::Object^ sender, System::EventArgs^ e);




private: System::Void form_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("В скором времени тут что нибудь появится! Пока тут пусто...");
}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void percent_value_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void num_TextChanged(System::Object^ sender, System::EventArgs^ e);
//private: System::Void p_result_TextChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void open_file_Click(System::Object^ sender, System::EventArgs^ e);

};
	
}




