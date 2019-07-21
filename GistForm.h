#pragma once
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include "sorting.h"

using namespace msclr::interop;

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для GistForm
	/// </summary>
	public ref class GistForm : public System::Windows::Forms::Form
	{
	public:
		array <String^>^ filePaths;
		GistForm(array <String^>^ s)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			filePaths = s;
			StartSorting();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GistForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(16, 27);
			this->chart1->Name = L"chart1";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"TimSort";
			series8->ChartArea = L"ChartArea1";
			series8->Legend = L"Legend1";
			series8->Name = L"Insertion Sort";
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Size = System::Drawing::Size(500, 697);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart2->Legends->Add(legend5);
			this->chart2->Location = System::Drawing::Point(526, 27);
			this->chart2->Name = L"chart2";
			series9->ChartArea = L"ChartArea1";
			series9->Legend = L"Legend1";
			series9->Name = L"TimSort";
			series10->ChartArea = L"ChartArea1";
			series10->Legend = L"Legend1";
			series10->Name = L"Insertion Sort";
			this->chart2->Series->Add(series9);
			this->chart2->Series->Add(series10);
			this->chart2->Size = System::Drawing::Size(500, 697);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &GistForm::chart2_Click);
			// 
			// chart3
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart3->Legends->Add(legend6);
			this->chart3->Location = System::Drawing::Point(1032, 27);
			this->chart3->Name = L"chart3";
			series11->ChartArea = L"ChartArea1";
			series11->Legend = L"Legend1";
			series11->Name = L"TimSort";
			series12->ChartArea = L"ChartArea1";
			series12->Legend = L"Legend1";
			series12->Name = L"Insertion Sort";
			this->chart3->Series->Add(series11);
			this->chart3->Series->Add(series12);
			this->chart3->Size = System::Drawing::Size(500, 697);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			this->chart3->Click += gcnew System::EventHandler(this, &GistForm::chart3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(148, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Количество сравнений";
			this->label1->Click += gcnew System::EventHandler(this, &GistForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(697, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Количество обменов";
			this->label2->Click += gcnew System::EventHandler(this, &GistForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1247, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Затраченное время";
			this->label3->Click += gcnew System::EventHandler(this, &GistForm::label3_Click);
			// 
			// GistForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1534, 711);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"GistForm";
			this->Text = L"Эксперименты";
			this->Load += gcnew System::EventHandler(this, &GistForm::GistForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void MarshalString(String ^ s, std::string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	public: void StartSorting() {
		for (int i = 0; i < filePaths->Length; i++) {
			std::string file;
			MarshalString(filePaths[i], file);
			Sorts s(file);

			s.Insertion();
			s.Tim();

			chart1->Series["TimSort"]->Points->AddXY(filePaths[i], s.GetTComp());
			chart2->Series["TimSort"]->Points->AddXY(filePaths[i], s.GetTSwap());
			chart3->Series["TimSort"]->Points->AddXY(filePaths[i], s.GetTTime());

			chart1->Series["Insertion Sort"]->Points->AddXY(filePaths[i], s.GetIComp());
			chart2->Series["Insertion Sort"]->Points->AddXY(filePaths[i], s.GetISwap());
			chart3->Series["Insertion Sort"]->Points->AddXY(filePaths[i], s.GetITime());
		}
	}

#pragma endregion


	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void GistForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
