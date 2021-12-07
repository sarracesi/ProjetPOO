#pragma once

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gestion_De_Client
	/// </summary>
	public ref class Gestion_De_Client : public System::Windows::Forms::Form
	{
	public:
		Gestion_De_Client(void)
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
		~Gestion_De_Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;










	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader0;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox8;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnafficherc;
	private: System::Windows::Forms::Button^ btnquitterc;


	private: System::Windows::Forms::Button^ btncréerc;

	private: System::Windows::Forms::Button^ btnmodifierc;
	private: System::Windows::Forms::Button^ btnsupprimerc;


	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Button^ btnclearc;
	private: System::Windows::Forms::Button^ btnclear2c;








	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_De_Client::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader0 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnafficherc = (gcnew System::Windows::Forms::Button());
			this->btnquitterc = (gcnew System::Windows::Forms::Button());
			this->btncréerc = (gcnew System::Windows::Forms::Button());
			this->btnmodifierc = (gcnew System::Windows::Forms::Button());
			this->btnsupprimerc = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnclearc = (gcnew System::Windows::Forms::Button());
			this->btnclear2c = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom Client";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 74);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prénom Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 114);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Date de naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(82, 194);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Adresse livraison";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(82, 234);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Adresse facturation";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(82, 154);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Date de premier achat";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(274, 29);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(474, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gestion_De_Client::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(274, 69);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(474, 26);
			this->textBox2->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(274, 189);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(474, 26);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gestion_De_Client::btnadrlivc_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(274, 229);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(474, 26);
			this->textBox6->TabIndex = 11;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader0, this->columnHeader1,
					this->columnHeader2, this->columnHeader4, this->columnHeader3
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(18, 269);
			this->listView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(772, 212);
			this->listView1->TabIndex = 12;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader0
			// 
			this->columnHeader0->Text = L"Id Client";
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nom Client";
			this->columnHeader1->Width = 94;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Prénom Client";
			this->columnHeader2->Width = 114;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Date Naissance";
			this->columnHeader4->Width = 118;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Date 1er Achat";
			this->columnHeader3->Width = 128;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(974, 340);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(259, 26);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(974, 300);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(259, 26);
			this->textBox8->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(834, 345);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Prénom Client";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(834, 305);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Nom Client";
			// 
			// btnafficherc
			// 
			this->btnafficherc->Location = System::Drawing::Point(974, 380);
			this->btnafficherc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnafficherc->Name = L"btnafficherc";
			this->btnafficherc->Size = System::Drawing::Size(112, 35);
			this->btnafficherc->TabIndex = 17;
			this->btnafficherc->Text = L"Afficher";
			this->btnafficherc->UseVisualStyleBackColor = true;
			// 
			// btnquitterc
			// 
			this->btnquitterc->Location = System::Drawing::Point(1266, 437);
			this->btnquitterc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnquitterc->Name = L"btnquitterc";
			this->btnquitterc->Size = System::Drawing::Size(112, 35);
			this->btnquitterc->TabIndex = 18;
			this->btnquitterc->Text = L"Quitter";
			this->btnquitterc->UseVisualStyleBackColor = true;
			this->btnquitterc->Click += gcnew System::EventHandler(this, &Gestion_De_Client::button2_Click);
			// 
			// btncréerc
			// 
			this->btncréerc->Location = System::Drawing::Point(940, 69);
			this->btncréerc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btncréerc->Name = L"btncréerc";
			this->btncréerc->Size = System::Drawing::Size(135, 60);
			this->btncréerc->TabIndex = 19;
			this->btncréerc->Text = L"Créer Client";
			this->btncréerc->UseVisualStyleBackColor = true;
			// 
			// btnmodifierc
			// 
			this->btnmodifierc->Location = System::Drawing::Point(1202, 69);
			this->btnmodifierc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnmodifierc->Name = L"btnmodifierc";
			this->btnmodifierc->Size = System::Drawing::Size(135, 60);
			this->btnmodifierc->TabIndex = 20;
			this->btnmodifierc->Text = L"Modifier Client";
			this->btnmodifierc->UseVisualStyleBackColor = true;
			this->btnmodifierc->Click += gcnew System::EventHandler(this, &Gestion_De_Client::button4_Click);
			// 
			// btnsupprimerc
			// 
			this->btnsupprimerc->Location = System::Drawing::Point(940, 174);
			this->btnsupprimerc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnsupprimerc->Name = L"btnsupprimerc";
			this->btnsupprimerc->Size = System::Drawing::Size(135, 60);
			this->btnsupprimerc->TabIndex = 21;
			this->btnsupprimerc->Text = L"Supprimer Client";
			this->btnsupprimerc->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(274, 109);
			this->maskedTextBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(148, 26);
			this->maskedTextBox1->TabIndex = 22;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Gestion_De_Client::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(274, 149);
			this->maskedTextBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->maskedTextBox2->Mask = L"00/00/0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(148, 26);
			this->maskedTextBox2->TabIndex = 23;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// btnclearc
			// 
			this->btnclearc->Location = System::Drawing::Point(1202, 174);
			this->btnclearc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnclearc->Name = L"btnclearc";
			this->btnclearc->Size = System::Drawing::Size(135, 60);
			this->btnclearc->TabIndex = 24;
			this->btnclearc->Text = L"Clear";
			this->btnclearc->UseVisualStyleBackColor = true;
			this->btnclearc->Click += gcnew System::EventHandler(this, &Gestion_De_Client::button6_Click);
			// 
			// btnclear2c
			// 
			this->btnclear2c->Location = System::Drawing::Point(1122, 380);
			this->btnclear2c->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnclear2c->Name = L"btnclear2c";
			this->btnclear2c->Size = System::Drawing::Size(112, 35);
			this->btnclear2c->TabIndex = 50;
			this->btnclear2c->Text = L"Clear";
			this->btnclear2c->UseVisualStyleBackColor = true;
			this->btnclear2c->Click += gcnew System::EventHandler(this, &Gestion_De_Client::button7_Click);
			// 
			// Gestion_De_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1396, 491);
			this->Controls->Add(this->btnclear2c);
			this->Controls->Add(this->btnclearc);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->btnsupprimerc);
			this->Controls->Add(this->btnmodifierc);
			this->Controls->Add(this->btncréerc);
			this->Controls->Add(this->btnquitterc);
			this->Controls->Add(this->btnafficherc);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Gestion_De_Client";
			this->Text = L"Gestion_De_Client";
			this->Load += gcnew System::EventHandler(this, &Gestion_De_Client::Gestion_De_Client_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
		this->textBox2->Clear();
		this->maskedTextBox1->Clear();
		this->maskedTextBox2->Clear();
		this->textBox5->Clear();
		this->textBox6->Clear();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox7->Clear();
		this->textBox8->Clear();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {

	
}
private: System::Void Gestion_De_Client_Load(System::Object^ sender, System::EventArgs^ e) {

	

}
private: System::Void btnadrlivc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}