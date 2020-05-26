#pragma once
#include <vector>
#include <string>
#include <time.h>
#include <msclr\marshal_cppstd.h>

std::vector <std::string> questionsMath = {"Чета по матеше","еще чета по матеше", "чета по матешееее", "а вы знали что у меня 0 фантазии, чета по матешееее"};
std::vector <std::string> questionsBio = {"Биолоигя", "тебе два", "сосите", "аааааааа", "сукаукаукакука", "Пурумпурм"};
std::vector <std::string> questionsPhys = {"Я акула", "Поросенок", "Пчела", "Люблю атомы", "Вольфрам классный?", "ААААААААААААААфизика"};
std::vector <std::string> questionsChem = {"Кукусики", "LONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONGLONGLOGNLONG", "Ты прогуливал школу в химии?", "Ты прогуливал химию в школе?", "Химия прогуливала школу в тебе?", "Школа прогуливала тебя в химии?"};

std::string fileMath = "math.txt";
std::string fileChem = "chem.txt";
std::string fileBio = "bio.txt";
std::string filePhys = "phys.txt";
namespace ExamTickets {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::TextBox^ questionEdit;
	protected:
	private: System::Windows::Forms::Button^ addMath;
	private: System::Windows::Forms::Button^ addBio;
	private: System::Windows::Forms::Button^ addPhys;
	private: System::Windows::Forms::Button^ addChem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ questionsCount;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ examTickets;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ questions;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ examList;
	private: System::Windows::Forms::Button^ generateTicket;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->questionEdit = (gcnew System::Windows::Forms::TextBox());
			this->addMath = (gcnew System::Windows::Forms::Button());
			this->addBio = (gcnew System::Windows::Forms::Button());
			this->addPhys = (gcnew System::Windows::Forms::Button());
			this->addChem = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->questionsCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->examTickets = (gcnew System::Windows::Forms::DataGridView());
			this->questions = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->examList = (gcnew System::Windows::Forms::ComboBox());
			this->generateTicket = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->questionsCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->examTickets))->BeginInit();
			this->SuspendLayout();
			// 
			// questionEdit
			// 
			this->questionEdit->Location = System::Drawing::Point(79, 50);
			this->questionEdit->Name = L"questionEdit";
			this->questionEdit->Size = System::Drawing::Size(358, 20);
			this->questionEdit->TabIndex = 0;
			// 
			// addMath
			// 
			this->addMath->Location = System::Drawing::Point(79, 76);
			this->addMath->Name = L"addMath";
			this->addMath->Size = System::Drawing::Size(85, 23);
			this->addMath->TabIndex = 1;
			this->addMath->Text = L"Математике";
			this->addMath->UseVisualStyleBackColor = true;
			this->addMath->Click += gcnew System::EventHandler(this, &MyForm::AddMath_Click);
			// 
			// addBio
			// 
			this->addBio->Location = System::Drawing::Point(170, 76);
			this->addBio->Name = L"addBio";
			this->addBio->Size = System::Drawing::Size(85, 23);
			this->addBio->TabIndex = 5;
			this->addBio->Text = L"Биологии";
			this->addBio->UseVisualStyleBackColor = true;
			this->addBio->Click += gcnew System::EventHandler(this, &MyForm::AddBio_Click);
			// 
			// addPhys
			// 
			this->addPhys->Location = System::Drawing::Point(261, 76);
			this->addPhys->Name = L"addPhys";
			this->addPhys->Size = System::Drawing::Size(85, 23);
			this->addPhys->TabIndex = 6;
			this->addPhys->Text = L"Физике";
			this->addPhys->UseVisualStyleBackColor = true;
			this->addPhys->Click += gcnew System::EventHandler(this, &MyForm::AddPhys_Click);
			// 
			// addChem
			// 
			this->addChem->Location = System::Drawing::Point(352, 76);
			this->addChem->Name = L"addChem";
			this->addChem->Size = System::Drawing::Size(85, 23);
			this->addChem->TabIndex = 7;
			this->addChem->Text = L"Химии";
			this->addChem->UseVisualStyleBackColor = true;
			this->addChem->Click += gcnew System::EventHandler(this, &MyForm::AddChem_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Добавить новый вопрос:";
			// 
			// questionsCount
			// 
			this->questionsCount->Location = System::Drawing::Point(317, 164);
			this->questionsCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->questionsCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->questionsCount->Name = L"questionsCount";
			this->questionsCount->Size = System::Drawing::Size(120, 20);
			this->questionsCount->TabIndex = 9;
			this->questionsCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Количество выводимых вопросов:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(203, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Генерация вопросов";
			// 
			// examTickets
			// 
			this->examTickets->AllowUserToAddRows = false;
			this->examTickets->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->examTickets->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->examTickets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->questions });
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->examTickets->DefaultCellStyle = dataGridViewCellStyle5;
			this->examTickets->Location = System::Drawing::Point(79, 306);
			this->examTickets->Name = L"examTickets";
			this->examTickets->Size = System::Drawing::Size(358, 178);
			this->examTickets->TabIndex = 12;
			// 
			// questions
			// 
			this->questions->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->questions->HeaderText = L"Вопросы";
			this->questions->Name = L"questions";
			this->questions->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(121, 214);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Экзаменуемый предмет:";
			// 
			// examList
			// 
			this->examList->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"Математика", L"Биология", L"Физика",
					L"Химия"
			});
			this->examList->FormattingEnabled = true;
			this->examList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Математика", L"Биология", L"Физика", L"Химия" });
			this->examList->Location = System::Drawing::Point(316, 211);
			this->examList->Name = L"examList";
			this->examList->Size = System::Drawing::Size(121, 21);
			this->examList->TabIndex = 14;
			// 
			// generateTicket
			// 
			this->generateTicket->Location = System::Drawing::Point(183, 251);
			this->generateTicket->Name = L"generateTicket";
			this->generateTicket->Size = System::Drawing::Size(163, 23);
			this->generateTicket->TabIndex = 15;
			this->generateTicket->Text = L"Сгенерировать вопросы";
			this->generateTicket->UseVisualStyleBackColor = true;
			this->generateTicket->Click += gcnew System::EventHandler(this, &MyForm::GenerateTicket_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 519);
			this->Controls->Add(this->generateTicket);
			this->Controls->Add(this->examList);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->examTickets);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->questionsCount);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->addChem);
			this->Controls->Add(this->addPhys);
			this->Controls->Add(this->addBio);
			this->Controls->Add(this->addMath);
			this->Controls->Add(this->questionEdit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->questionsCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->examTickets))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void getTopics() {
			// здесь нужно записать считывание вопросов с файла
		}
		void saveTopics() {
			// здесь нужно записать запись вопросов в файлы
		}
		void genTickets(int count, std::vector <std::string> tickets) {
			srand(time(NULL));
			std::vector <int> ticketsNums;
			while (ticketsNums.size() != count) {
				int idx = rand() % tickets.size();
				if (std::find(ticketsNums.begin(), ticketsNums.end(), idx) == ticketsNums.end()) {
					ticketsNums.push_back(idx);
				}
			}
			std::vector <std::string> result;
			for (int i = 0; i < ticketsNums.size(); i++) {
				int index = ticketsNums.at(i);
				result.push_back(tickets.at(index));
			}
			for (int i = 0; i < result.size(); i++) {
				String^ question = gcnew System::String(result.at(i).c_str());
				examTickets->Rows->Add(question);
				examTickets->Rows[i]->HeaderCell->Value = i + 1;
			}
		}
	private: System::Void GenerateTicket_Click(System::Object^ sender, System::EventArgs^ e) {
		examTickets->Rows->Clear();
		int qCount = Convert::ToInt32(questionsCount->Value);
		// 0 - математика
		switch (examList->SelectedIndex) {
				// 0 - математика
			case 0: {
				genTickets(qCount, questionsMath);
				break;
			}
					// 1 - биология
			case 1: {
				genTickets(qCount, questionsBio);
				break;
			}
					// 2 - физика
			case 2: {
				genTickets(qCount, questionsPhys);
				break;
			}
					// 3 - химия
			case 3: {
				genTickets(qCount, questionsChem);
				break;
			}
		}
	}
	void addQuestion(std::string questionType) {
		msclr::interop::marshal_context context;
		std::string question = context.marshal_as<std::string>(questionEdit->Text);
		questionEdit->Text = "";
		if (questionType == "Math") {
			questionsMath.push_back(question);
		}
		if (questionType == "Bio") {
			questionsBio.push_back(question);
		}
		if (questionType == "Phys") {
			questionsPhys.push_back(question);
		}
		if (questionType == "Chem") {
			questionsChem.push_back(question);
		}
		// здесь нужно запустить перезапись новых вопросов в файл saveTopics();
	}
	private: System::Void AddMath_Click(System::Object^ sender, System::EventArgs^ e) {
		addQuestion("Math");
	}
	private: System::Void AddBio_Click(System::Object^ sender, System::EventArgs^ e) {
		addQuestion("Bio");
	}
	private: System::Void AddPhys_Click(System::Object^ sender, System::EventArgs^ e) {
		addQuestion("Phys");
	}
	private: System::Void AddChem_Click(System::Object^ sender, System::EventArgs^ e) {
		addQuestion("Chem");
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// здесь нужно запустить функцию считывания данных с файлов getTopics();
	}
};
}
