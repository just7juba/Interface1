#pragma once

namespace Interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Client::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button1->Location = System::Drawing::Point(300, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->Location = System::Drawing::Point(36, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button3->Location = System::Drawing::Point(36, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Client::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button4->Location = System::Drawing::Point(300, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Afficher";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Client::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button5->Location = System::Drawing::Point(36, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Quitter ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Client::button5_Click);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(418, 405);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Client";
			this->Text = L"Client";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("     vous ne pouvez pas Supprimer pour le moemnt      ", "   Erreur ",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("     vous ne pouvez pas Modifier pour le moemnt      ", "   Erreur ",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("     vous ne pouvez pas Afficher pour le moemnt      ", "   Erreur ",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("     vous ne pouvez pas Ajouter pour le moemnt      ", "   Erreur ",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close(); 
}
};
}
