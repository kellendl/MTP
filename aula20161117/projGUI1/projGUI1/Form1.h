#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn;
	protected: 

	private: System::Windows::Forms::TextBox^  textentrada;
	private: System::Windows::Forms::CheckBox^  chklocal;

	protected: 

	protected: 



	protected: 


	protected: 


	private: System::Windows::Forms::Label^  lblmensagem;
	private: System::Windows::Forms::ComboBox^  cmbselecao;

	private: System::Windows::Forms::RadioButton^  rdbOpcao1;









	private: System::Windows::Forms::GroupBox^  rbtopcao;
	private: System::Windows::Forms::RadioButton^  rdbOpcao2;


	private: System::Windows::Forms::PictureBox^  picture1;
	private: System::Windows::Forms::CheckBox^  chktempo;
	private: System::Windows::Forms::RadioButton^  rdbOpcao3;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btn = (gcnew System::Windows::Forms::Button());
			this->textentrada = (gcnew System::Windows::Forms::TextBox());
			this->chklocal = (gcnew System::Windows::Forms::CheckBox());
			this->lblmensagem = (gcnew System::Windows::Forms::Label());
			this->cmbselecao = (gcnew System::Windows::Forms::ComboBox());
			this->rdbOpcao1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtopcao = (gcnew System::Windows::Forms::GroupBox());
			this->rdbOpcao3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdbOpcao2 = (gcnew System::Windows::Forms::RadioButton());
			this->picture1 = (gcnew System::Windows::Forms::PictureBox());
			this->chktempo = (gcnew System::Windows::Forms::CheckBox());
			this->rbtopcao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picture1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(31, 389);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(75, 23);
			this->btn->TabIndex = 0;
			this->btn->Text = L"ok";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// textentrada
			// 
			this->textentrada->Location = System::Drawing::Point(26, 117);
			this->textentrada->Name = L"textentrada";
			this->textentrada->Size = System::Drawing::Size(100, 20);
			this->textentrada->TabIndex = 1;
			this->textentrada->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// chklocal
			// 
			this->chklocal->Location = System::Drawing::Point(26, 160);
			this->chklocal->Name = L"chklocal";
			this->chklocal->Size = System::Drawing::Size(113, 17);
			this->chklocal->TabIndex = 2;
			this->chklocal->Text = L"local";
			this->chklocal->UseVisualStyleBackColor = true;
			this->chklocal->CheckedChanged += gcnew System::EventHandler(this, &Form1::chknome_CheckedChanged);
			// 
			// lblmensagem
			// 
			this->lblmensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblmensagem->Location = System::Drawing::Point(28, 39);
			this->lblmensagem->Name = L"lblmensagem";
			this->lblmensagem->Size = System::Drawing::Size(610, 31);
			this->lblmensagem->TabIndex = 3;
			this->lblmensagem->Text = L" mensagem";
			this->lblmensagem->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->lblmensagem->Click += gcnew System::EventHandler(this, &Form1::lblmensagem_Click);
			// 
			// cmbselecao
			// 
			this->cmbselecao->FormattingEnabled = true;
			this->cmbselecao->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->cmbselecao->Location = System::Drawing::Point(475, 389);
			this->cmbselecao->Name = L"cmbselecao";
			this->cmbselecao->Size = System::Drawing::Size(163, 21);
			this->cmbselecao->TabIndex = 4;
			this->cmbselecao->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::chbescolha_SelectedIndexChanged);
			// 
			// rdbOpcao1
			// 
			this->rdbOpcao1->AutoSize = true;
			this->rdbOpcao1->Location = System::Drawing::Point(21, 32);
			this->rdbOpcao1->Name = L"rdbOpcao1";
			this->rdbOpcao1->Size = System::Drawing::Size(80, 17);
			this->rdbOpcao1->TabIndex = 5;
			this->rdbOpcao1->Text = L"Opcao Azul";
			this->rdbOpcao1->UseVisualStyleBackColor = true;
			// 
			// rbtopcao
			// 
			this->rbtopcao->Controls->Add(this->rdbOpcao3);
			this->rbtopcao->Controls->Add(this->rdbOpcao2);
			this->rbtopcao->Controls->Add(this->rdbOpcao1);
			this->rbtopcao->Location = System::Drawing::Point(31, 230);
			this->rbtopcao->Name = L"rbtopcao";
			this->rbtopcao->Size = System::Drawing::Size(215, 136);
			this->rbtopcao->TabIndex = 6;
			this->rbtopcao->TabStop = false;
			this->rbtopcao->Text = L"TIPO";
			// 
			// rdbOpcao3
			// 
			this->rdbOpcao3->AutoSize = true;
			this->rdbOpcao3->Location = System::Drawing::Point(23, 113);
			this->rdbOpcao3->Name = L"rdbOpcao3";
			this->rdbOpcao3->Size = System::Drawing::Size(88, 17);
			this->rdbOpcao3->TabIndex = 7;
			this->rdbOpcao3->Text = L"Opcao Verde";
			this->rdbOpcao3->UseVisualStyleBackColor = true;
			// 
			// rdbOpcao2
			// 
			this->rdbOpcao2->AutoSize = true;
			this->rdbOpcao2->Checked = true;
			this->rdbOpcao2->Location = System::Drawing::Point(21, 68);
			this->rdbOpcao2->Name = L"rdbOpcao2";
			this->rdbOpcao2->Size = System::Drawing::Size(104, 17);
			this->rdbOpcao2->TabIndex = 6;
			this->rdbOpcao2->TabStop = true;
			this->rdbOpcao2->Text = L"Opcao Vermelho";
			this->rdbOpcao2->UseVisualStyleBackColor = true;
			// 
			// picture1
			// 
			this->picture1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picture1.Image")));
			this->picture1->Location = System::Drawing::Point(262, 107);
			this->picture1->Name = L"picture1";
			this->picture1->Size = System::Drawing::Size(363, 253);
			this->picture1->TabIndex = 7;
			this->picture1->TabStop = false;
			this->picture1->Click += gcnew System::EventHandler(this, &Form1::picture1_Click);
			// 
			// chktempo
			// 
			this->chktempo->AutoSize = true;
			this->chktempo->Location = System::Drawing::Point(26, 194);
			this->chktempo->Name = L"chktempo";
			this->chktempo->Size = System::Drawing::Size(59, 17);
			this->chktempo->TabIndex = 8;
			this->chktempo->Text = L"Tempo";
			this->chktempo->UseVisualStyleBackColor = true;
			this->chktempo->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 435);
			this->Controls->Add(this->chktempo);
			this->Controls->Add(this->picture1);
			this->Controls->Add(this->rbtopcao);
			this->Controls->Add(this->cmbselecao);
			this->Controls->Add(this->lblmensagem);
			this->Controls->Add(this->chklocal);
			this->Controls->Add(this->textentrada);
			this->Controls->Add(this->btn);
			this->Name = L"Form1";
			this->Text = L"Meu primeiro programa";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->rbtopcao->ResumeLayout(false);
			this->rbtopcao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picture1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void chbescolha_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lblmensagem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblmensagem-> Text = "";
			 if(chklocal -> Checked)
				 lblmensagem-> Text = lblmensagem->Text + "Praia,";
			if(chktempo -> Checked)
				lblmensagem-> Text = lblmensagem->Text + "Tempo, ";
			lblmensagem -> Text = lblmensagem->Text + "viagem" +
				System::Convert::ToString(cmbselecao-> SelectedItem) + ", ";
			lblmensagem-> Text = lblmensagem->Text + textentrada->Text;
			if(rdbOpcao1 -> Checked)
				lblmensagem->ForeColor = System::Drawing::Color::Blue;
			if(rdbOpcao2 -> Checked)
				lblmensagem->ForeColor = System::Drawing::Color::Red;
			if(rdbOpcao3 -> Checked)
				lblmensagem->ForeColor = System::Drawing::Color::Green;
				
				}


private: System::Void chknome_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void picture1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 // valorespadrao
			 cmbselecao->SelectedIndex = 0;

		 }
};
}

