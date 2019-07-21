#pragma once
#include "generation.h"
#include "GistForm.h"

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Kursach
	/// </summary>
	public ref class Kursach : public System::Windows::Forms::Form
	{
	public:
		Kursach(void)
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
		~Kursach()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	protected:

	protected:

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Up", L"Down", L"Rand", L"PartRand" });
			this->checkedListBox1->Location = System::Drawing::Point(89, 26);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(79, 70);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->ThreeDCheckBoxes = true;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Kursach::checkedListBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 14);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Тип генерируемой последовательности";
			this->label2->Click += gcnew System::EventHandler(this, &Kursach::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 14);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Длина";
			this->label3->Click += gcnew System::EventHandler(this, &Kursach::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 14);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Min";
			this->label4->Click += gcnew System::EventHandler(this, &Kursach::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(118, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 14);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Max";
			this->label5->Click += gcnew System::EventHandler(this, &Kursach::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(170, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 14);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Отсортированная часть";
			this->label6->Click += gcnew System::EventHandler(this, &Kursach::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(47, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Kursach::TextBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(68, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Kursach::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Kursach::TextBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(121, 119);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(47, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Kursach::TextBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(173, 119);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(47, 22);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Kursach::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Kursach::TextBox4_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Kursach::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(213, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Эксперементы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Kursach::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Kursach
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(328, 181);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkedListBox1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Kursach";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kursach";
			this->Load += gcnew System::EventHandler(this, &Kursach::Kursach_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kursach_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void splitter2_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
	}
	private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkedListBox1->CheckedItems->Count > 1)
		{
			for (int i = 0; i < checkedListBox1->Items->Count; i++)
				checkedListBox1->SetItemChecked(i, false);
			checkedListBox1->SetItemChecked(checkedListBox1->SelectedIndex, true);
		}
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "") {
		__int64 count = Convert::ToInt64(textBox1->Text);
		__int64 low;
		__int64 high;
		__int64 part;
		if (count <= 50000 && count >= 100) {
			Generator g1;
			std::string type;
			if (checkedListBox1->GetItemChecked(0)) {
				type = "Up";
			}
			if (checkedListBox1->GetItemChecked(1)) {
				type = "Down";
			}
			if (checkedListBox1->GetItemChecked(2)) {
				type = "Rand";
			}
			if (checkedListBox1->GetItemChecked(3)) {
				type = "PartRand";
			}
			if (textBox2->Text != "") {
				low = Convert::ToInt64(textBox2->Text);

			}
			else {
				low = 0;
			}
			if (textBox3->Text != "") {
				high = Convert::ToInt64(textBox3->Text);
			}
			else {
				high = 100;
			}
			if (textBox4->Text != "") {
				part = Convert::ToInt64(textBox4->Text);
			}
			else {
				part = 1;
			}
			if (high < low) {
				MessageBox::Show("Максиммальное значение должно быть больше минимального");
			}
			else {
				g1.Generate(type, count, low, high, part);
				MessageBox::Show("Генерация завершена");
			}
		}
		else {
			MessageBox::Show("Количество элементов должно находиться в диапазоне от 100 до 50000");
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Multiselect = true;
	openFileDialog1->Title = "Выберите файлы для сортировки";
	openFileDialog1->Filter = " Файлы генерации последовательностей |*.txt";
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		//MessageBox::Show("Файлы выбраны");
		array <String^>^ s = openFileDialog1->FileNames;
		Form^ gist = gcnew GistForm(s);
		gist->ShowDialog();
	}
	else {
		MessageBox::Show("Файлы не выбраны");
	}
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
		e->Handled = true;
}
private: System::Void TextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
		e->Handled = true;
}
private: System::Void TextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
		e->Handled = true;
}
private: System::Void TextBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
		e->Handled = true;
}
};
}
