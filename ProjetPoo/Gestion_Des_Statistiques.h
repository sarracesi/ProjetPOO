#pragma once

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gestion_Des_Statistiques
	/// </summary>
	public ref class Gestion_Des_Statistiques : public System::Windows::Forms::Form
	{
	public:
		Gestion_Des_Statistiques(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Gestion_Des_Statistiques()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ListView^ listView3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::Button^ button3;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewGroup^ listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^ listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^ listViewGroup3 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_Des_Statistiques::typeid));
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			listViewGroup1->Header = L"ListViewGroup";
			listViewGroup1->Name = L"listViewGroup1";
			this->listView3->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) { listViewGroup1 });
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(473, 43);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(149, 232);
			this->listView3->TabIndex = 60;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Id Article";
			this->columnHeader1->Width = 53;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombre De Vente";
			this->columnHeader2->Width = 91;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(124, 43);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 61;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(124, 98);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 62;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(485, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 63;
			this->label1->Text = L"Articles moins vendue";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(643, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 64;
			this->label2->Text = L"Articles plus vendue";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(785, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 13);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Articles sous seuil de reap";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(64, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 66;
			this->label4->Text = L"Achat Client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(333, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 20);
			this->label5->TabIndex = 67;
			this->label5->Text = L"Chiffre d\'affaire";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(846, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 68;
			this->button2->Text = L"Quitter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Gestion_Des_Statistiques::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 141);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(190, 20);
			this->textBox5->TabIndex = 69;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(64, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Panier Moyen";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(64, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 71;
			this->label7->Text = L"Valeur Stock";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 20);
			this->textBox1->TabIndex = 72;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 193);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 20);
			this->textBox2->TabIndex = 73;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 40);
			this->button1->TabIndex = 74;
			this->button1->Text = L"Rechercher";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listView4
			// 
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader3, this->columnHeader4 });
			listViewGroup2->Header = L"ListViewGroup";
			listViewGroup2->Name = L"listViewGroup1";
			this->listView4->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) { listViewGroup2 });
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(628, 43);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(149, 232);
			this->listView4->TabIndex = 75;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Id Article";
			this->columnHeader3->Width = 53;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Nombre De Vente";
			this->columnHeader4->Width = 91;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader5, this->columnHeader6 });
			listViewGroup3->Header = L"ListViewGroup";
			listViewGroup3->Name = L"listViewGroup1";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) { listViewGroup3 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(783, 43);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(149, 232);
			this->listView1->TabIndex = 76;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Gestion_Des_Statistiques::listView1_SelectedIndexChanged_1);
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Id Article";
			this->columnHeader5->Width = 53;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Nombre De Vente";
			this->columnHeader6->Width = 91;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(271, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 40);
			this->button3->TabIndex = 77;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Gestion_Des_Statistiques::button3_Click);
			// 
			// Gestion_Des_Statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 320);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listView3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Gestion_Des_Statistiques";
			this->Text = L"Gestion_Des_Statistiques";
			this->Load += gcnew System::EventHandler(this, &Gestion_Des_Statistiques::Gestion_Des_Statistiques_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Gestion_Des_Statistiques_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listView1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox5->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
