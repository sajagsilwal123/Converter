#pragma once


namespace Project3 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cverter
	/// </summary>
	public ref class Cverter : public System::Windows::Forms::Form
	{
	public:
		Cverter(void)
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
		~Cverter()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:























	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  labelWeight;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBoxInn;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::RadioButton^  radioPoundO;
	private: System::Windows::Forms::RadioButton^  radioTonneO;
	private: System::Windows::Forms::RadioButton^  radioQuintalO;
	private: System::Windows::Forms::RadioButton^  radioKgO;
	private: System::Windows::Forms::RadioButton^  radioGramO;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::RadioButton^  radioPound;
	private: System::Windows::Forms::RadioButton^  radioTonne;
	private: System::Windows::Forms::RadioButton^  radioQuintal;
	private: System::Windows::Forms::RadioButton^  radioKg;
	private: System::Windows::Forms::RadioButton^  radiogram;
	private: System::Windows::Forms::Button^  buttonReset;
	private: System::Windows::Forms::Button^  buttonConvert;
	private: System::Windows::Forms::TabPage^  Length_tab;

	private: System::Windows::Forms::Label^  labelEnter;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelOut;
	private: System::Windows::Forms::TextBox^  textBoxIn;
	private: System::Windows::Forms::TextBox^  textBoxOut;






	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  inchOut;
	private: System::Windows::Forms::RadioButton^  footOut;
	private: System::Windows::Forms::RadioButton^  centimeterOut;
	private: System::Windows::Forms::RadioButton^  KilometreOut;
	private: System::Windows::Forms::RadioButton^  metreOut;

	private: System::Windows::Forms::Button^  resetButton;
	private: System::Windows::Forms::Button^  convertButton;
	private: System::Windows::Forms::TabControl^  tabControl1;

	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelTime;


	private: System::Windows::Forms::TextBox^  textBoxTO;

	private: System::Windows::Forms::TextBox^  textBoxTime;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::RadioButton^  yearO;

private: System::Windows::Forms::RadioButton^  monthO;

private: System::Windows::Forms::RadioButton^  secondO;

private: System::Windows::Forms::RadioButton^  weekO;

private: System::Windows::Forms::RadioButton^  hourO;

private: System::Windows::Forms::RadioButton^  dayO;

	private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::RadioButton^  yearI;

private: System::Windows::Forms::RadioButton^  monthI;

private: System::Windows::Forms::RadioButton^  secondI;

private: System::Windows::Forms::RadioButton^  weekI;

private: System::Windows::Forms::RadioButton^  hourI;

private: System::Windows::Forms::RadioButton^  dayI;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::RadioButton^  minuteO;
private: System::Windows::Forms::RadioButton^  minuteI;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Label^  labelCurrency;

private: System::Windows::Forms::TextBox^  textBoxCIn;
private: System::Windows::Forms::TextBox^  textBoxCOut;


private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::RadioButton^  inrIn;

private: System::Windows::Forms::RadioButton^  yuanIn;

private: System::Windows::Forms::RadioButton^  euroIn;

private: System::Windows::Forms::RadioButton^  poundIn;

private: System::Windows::Forms::RadioButton^  dollarIn;


private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::RadioButton^  inrOut;


private: System::Windows::Forms::RadioButton^  yuanOut;

private: System::Windows::Forms::RadioButton^  euroOut;

private: System::Windows::Forms::RadioButton^  poundOut;

private: System::Windows::Forms::RadioButton^  dollarOut;
private: System::Windows::Forms::RadioButton^  nrIn;
private: System::Windows::Forms::RadioButton^  nrOut;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  labelArea;

private: System::Windows::Forms::TextBox^  textBoxAreaIn;
private: System::Windows::Forms::TextBox^  textBoxAreaOut;









private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::RadioButton^  hectareIn;

private: System::Windows::Forms::RadioButton^  acreIn;

private: System::Windows::Forms::RadioButton^  sIIn;

private: System::Windows::Forms::RadioButton^  sfIn;

private: System::Windows::Forms::RadioButton^  scmIn;
private: System::Windows::Forms::RadioButton^  smInn;






private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::RadioButton^  hectareOut;

private: System::Windows::Forms::RadioButton^  acreOut;

private: System::Windows::Forms::RadioButton^  sIOut;

private: System::Windows::Forms::RadioButton^  sfOut;

private: System::Windows::Forms::RadioButton^  scmOut;

private: System::Windows::Forms::RadioButton^  smOut;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  labelVolume;

private: System::Windows::Forms::TextBox^  textBoxVolumeIn;
private: System::Windows::Forms::TextBox^  textBoxVolumeOut;




private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::RadioButton^  mltrIn;

private: System::Windows::Forms::RadioButton^  ltrIn;

private: System::Windows::Forms::RadioButton^  in3In;

private: System::Windows::Forms::RadioButton^  ft3In;

private: System::Windows::Forms::RadioButton^  cm3In;

private: System::Windows::Forms::RadioButton^  m3In;


private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::RadioButton^  mltrOut;

private: System::Windows::Forms::RadioButton^  ltrOut;

private: System::Windows::Forms::RadioButton^  in3Out;

private: System::Windows::Forms::RadioButton^  ft3Out;

private: System::Windows::Forms::RadioButton^  cm3Out;

private: System::Windows::Forms::RadioButton^  m3Out;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::RadioButton^  inchIn;
private: System::Windows::Forms::RadioButton^  footIn;
private: System::Windows::Forms::RadioButton^  centimetreIn;
private: System::Windows::Forms::RadioButton^  kilometreIn;
private: System::Windows::Forms::RadioButton^  metreIn;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  textBoxOout;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::PictureBox^  pictureBox6;

































































































	protected:













































	protected:


	protected:

	protected:

	protected:

	protected:

	protected:












































































	protected:













	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cverter::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelWeight = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxInn = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->radioPoundO = (gcnew System::Windows::Forms::RadioButton());
			this->radioTonneO = (gcnew System::Windows::Forms::RadioButton());
			this->radioQuintalO = (gcnew System::Windows::Forms::RadioButton());
			this->radioKgO = (gcnew System::Windows::Forms::RadioButton());
			this->radioGramO = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioPound = (gcnew System::Windows::Forms::RadioButton());
			this->radioTonne = (gcnew System::Windows::Forms::RadioButton());
			this->radioQuintal = (gcnew System::Windows::Forms::RadioButton());
			this->radioKg = (gcnew System::Windows::Forms::RadioButton());
			this->radiogram = (gcnew System::Windows::Forms::RadioButton());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonConvert = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxOout = (gcnew System::Windows::Forms::TextBox());
			this->Length_tab = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelEnter = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelOut = (gcnew System::Windows::Forms::Label());
			this->textBoxIn = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOut = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->inchIn = (gcnew System::Windows::Forms::RadioButton());
			this->footIn = (gcnew System::Windows::Forms::RadioButton());
			this->centimetreIn = (gcnew System::Windows::Forms::RadioButton());
			this->kilometreIn = (gcnew System::Windows::Forms::RadioButton());
			this->metreIn = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->inchOut = (gcnew System::Windows::Forms::RadioButton());
			this->footOut = (gcnew System::Windows::Forms::RadioButton());
			this->centimeterOut = (gcnew System::Windows::Forms::RadioButton());
			this->KilometreOut = (gcnew System::Windows::Forms::RadioButton());
			this->metreOut = (gcnew System::Windows::Forms::RadioButton());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->convertButton = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->textBoxTO = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->yearO = (gcnew System::Windows::Forms::RadioButton());
			this->monthO = (gcnew System::Windows::Forms::RadioButton());
			this->minuteO = (gcnew System::Windows::Forms::RadioButton());
			this->secondO = (gcnew System::Windows::Forms::RadioButton());
			this->weekO = (gcnew System::Windows::Forms::RadioButton());
			this->hourO = (gcnew System::Windows::Forms::RadioButton());
			this->dayO = (gcnew System::Windows::Forms::RadioButton());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->yearI = (gcnew System::Windows::Forms::RadioButton());
			this->monthI = (gcnew System::Windows::Forms::RadioButton());
			this->minuteI = (gcnew System::Windows::Forms::RadioButton());
			this->secondI = (gcnew System::Windows::Forms::RadioButton());
			this->weekI = (gcnew System::Windows::Forms::RadioButton());
			this->hourI = (gcnew System::Windows::Forms::RadioButton());
			this->dayI = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelCurrency = (gcnew System::Windows::Forms::Label());
			this->textBoxCIn = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCOut = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->nrOut = (gcnew System::Windows::Forms::RadioButton());
			this->inrOut = (gcnew System::Windows::Forms::RadioButton());
			this->yuanOut = (gcnew System::Windows::Forms::RadioButton());
			this->euroOut = (gcnew System::Windows::Forms::RadioButton());
			this->poundOut = (gcnew System::Windows::Forms::RadioButton());
			this->dollarOut = (gcnew System::Windows::Forms::RadioButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->nrIn = (gcnew System::Windows::Forms::RadioButton());
			this->inrIn = (gcnew System::Windows::Forms::RadioButton());
			this->yuanIn = (gcnew System::Windows::Forms::RadioButton());
			this->euroIn = (gcnew System::Windows::Forms::RadioButton());
			this->poundIn = (gcnew System::Windows::Forms::RadioButton());
			this->dollarIn = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelArea = (gcnew System::Windows::Forms::Label());
			this->textBoxAreaIn = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAreaOut = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->hectareOut = (gcnew System::Windows::Forms::RadioButton());
			this->acreOut = (gcnew System::Windows::Forms::RadioButton());
			this->sIOut = (gcnew System::Windows::Forms::RadioButton());
			this->sfOut = (gcnew System::Windows::Forms::RadioButton());
			this->scmOut = (gcnew System::Windows::Forms::RadioButton());
			this->smOut = (gcnew System::Windows::Forms::RadioButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->hectareIn = (gcnew System::Windows::Forms::RadioButton());
			this->acreIn = (gcnew System::Windows::Forms::RadioButton());
			this->sIIn = (gcnew System::Windows::Forms::RadioButton());
			this->sfIn = (gcnew System::Windows::Forms::RadioButton());
			this->scmIn = (gcnew System::Windows::Forms::RadioButton());
			this->smInn = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelVolume = (gcnew System::Windows::Forms::Label());
			this->textBoxVolumeIn = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVolumeOut = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->mltrOut = (gcnew System::Windows::Forms::RadioButton());
			this->ltrOut = (gcnew System::Windows::Forms::RadioButton());
			this->in3Out = (gcnew System::Windows::Forms::RadioButton());
			this->ft3Out = (gcnew System::Windows::Forms::RadioButton());
			this->cm3Out = (gcnew System::Windows::Forms::RadioButton());
			this->m3Out = (gcnew System::Windows::Forms::RadioButton());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->mltrIn = (gcnew System::Windows::Forms::RadioButton());
			this->ltrIn = (gcnew System::Windows::Forms::RadioButton());
			this->in3In = (gcnew System::Windows::Forms::RadioButton());
			this->ft3In = (gcnew System::Windows::Forms::RadioButton());
			this->cm3In = (gcnew System::Windows::Forms::RadioButton());
			this->m3In = (gcnew System::Windows::Forms::RadioButton());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tabPage2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Length_tab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->labelWeight);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBoxInn);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->Controls->Add(this->buttonReset);
			this->tabPage2->Controls->Add(this->buttonConvert);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->textBoxOout);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(545, 644);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Weight";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Chocolate;
			this->label14->Location = System::Drawing::Point(355, 439);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 32);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Output";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Chocolate;
			this->label5->Location = System::Drawing::Point(100, 439);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 32);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Input";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelWeight
			// 
			this->labelWeight->AutoSize = true;
			this->labelWeight->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelWeight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelWeight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeight->ForeColor = System::Drawing::Color::Black;
			this->labelWeight->Location = System::Drawing::Point(342, 487);
			this->labelWeight->Name = L"labelWeight";
			this->labelWeight->Size = System::Drawing::Size(0, 32);
			this->labelWeight->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(74, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(409, 54);
			this->label3->TabIndex = 7;
			this->label3->Text = L"WEIGHT CONVERTER";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBoxInn
			// 
			this->textBoxInn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxInn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxInn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxInn->Location = System::Drawing::Point(21, 487);
			this->textBoxInn->Name = L"textBoxInn";
			this->textBoxInn->Size = System::Drawing::Size(244, 32);
			this->textBoxInn->TabIndex = 6;
			this->textBoxInn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->radioPoundO);
			this->panel4->Controls->Add(this->radioTonneO);
			this->panel4->Controls->Add(this->radioQuintalO);
			this->panel4->Controls->Add(this->radioKgO);
			this->panel4->Controls->Add(this->radioGramO);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(315, 260);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(197, 174);
			this->panel4->TabIndex = 5;
			// 
			// radioPoundO
			// 
			this->radioPoundO->AutoSize = true;
			this->radioPoundO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioPoundO->ForeColor = System::Drawing::Color::Black;
			this->radioPoundO->Location = System::Drawing::Point(20, 138);
			this->radioPoundO->Name = L"radioPoundO";
			this->radioPoundO->Size = System::Drawing::Size(96, 32);
			this->radioPoundO->TabIndex = 0;
			this->radioPoundO->TabStop = true;
			this->radioPoundO->Text = L"Pound";
			this->radioPoundO->UseVisualStyleBackColor = true;
			// 
			// radioTonneO
			// 
			this->radioTonneO->AutoSize = true;
			this->radioTonneO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioTonneO->ForeColor = System::Drawing::Color::Black;
			this->radioTonneO->Location = System::Drawing::Point(20, 107);
			this->radioTonneO->Name = L"radioTonneO";
			this->radioTonneO->Size = System::Drawing::Size(93, 32);
			this->radioTonneO->TabIndex = 0;
			this->radioTonneO->TabStop = true;
			this->radioTonneO->Text = L"Tonne";
			this->radioTonneO->UseVisualStyleBackColor = true;
			// 
			// radioQuintalO
			// 
			this->radioQuintalO->AutoSize = true;
			this->radioQuintalO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioQuintalO->ForeColor = System::Drawing::Color::Black;
			this->radioQuintalO->Location = System::Drawing::Point(20, 74);
			this->radioQuintalO->Name = L"radioQuintalO";
			this->radioQuintalO->Size = System::Drawing::Size(103, 32);
			this->radioQuintalO->TabIndex = 0;
			this->radioQuintalO->TabStop = true;
			this->radioQuintalO->Text = L"Quintal";
			this->radioQuintalO->UseVisualStyleBackColor = true;
			// 
			// radioKgO
			// 
			this->radioKgO->AutoSize = true;
			this->radioKgO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioKgO->ForeColor = System::Drawing::Color::Black;
			this->radioKgO->Location = System::Drawing::Point(20, 42);
			this->radioKgO->Name = L"radioKgO";
			this->radioKgO->Size = System::Drawing::Size(118, 32);
			this->radioKgO->TabIndex = 0;
			this->radioKgO->TabStop = true;
			this->radioKgO->Text = L"Kilogram";
			this->radioKgO->UseVisualStyleBackColor = true;
			// 
			// radioGramO
			// 
			this->radioGramO->AutoSize = true;
			this->radioGramO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioGramO->ForeColor = System::Drawing::Color::Black;
			this->radioGramO->Location = System::Drawing::Point(20, 12);
			this->radioGramO->Name = L"radioGramO";
			this->radioGramO->Size = System::Drawing::Size(86, 32);
			this->radioGramO->TabIndex = 0;
			this->radioGramO->TabStop = true;
			this->radioGramO->Text = L"Gram";
			this->radioGramO->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->radioPound);
			this->panel3->Controls->Add(this->radioTonne);
			this->panel3->Controls->Add(this->radioQuintal);
			this->panel3->Controls->Add(this->radioKg);
			this->panel3->Controls->Add(this->radiogram);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::SystemColors::Info;
			this->panel3->Location = System::Drawing::Point(35, 260);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(196, 174);
			this->panel3->TabIndex = 5;
			// 
			// radioPound
			// 
			this->radioPound->AutoSize = true;
			this->radioPound->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioPound->ForeColor = System::Drawing::Color::Black;
			this->radioPound->Location = System::Drawing::Point(20, 133);
			this->radioPound->Name = L"radioPound";
			this->radioPound->Size = System::Drawing::Size(96, 32);
			this->radioPound->TabIndex = 0;
			this->radioPound->TabStop = true;
			this->radioPound->Text = L"Pound";
			this->radioPound->UseVisualStyleBackColor = true;
			// 
			// radioTonne
			// 
			this->radioTonne->AutoSize = true;
			this->radioTonne->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioTonne->ForeColor = System::Drawing::Color::Black;
			this->radioTonne->Location = System::Drawing::Point(20, 102);
			this->radioTonne->Name = L"radioTonne";
			this->radioTonne->Size = System::Drawing::Size(93, 32);
			this->radioTonne->TabIndex = 0;
			this->radioTonne->TabStop = true;
			this->radioTonne->Text = L"Tonne";
			this->radioTonne->UseVisualStyleBackColor = true;
			// 
			// radioQuintal
			// 
			this->radioQuintal->AutoSize = true;
			this->radioQuintal->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioQuintal->ForeColor = System::Drawing::Color::Black;
			this->radioQuintal->Location = System::Drawing::Point(20, 72);
			this->radioQuintal->Name = L"radioQuintal";
			this->radioQuintal->Size = System::Drawing::Size(103, 32);
			this->radioQuintal->TabIndex = 0;
			this->radioQuintal->TabStop = true;
			this->radioQuintal->Text = L"Quintal";
			this->radioQuintal->UseVisualStyleBackColor = true;
			// 
			// radioKg
			// 
			this->radioKg->AutoSize = true;
			this->radioKg->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioKg->ForeColor = System::Drawing::Color::Black;
			this->radioKg->Location = System::Drawing::Point(20, 43);
			this->radioKg->Name = L"radioKg";
			this->radioKg->Size = System::Drawing::Size(118, 32);
			this->radioKg->TabIndex = 0;
			this->radioKg->TabStop = true;
			this->radioKg->Text = L"Kilogram";
			this->radioKg->UseVisualStyleBackColor = true;
			// 
			// radiogram
			// 
			this->radiogram->AutoSize = true;
			this->radiogram->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radiogram->ForeColor = System::Drawing::Color::Black;
			this->radiogram->Location = System::Drawing::Point(21, 14);
			this->radiogram->Name = L"radiogram";
			this->radiogram->Size = System::Drawing::Size(86, 32);
			this->radiogram->TabIndex = 0;
			this->radiogram->TabStop = true;
			this->radiogram->Text = L"Gram";
			this->radiogram->UseVisualStyleBackColor = true;
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::Transparent;
			this->buttonReset->FlatAppearance->BorderSize = 2;
			this->buttonReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReset->ForeColor = System::Drawing::Color::Navy;
			this->buttonReset->Location = System::Drawing::Point(330, 550);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(167, 80);
			this->buttonReset->TabIndex = 0;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &Cverter::buttonReset_Click);
			// 
			// buttonConvert
			// 
			this->buttonConvert->BackColor = System::Drawing::Color::Transparent;
			this->buttonConvert->FlatAppearance->BorderSize = 2;
			this->buttonConvert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConvert->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConvert->ForeColor = System::Drawing::Color::Indigo;
			this->buttonConvert->Location = System::Drawing::Point(55, 550);
			this->buttonConvert->Name = L"buttonConvert";
			this->buttonConvert->Size = System::Drawing::Size(167, 80);
			this->buttonConvert->TabIndex = 0;
			this->buttonConvert->Text = L"Convert";
			this->buttonConvert->UseVisualStyleBackColor = false;
			this->buttonConvert->Click += gcnew System::EventHandler(this, &Cverter::buttonConvert_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-3, -37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(545, 264);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// textBoxOout
			// 
			this->textBoxOout->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxOout->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxOout->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOout->Location = System::Drawing::Point(285, 487);
			this->textBoxOout->Name = L"textBoxOout";
			this->textBoxOout->Size = System::Drawing::Size(241, 32);
			this->textBoxOout->TabIndex = 6;
			// 
			// Length_tab
			// 
			this->Length_tab->BackColor = System::Drawing::Color::Transparent;
			this->Length_tab->Controls->Add(this->label1);
			this->Length_tab->Controls->Add(this->pictureBox2);
			this->Length_tab->Controls->Add(this->label16);
			this->Length_tab->Controls->Add(this->labelEnter);
			this->Length_tab->Controls->Add(this->label4);
			this->Length_tab->Controls->Add(this->label2);
			this->Length_tab->Controls->Add(this->labelOut);
			this->Length_tab->Controls->Add(this->textBoxIn);
			this->Length_tab->Controls->Add(this->textBoxOut);
			this->Length_tab->Controls->Add(this->panel2);
			this->Length_tab->Controls->Add(this->panel1);
			this->Length_tab->Controls->Add(this->resetButton);
			this->Length_tab->Controls->Add(this->convertButton);
			this->Length_tab->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Length_tab->Location = System::Drawing::Point(4, 37);
			this->Length_tab->Name = L"Length_tab";
			this->Length_tab->Padding = System::Windows::Forms::Padding(3);
			this->Length_tab->Size = System::Drawing::Size(545, 644);
			this->Length_tab->TabIndex = 0;
			this->Length_tab->Text = L"Length";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(73, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(408, 54);
			this->label1->TabIndex = 24;
			this->label1->Text = L"LENGTH CONVERTER";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(0, -30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(545, 264);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Chocolate;
			this->label16->Location = System::Drawing::Point(355, 441);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(93, 32);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Output";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelEnter
			// 
			this->labelEnter->AutoSize = true;
			this->labelEnter->BackColor = System::Drawing::Color::Transparent;
			this->labelEnter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEnter->ForeColor = System::Drawing::Color::Chocolate;
			this->labelEnter->Location = System::Drawing::Point(100, 441);
			this->labelEnter->Name = L"labelEnter";
			this->labelEnter->Size = System::Drawing::Size(73, 32);
			this->labelEnter->TabIndex = 21;
			this->labelEnter->Text = L"Input";
			this->labelEnter->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(329, 490);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 26);
			this->label4->TabIndex = 20;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 514);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 32);
			this->label2->TabIndex = 19;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelOut
			// 
			this->labelOut->AutoSize = true;
			this->labelOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelOut->Location = System::Drawing::Point(389, 514);
			this->labelOut->Name = L"labelOut";
			this->labelOut->Size = System::Drawing::Size(0, 32);
			this->labelOut->TabIndex = 18;
			this->labelOut->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// textBoxIn
			// 
			this->textBoxIn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxIn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIn->Location = System::Drawing::Point(21, 487);
			this->textBoxIn->Name = L"textBoxIn";
			this->textBoxIn->Size = System::Drawing::Size(244, 32);
			this->textBoxIn->TabIndex = 16;
			this->textBoxIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxIn->TextChanged += gcnew System::EventHandler(this, &Cverter::textBoxIn_TextChanged);
			// 
			// textBoxOut
			// 
			this->textBoxOut->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxOut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOut->Location = System::Drawing::Point(285, 487);
			this->textBoxOut->Name = L"textBoxOut";
			this->textBoxOut->Size = System::Drawing::Size(244, 32);
			this->textBoxOut->TabIndex = 17;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->inchIn);
			this->panel2->Controls->Add(this->footIn);
			this->panel2->Controls->Add(this->centimetreIn);
			this->panel2->Controls->Add(this->kilometreIn);
			this->panel2->Controls->Add(this->metreIn);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(35, 260);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(188, 173);
			this->panel2->TabIndex = 14;
			// 
			// inchIn
			// 
			this->inchIn->AutoSize = true;
			this->inchIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inchIn->ForeColor = System::Drawing::Color::Black;
			this->inchIn->Location = System::Drawing::Point(21, 134);
			this->inchIn->Name = L"inchIn";
			this->inchIn->Size = System::Drawing::Size(76, 32);
			this->inchIn->TabIndex = 0;
			this->inchIn->TabStop = true;
			this->inchIn->Text = L"Inch";
			this->inchIn->UseVisualStyleBackColor = true;
			// 
			// footIn
			// 
			this->footIn->AutoSize = true;
			this->footIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->footIn->ForeColor = System::Drawing::Color::Black;
			this->footIn->Location = System::Drawing::Point(21, 104);
			this->footIn->Name = L"footIn";
			this->footIn->Size = System::Drawing::Size(78, 32);
			this->footIn->TabIndex = 0;
			this->footIn->TabStop = true;
			this->footIn->Text = L"Foot";
			this->footIn->UseVisualStyleBackColor = true;
			// 
			// centimetreIn
			// 
			this->centimetreIn->AutoSize = true;
			this->centimetreIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->centimetreIn->ForeColor = System::Drawing::Color::Black;
			this->centimetreIn->Location = System::Drawing::Point(21, 74);
			this->centimetreIn->Name = L"centimetreIn";
			this->centimetreIn->Size = System::Drawing::Size(138, 32);
			this->centimetreIn->TabIndex = 0;
			this->centimetreIn->TabStop = true;
			this->centimetreIn->Text = L"Centimetre";
			this->centimetreIn->UseVisualStyleBackColor = true;
			// 
			// kilometreIn
			// 
			this->kilometreIn->AutoSize = true;
			this->kilometreIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kilometreIn->ForeColor = System::Drawing::Color::Black;
			this->kilometreIn->Location = System::Drawing::Point(21, 44);
			this->kilometreIn->Name = L"kilometreIn";
			this->kilometreIn->Size = System::Drawing::Size(125, 32);
			this->kilometreIn->TabIndex = 0;
			this->kilometreIn->TabStop = true;
			this->kilometreIn->Text = L"Kilometre";
			this->kilometreIn->UseVisualStyleBackColor = true;
			// 
			// metreIn
			// 
			this->metreIn->AutoSize = true;
			this->metreIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->metreIn->ForeColor = System::Drawing::Color::Black;
			this->metreIn->Location = System::Drawing::Point(21, 14);
			this->metreIn->Name = L"metreIn";
			this->metreIn->Size = System::Drawing::Size(91, 32);
			this->metreIn->TabIndex = 0;
			this->metreIn->TabStop = true;
			this->metreIn->Text = L"Metre";
			this->metreIn->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->inchOut);
			this->panel1->Controls->Add(this->footOut);
			this->panel1->Controls->Add(this->centimeterOut);
			this->panel1->Controls->Add(this->KilometreOut);
			this->panel1->Controls->Add(this->metreOut);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(315, 260);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(190, 173);
			this->panel1->TabIndex = 15;
			// 
			// inchOut
			// 
			this->inchOut->AutoSize = true;
			this->inchOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inchOut->ForeColor = System::Drawing::Color::Black;
			this->inchOut->Location = System::Drawing::Point(21, 134);
			this->inchOut->Name = L"inchOut";
			this->inchOut->Size = System::Drawing::Size(76, 32);
			this->inchOut->TabIndex = 0;
			this->inchOut->TabStop = true;
			this->inchOut->Text = L"Inch";
			this->inchOut->UseVisualStyleBackColor = true;
			// 
			// footOut
			// 
			this->footOut->AutoSize = true;
			this->footOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->footOut->ForeColor = System::Drawing::Color::Black;
			this->footOut->Location = System::Drawing::Point(21, 104);
			this->footOut->Name = L"footOut";
			this->footOut->Size = System::Drawing::Size(78, 32);
			this->footOut->TabIndex = 0;
			this->footOut->TabStop = true;
			this->footOut->Text = L"Foot";
			this->footOut->UseVisualStyleBackColor = true;
			// 
			// centimeterOut
			// 
			this->centimeterOut->AutoSize = true;
			this->centimeterOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->centimeterOut->ForeColor = System::Drawing::Color::Black;
			this->centimeterOut->Location = System::Drawing::Point(21, 74);
			this->centimeterOut->Name = L"centimeterOut";
			this->centimeterOut->Size = System::Drawing::Size(138, 32);
			this->centimeterOut->TabIndex = 0;
			this->centimeterOut->TabStop = true;
			this->centimeterOut->Text = L"Centimetre";
			this->centimeterOut->UseVisualStyleBackColor = true;
			// 
			// KilometreOut
			// 
			this->KilometreOut->AutoSize = true;
			this->KilometreOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KilometreOut->ForeColor = System::Drawing::Color::Black;
			this->KilometreOut->Location = System::Drawing::Point(21, 44);
			this->KilometreOut->Name = L"KilometreOut";
			this->KilometreOut->Size = System::Drawing::Size(125, 32);
			this->KilometreOut->TabIndex = 0;
			this->KilometreOut->TabStop = true;
			this->KilometreOut->Text = L"Kilometre";
			this->KilometreOut->UseVisualStyleBackColor = true;
			// 
			// metreOut
			// 
			this->metreOut->AutoSize = true;
			this->metreOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->metreOut->ForeColor = System::Drawing::Color::Black;
			this->metreOut->Location = System::Drawing::Point(21, 14);
			this->metreOut->Name = L"metreOut";
			this->metreOut->Size = System::Drawing::Size(91, 32);
			this->metreOut->TabIndex = 0;
			this->metreOut->TabStop = true;
			this->metreOut->Text = L"Metre";
			this->metreOut->UseVisualStyleBackColor = true;
			// 
			// resetButton
			// 
			this->resetButton->BackColor = System::Drawing::Color::Transparent;
			this->resetButton->FlatAppearance->BorderSize = 2;
			this->resetButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resetButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetButton->ForeColor = System::Drawing::Color::Navy;
			this->resetButton->Location = System::Drawing::Point(330, 550);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(167, 80);
			this->resetButton->TabIndex = 12;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = false;
			this->resetButton->Click += gcnew System::EventHandler(this, &Cverter::resetButton_Click);
			// 
			// convertButton
			// 
			this->convertButton->BackColor = System::Drawing::Color::Transparent;
			this->convertButton->FlatAppearance->BorderSize = 2;
			this->convertButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->convertButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convertButton->ForeColor = System::Drawing::Color::Indigo;
			this->convertButton->Location = System::Drawing::Point(55, 550);
			this->convertButton->Name = L"convertButton";
			this->convertButton->Size = System::Drawing::Size(167, 80);
			this->convertButton->TabIndex = 11;
			this->convertButton->Text = L"Convert";
			this->convertButton->UseVisualStyleBackColor = false;
			this->convertButton->Click += gcnew System::EventHandler(this, &Cverter::convertButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Length_tab);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(0, 0);
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(553, 685);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Transparent;
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->pictureBox3);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->labelTime);
			this->tabPage4->Controls->Add(this->textBoxTO);
			this->tabPage4->Controls->Add(this->textBoxTime);
			this->tabPage4->Controls->Add(this->panel5);
			this->tabPage4->Controls->Add(this->panel6);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 37);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(545, 644);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Time";
			this->tabPage4->Click += gcnew System::EventHandler(this, &Cverter::tabPage4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(101, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(347, 54);
			this->label8->TabIndex = 24;
			this->label8->Text = L"TIME CONVERTER";
			this->label8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label8->Click += gcnew System::EventHandler(this, &Cverter::label8_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(545, 228);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Cverter::pictureBox3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Chocolate;
			this->label17->Location = System::Drawing::Point(355, 463);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 32);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Output";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Chocolate;
			this->label9->Location = System::Drawing::Point(100, 463);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 32);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Input";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(44, 439);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 32);
			this->label6->TabIndex = 22;
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->ForeColor = System::Drawing::Color::Black;
			this->labelTime->Location = System::Drawing::Point(341, 504);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(0, 32);
			this->labelTime->TabIndex = 8;
			// 
			// textBoxTO
			// 
			this->textBoxTO->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxTO->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTO->Location = System::Drawing::Point(285, 504);
			this->textBoxTO->Name = L"textBoxTO";
			this->textBoxTO->Size = System::Drawing::Size(244, 32);
			this->textBoxTO->TabIndex = 6;
			// 
			// textBoxTime
			// 
			this->textBoxTime->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxTime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTime->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTime->Location = System::Drawing::Point(21, 504);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->Size = System::Drawing::Size(244, 32);
			this->textBoxTime->TabIndex = 6;
			this->textBoxTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->yearO);
			this->panel5->Controls->Add(this->monthO);
			this->panel5->Controls->Add(this->minuteO);
			this->panel5->Controls->Add(this->secondO);
			this->panel5->Controls->Add(this->weekO);
			this->panel5->Controls->Add(this->hourO);
			this->panel5->Controls->Add(this->dayO);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->ForeColor = System::Drawing::SystemColors::Info;
			this->panel5->Location = System::Drawing::Point(315, 234);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(226, 228);
			this->panel5->TabIndex = 5;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Cverter::panel5_Paint);
			// 
			// yearO
			// 
			this->yearO->AutoSize = true;
			this->yearO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearO->ForeColor = System::Drawing::Color::Black;
			this->yearO->Location = System::Drawing::Point(20, 190);
			this->yearO->Name = L"yearO";
			this->yearO->Size = System::Drawing::Size(75, 32);
			this->yearO->TabIndex = 0;
			this->yearO->TabStop = true;
			this->yearO->Text = L"Year";
			this->yearO->UseVisualStyleBackColor = true;
			// 
			// monthO
			// 
			this->monthO->AutoSize = true;
			this->monthO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthO->ForeColor = System::Drawing::Color::Black;
			this->monthO->Location = System::Drawing::Point(20, 155);
			this->monthO->Name = L"monthO";
			this->monthO->Size = System::Drawing::Size(98, 32);
			this->monthO->TabIndex = 0;
			this->monthO->TabStop = true;
			this->monthO->Text = L"Month";
			this->monthO->UseVisualStyleBackColor = true;
			// 
			// minuteO
			// 
			this->minuteO->AutoSize = true;
			this->minuteO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minuteO->ForeColor = System::Drawing::Color::Black;
			this->minuteO->Location = System::Drawing::Point(20, 67);
			this->minuteO->Name = L"minuteO";
			this->minuteO->Size = System::Drawing::Size(102, 32);
			this->minuteO->TabIndex = 0;
			this->minuteO->TabStop = true;
			this->minuteO->Text = L"Minute";
			this->minuteO->UseVisualStyleBackColor = true;
			// 
			// secondO
			// 
			this->secondO->AutoSize = true;
			this->secondO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secondO->ForeColor = System::Drawing::Color::Black;
			this->secondO->Location = System::Drawing::Point(20, 96);
			this->secondO->Name = L"secondO";
			this->secondO->Size = System::Drawing::Size(104, 32);
			this->secondO->TabIndex = 0;
			this->secondO->TabStop = true;
			this->secondO->Text = L"Second";
			this->secondO->UseVisualStyleBackColor = true;
			// 
			// weekO
			// 
			this->weekO->AutoSize = true;
			this->weekO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weekO->ForeColor = System::Drawing::Color::Black;
			this->weekO->Location = System::Drawing::Point(20, 127);
			this->weekO->Name = L"weekO";
			this->weekO->Size = System::Drawing::Size(88, 32);
			this->weekO->TabIndex = 0;
			this->weekO->TabStop = true;
			this->weekO->Text = L"Week";
			this->weekO->UseVisualStyleBackColor = true;
			// 
			// hourO
			// 
			this->hourO->AutoSize = true;
			this->hourO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hourO->ForeColor = System::Drawing::Color::Black;
			this->hourO->Location = System::Drawing::Point(20, 36);
			this->hourO->Name = L"hourO";
			this->hourO->Size = System::Drawing::Size(83, 32);
			this->hourO->TabIndex = 0;
			this->hourO->TabStop = true;
			this->hourO->Text = L"Hour";
			this->hourO->UseVisualStyleBackColor = true;
			// 
			// dayO
			// 
			this->dayO->AutoSize = true;
			this->dayO->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dayO->ForeColor = System::Drawing::Color::Black;
			this->dayO->Location = System::Drawing::Point(20, 6);
			this->dayO->Name = L"dayO";
			this->dayO->Size = System::Drawing::Size(71, 32);
			this->dayO->TabIndex = 0;
			this->dayO->TabStop = true;
			this->dayO->Text = L"Day";
			this->dayO->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->yearI);
			this->panel6->Controls->Add(this->monthI);
			this->panel6->Controls->Add(this->minuteI);
			this->panel6->Controls->Add(this->secondI);
			this->panel6->Controls->Add(this->weekI);
			this->panel6->Controls->Add(this->hourI);
			this->panel6->Controls->Add(this->dayI);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel6->ForeColor = System::Drawing::SystemColors::Info;
			this->panel6->Location = System::Drawing::Point(35, 234);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(226, 228);
			this->panel6->TabIndex = 5;
			// 
			// yearI
			// 
			this->yearI->AutoSize = true;
			this->yearI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearI->ForeColor = System::Drawing::Color::Black;
			this->yearI->Location = System::Drawing::Point(20, 190);
			this->yearI->Name = L"yearI";
			this->yearI->Size = System::Drawing::Size(75, 32);
			this->yearI->TabIndex = 0;
			this->yearI->TabStop = true;
			this->yearI->Text = L"Year";
			this->yearI->UseVisualStyleBackColor = true;
			// 
			// monthI
			// 
			this->monthI->AutoSize = true;
			this->monthI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthI->ForeColor = System::Drawing::Color::Black;
			this->monthI->Location = System::Drawing::Point(20, 155);
			this->monthI->Name = L"monthI";
			this->monthI->Size = System::Drawing::Size(98, 32);
			this->monthI->TabIndex = 0;
			this->monthI->TabStop = true;
			this->monthI->Text = L"Month";
			this->monthI->UseVisualStyleBackColor = true;
			// 
			// minuteI
			// 
			this->minuteI->AutoSize = true;
			this->minuteI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minuteI->ForeColor = System::Drawing::Color::Black;
			this->minuteI->Location = System::Drawing::Point(20, 67);
			this->minuteI->Name = L"minuteI";
			this->minuteI->Size = System::Drawing::Size(102, 32);
			this->minuteI->TabIndex = 0;
			this->minuteI->TabStop = true;
			this->minuteI->Text = L"Minute";
			this->minuteI->UseVisualStyleBackColor = true;
			// 
			// secondI
			// 
			this->secondI->AutoSize = true;
			this->secondI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secondI->ForeColor = System::Drawing::Color::Black;
			this->secondI->Location = System::Drawing::Point(20, 96);
			this->secondI->Name = L"secondI";
			this->secondI->Size = System::Drawing::Size(104, 32);
			this->secondI->TabIndex = 0;
			this->secondI->TabStop = true;
			this->secondI->Text = L"Second";
			this->secondI->UseVisualStyleBackColor = true;
			// 
			// weekI
			// 
			this->weekI->AutoSize = true;
			this->weekI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weekI->ForeColor = System::Drawing::Color::Black;
			this->weekI->Location = System::Drawing::Point(20, 127);
			this->weekI->Name = L"weekI";
			this->weekI->Size = System::Drawing::Size(88, 32);
			this->weekI->TabIndex = 0;
			this->weekI->TabStop = true;
			this->weekI->Text = L"Week";
			this->weekI->UseVisualStyleBackColor = true;
			// 
			// hourI
			// 
			this->hourI->AutoSize = true;
			this->hourI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hourI->ForeColor = System::Drawing::Color::Black;
			this->hourI->Location = System::Drawing::Point(20, 36);
			this->hourI->Name = L"hourI";
			this->hourI->Size = System::Drawing::Size(83, 32);
			this->hourI->TabIndex = 0;
			this->hourI->TabStop = true;
			this->hourI->Text = L"Hour";
			this->hourI->UseVisualStyleBackColor = true;
			// 
			// dayI
			// 
			this->dayI->AutoSize = true;
			this->dayI->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dayI->ForeColor = System::Drawing::Color::Black;
			this->dayI->Location = System::Drawing::Point(20, 6);
			this->dayI->Name = L"dayI";
			this->dayI->Size = System::Drawing::Size(71, 32);
			this->dayI->TabIndex = 0;
			this->dayI->TabStop = true;
			this->dayI->Text = L"Day";
			this->dayI->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(330, 550);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Cverter::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Indigo;
			this->button2->Location = System::Drawing::Point(55, 550);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 80);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Convert";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Cverter::button2_Click_1);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Transparent;
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->labelCurrency);
			this->tabPage3->Controls->Add(this->textBoxCIn);
			this->tabPage3->Controls->Add(this->textBoxCOut);
			this->tabPage3->Controls->Add(this->panel8);
			this->tabPage3->Controls->Add(this->panel7);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 37);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(545, 644);
			this->tabPage3->TabIndex = 4;
			this->tabPage3->Text = L"Currency";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Red;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(50, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(459, 54);
			this->label10->TabIndex = 30;
			this->label10->Text = L"CURRENCY CONVERTER";
			this->label10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(-2, -25);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(551, 264);
			this->pictureBox4->TabIndex = 31;
			this->pictureBox4->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Chocolate;
			this->label18->Location = System::Drawing::Point(355, 465);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(93, 32);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Output";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Chocolate;
			this->label11->Location = System::Drawing::Point(100, 465);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 32);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Input";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelCurrency
			// 
			this->labelCurrency->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelCurrency->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCurrency->ForeColor = System::Drawing::Color::Black;
			this->labelCurrency->Location = System::Drawing::Point(316, 508);
			this->labelCurrency->Name = L"labelCurrency";
			this->labelCurrency->Size = System::Drawing::Size(173, 28);
			this->labelCurrency->TabIndex = 28;
			// 
			// textBoxCIn
			// 
			this->textBoxCIn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxCIn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxCIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCIn->Location = System::Drawing::Point(21, 505);
			this->textBoxCIn->Name = L"textBoxCIn";
			this->textBoxCIn->Size = System::Drawing::Size(244, 32);
			this->textBoxCIn->TabIndex = 26;
			this->textBoxCIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxCOut
			// 
			this->textBoxCOut->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxCOut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCOut->Location = System::Drawing::Point(285, 505);
			this->textBoxCOut->Name = L"textBoxCOut";
			this->textBoxCOut->Size = System::Drawing::Size(244, 32);
			this->textBoxCOut->TabIndex = 27;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->nrOut);
			this->panel8->Controls->Add(this->inrOut);
			this->panel8->Controls->Add(this->yuanOut);
			this->panel8->Controls->Add(this->euroOut);
			this->panel8->Controls->Add(this->poundOut);
			this->panel8->Controls->Add(this->dollarOut);
			this->panel8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel8->Location = System::Drawing::Point(315, 253);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(225, 205);
			this->panel8->TabIndex = 24;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Cverter::panel8_Paint);
			// 
			// nrOut
			// 
			this->nrOut->AutoSize = true;
			this->nrOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nrOut->ForeColor = System::Drawing::Color::Black;
			this->nrOut->Location = System::Drawing::Point(21, 155);
			this->nrOut->Name = L"nrOut";
			this->nrOut->Size = System::Drawing::Size(168, 32);
			this->nrOut->TabIndex = 1;
			this->nrOut->TabStop = true;
			this->nrOut->Text = L"Nepali Rupees";
			this->nrOut->UseVisualStyleBackColor = true;
			// 
			// inrOut
			// 
			this->inrOut->AutoSize = true;
			this->inrOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inrOut->ForeColor = System::Drawing::Color::Black;
			this->inrOut->Location = System::Drawing::Point(21, 126);
			this->inrOut->Name = L"inrOut";
			this->inrOut->Size = System::Drawing::Size(167, 32);
			this->inrOut->TabIndex = 0;
			this->inrOut->TabStop = true;
			this->inrOut->Text = L"Indian Rupees";
			this->inrOut->UseVisualStyleBackColor = true;
			// 
			// yuanOut
			// 
			this->yuanOut->AutoSize = true;
			this->yuanOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yuanOut->ForeColor = System::Drawing::Color::Black;
			this->yuanOut->Location = System::Drawing::Point(21, 96);
			this->yuanOut->Name = L"yuanOut";
			this->yuanOut->Size = System::Drawing::Size(160, 32);
			this->yuanOut->TabIndex = 0;
			this->yuanOut->TabStop = true;
			this->yuanOut->Text = L"Chinese Yuan";
			this->yuanOut->UseVisualStyleBackColor = true;
			// 
			// euroOut
			// 
			this->euroOut->AutoSize = true;
			this->euroOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->euroOut->ForeColor = System::Drawing::Color::Black;
			this->euroOut->Location = System::Drawing::Point(21, 66);
			this->euroOut->Name = L"euroOut";
			this->euroOut->Size = System::Drawing::Size(78, 32);
			this->euroOut->TabIndex = 0;
			this->euroOut->TabStop = true;
			this->euroOut->Text = L"Euro";
			this->euroOut->UseVisualStyleBackColor = true;
			// 
			// poundOut
			// 
			this->poundOut->AutoSize = true;
			this->poundOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->poundOut->ForeColor = System::Drawing::Color::Black;
			this->poundOut->Location = System::Drawing::Point(21, 36);
			this->poundOut->Name = L"poundOut";
			this->poundOut->Size = System::Drawing::Size(96, 32);
			this->poundOut->TabIndex = 0;
			this->poundOut->TabStop = true;
			this->poundOut->Text = L"Pound";
			this->poundOut->UseVisualStyleBackColor = true;
			// 
			// dollarOut
			// 
			this->dollarOut->AutoSize = true;
			this->dollarOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dollarOut->ForeColor = System::Drawing::Color::Black;
			this->dollarOut->Location = System::Drawing::Point(21, 6);
			this->dollarOut->Name = L"dollarOut";
			this->dollarOut->Size = System::Drawing::Size(90, 32);
			this->dollarOut->TabIndex = 0;
			this->dollarOut->TabStop = true;
			this->dollarOut->Text = L"Dollar";
			this->dollarOut->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->nrIn);
			this->panel7->Controls->Add(this->inrIn);
			this->panel7->Controls->Add(this->yuanIn);
			this->panel7->Controls->Add(this->euroIn);
			this->panel7->Controls->Add(this->poundIn);
			this->panel7->Controls->Add(this->dollarIn);
			this->panel7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(35, 253);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(225, 205);
			this->panel7->TabIndex = 24;
			// 
			// nrIn
			// 
			this->nrIn->AutoSize = true;
			this->nrIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nrIn->ForeColor = System::Drawing::Color::Black;
			this->nrIn->Location = System::Drawing::Point(21, 155);
			this->nrIn->Name = L"nrIn";
			this->nrIn->Size = System::Drawing::Size(168, 32);
			this->nrIn->TabIndex = 0;
			this->nrIn->TabStop = true;
			this->nrIn->Text = L"Nepali Rupees";
			this->nrIn->UseVisualStyleBackColor = true;
			// 
			// inrIn
			// 
			this->inrIn->AutoSize = true;
			this->inrIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inrIn->ForeColor = System::Drawing::Color::Black;
			this->inrIn->Location = System::Drawing::Point(21, 126);
			this->inrIn->Name = L"inrIn";
			this->inrIn->Size = System::Drawing::Size(167, 32);
			this->inrIn->TabIndex = 0;
			this->inrIn->TabStop = true;
			this->inrIn->Text = L"Indian Rupees";
			this->inrIn->UseVisualStyleBackColor = true;
			this->inrIn->CheckedChanged += gcnew System::EventHandler(this, &Cverter::inrIn_CheckedChanged);
			// 
			// yuanIn
			// 
			this->yuanIn->AutoSize = true;
			this->yuanIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yuanIn->ForeColor = System::Drawing::Color::Black;
			this->yuanIn->Location = System::Drawing::Point(21, 96);
			this->yuanIn->Name = L"yuanIn";
			this->yuanIn->Size = System::Drawing::Size(160, 32);
			this->yuanIn->TabIndex = 0;
			this->yuanIn->TabStop = true;
			this->yuanIn->Text = L"Chinese Yuan";
			this->yuanIn->UseVisualStyleBackColor = true;
			// 
			// euroIn
			// 
			this->euroIn->AutoSize = true;
			this->euroIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->euroIn->ForeColor = System::Drawing::Color::Black;
			this->euroIn->Location = System::Drawing::Point(21, 66);
			this->euroIn->Name = L"euroIn";
			this->euroIn->Size = System::Drawing::Size(78, 32);
			this->euroIn->TabIndex = 0;
			this->euroIn->TabStop = true;
			this->euroIn->Text = L"Euro";
			this->euroIn->UseVisualStyleBackColor = true;
			// 
			// poundIn
			// 
			this->poundIn->AutoSize = true;
			this->poundIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->poundIn->ForeColor = System::Drawing::Color::Black;
			this->poundIn->Location = System::Drawing::Point(21, 36);
			this->poundIn->Name = L"poundIn";
			this->poundIn->Size = System::Drawing::Size(96, 32);
			this->poundIn->TabIndex = 0;
			this->poundIn->TabStop = true;
			this->poundIn->Text = L"Pound";
			this->poundIn->UseVisualStyleBackColor = true;
			// 
			// dollarIn
			// 
			this->dollarIn->AutoSize = true;
			this->dollarIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dollarIn->ForeColor = System::Drawing::Color::Black;
			this->dollarIn->Location = System::Drawing::Point(21, 6);
			this->dollarIn->Name = L"dollarIn";
			this->dollarIn->Size = System::Drawing::Size(90, 32);
			this->dollarIn->TabIndex = 0;
			this->dollarIn->TabStop = true;
			this->dollarIn->Text = L"Dollar";
			this->dollarIn->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(330, 550);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 80);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Cverter::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Indigo;
			this->button4->Location = System::Drawing::Point(55, 550);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(167, 80);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Convert";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Cverter::button4_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::Transparent;
			this->tabPage5->Controls->Add(this->label13);
			this->tabPage5->Controls->Add(this->pictureBox6);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->labelArea);
			this->tabPage5->Controls->Add(this->textBoxAreaIn);
			this->tabPage5->Controls->Add(this->textBoxAreaOut);
			this->tabPage5->Controls->Add(this->panel10);
			this->tabPage5->Controls->Add(this->panel9);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->button6);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage5->Location = System::Drawing::Point(4, 37);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(545, 644);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Area";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Red;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(97, 152);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(357, 54);
			this->label13->TabIndex = 31;
			this->label13->Text = L"AREA CONVERTER";
			this->label13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(-3, -33);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(549, 264);
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Chocolate;
			this->label19->Location = System::Drawing::Point(355, 442);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(93, 32);
			this->label19->TabIndex = 30;
			this->label19->Text = L"Output";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label19->Click += gcnew System::EventHandler(this, &Cverter::label19_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Chocolate;
			this->label7->Location = System::Drawing::Point(100, 442);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 32);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Input";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->Click += gcnew System::EventHandler(this, &Cverter::label7_Click);
			// 
			// labelArea
			// 
			this->labelArea->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelArea->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelArea->ForeColor = System::Drawing::Color::Black;
			this->labelArea->Location = System::Drawing::Point(315, 491);
			this->labelArea->Name = L"labelArea";
			this->labelArea->Size = System::Drawing::Size(173, 27);
			this->labelArea->TabIndex = 29;
			this->labelArea->Click += gcnew System::EventHandler(this, &Cverter::labelArea_Click);
			// 
			// textBoxAreaIn
			// 
			this->textBoxAreaIn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxAreaIn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxAreaIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxAreaIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAreaIn->Location = System::Drawing::Point(21, 486);
			this->textBoxAreaIn->Name = L"textBoxAreaIn";
			this->textBoxAreaIn->Size = System::Drawing::Size(244, 32);
			this->textBoxAreaIn->TabIndex = 27;
			this->textBoxAreaIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxAreaIn->TextChanged += gcnew System::EventHandler(this, &Cverter::textBoxAreaIn_TextChanged);
			// 
			// textBoxAreaOut
			// 
			this->textBoxAreaOut->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxAreaOut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxAreaOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAreaOut->Location = System::Drawing::Point(285, 486);
			this->textBoxAreaOut->Name = L"textBoxAreaOut";
			this->textBoxAreaOut->Size = System::Drawing::Size(244, 32);
			this->textBoxAreaOut->TabIndex = 28;
			this->textBoxAreaOut->TextChanged += gcnew System::EventHandler(this, &Cverter::textBoxAreaOut_TextChanged);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->Controls->Add(this->hectareOut);
			this->panel10->Controls->Add(this->acreOut);
			this->panel10->Controls->Add(this->sIOut);
			this->panel10->Controls->Add(this->sfOut);
			this->panel10->Controls->Add(this->scmOut);
			this->panel10->Controls->Add(this->smOut);
			this->panel10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel10->Location = System::Drawing::Point(315, 231);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(214, 206);
			this->panel10->TabIndex = 25;
			this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Cverter::panel10_Paint);
			// 
			// hectareOut
			// 
			this->hectareOut->AutoSize = true;
			this->hectareOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hectareOut->ForeColor = System::Drawing::Color::Black;
			this->hectareOut->Location = System::Drawing::Point(21, 164);
			this->hectareOut->Name = L"hectareOut";
			this->hectareOut->Size = System::Drawing::Size(107, 32);
			this->hectareOut->TabIndex = 0;
			this->hectareOut->TabStop = true;
			this->hectareOut->Text = L"Hectare";
			this->hectareOut->UseVisualStyleBackColor = true;
			// 
			// acreOut
			// 
			this->acreOut->AutoSize = true;
			this->acreOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acreOut->ForeColor = System::Drawing::Color::Black;
			this->acreOut->Location = System::Drawing::Point(21, 134);
			this->acreOut->Name = L"acreOut";
			this->acreOut->Size = System::Drawing::Size(77, 32);
			this->acreOut->TabIndex = 0;
			this->acreOut->TabStop = true;
			this->acreOut->Text = L"Acre";
			this->acreOut->UseVisualStyleBackColor = true;
			// 
			// sIOut
			// 
			this->sIOut->AutoSize = true;
			this->sIOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sIOut->ForeColor = System::Drawing::Color::Black;
			this->sIOut->Location = System::Drawing::Point(21, 104);
			this->sIOut->Name = L"sIOut";
			this->sIOut->Size = System::Drawing::Size(145, 32);
			this->sIOut->TabIndex = 0;
			this->sIOut->TabStop = true;
			this->sIOut->Text = L"Square Inch";
			this->sIOut->UseVisualStyleBackColor = true;
			// 
			// sfOut
			// 
			this->sfOut->AutoSize = true;
			this->sfOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sfOut->ForeColor = System::Drawing::Color::Black;
			this->sfOut->Location = System::Drawing::Point(20, 74);
			this->sfOut->Name = L"sfOut";
			this->sfOut->Size = System::Drawing::Size(147, 32);
			this->sfOut->TabIndex = 0;
			this->sfOut->TabStop = true;
			this->sfOut->Text = L"Square Foot";
			this->sfOut->UseVisualStyleBackColor = true;
			// 
			// scmOut
			// 
			this->scmOut->AutoSize = true;
			this->scmOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scmOut->ForeColor = System::Drawing::Color::Black;
			this->scmOut->Location = System::Drawing::Point(19, 44);
			this->scmOut->Name = L"scmOut";
			this->scmOut->Size = System::Drawing::Size(133, 32);
			this->scmOut->TabIndex = 0;
			this->scmOut->TabStop = true;
			this->scmOut->Text = L"Square cm";
			this->scmOut->UseVisualStyleBackColor = true;
			// 
			// smOut
			// 
			this->smOut->AutoSize = true;
			this->smOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->smOut->ForeColor = System::Drawing::Color::Black;
			this->smOut->Location = System::Drawing::Point(21, 14);
			this->smOut->Name = L"smOut";
			this->smOut->Size = System::Drawing::Size(160, 32);
			this->smOut->TabIndex = 0;
			this->smOut->TabStop = true;
			this->smOut->Text = L"Square Metre";
			this->smOut->UseVisualStyleBackColor = true;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->Controls->Add(this->hectareIn);
			this->panel9->Controls->Add(this->acreIn);
			this->panel9->Controls->Add(this->sIIn);
			this->panel9->Controls->Add(this->sfIn);
			this->panel9->Controls->Add(this->scmIn);
			this->panel9->Controls->Add(this->smInn);
			this->panel9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel9->Location = System::Drawing::Point(35, 231);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(226, 206);
			this->panel9->TabIndex = 25;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Cverter::panel9_Paint);
			// 
			// hectareIn
			// 
			this->hectareIn->AutoSize = true;
			this->hectareIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hectareIn->ForeColor = System::Drawing::Color::Black;
			this->hectareIn->Location = System::Drawing::Point(21, 164);
			this->hectareIn->Name = L"hectareIn";
			this->hectareIn->Size = System::Drawing::Size(107, 32);
			this->hectareIn->TabIndex = 0;
			this->hectareIn->TabStop = true;
			this->hectareIn->Text = L"Hectare";
			this->hectareIn->UseVisualStyleBackColor = true;
			// 
			// acreIn
			// 
			this->acreIn->AutoSize = true;
			this->acreIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acreIn->ForeColor = System::Drawing::Color::Black;
			this->acreIn->Location = System::Drawing::Point(21, 134);
			this->acreIn->Name = L"acreIn";
			this->acreIn->Size = System::Drawing::Size(77, 32);
			this->acreIn->TabIndex = 0;
			this->acreIn->TabStop = true;
			this->acreIn->Text = L"Acre";
			this->acreIn->UseVisualStyleBackColor = true;
			// 
			// sIIn
			// 
			this->sIIn->AutoSize = true;
			this->sIIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sIIn->ForeColor = System::Drawing::Color::Black;
			this->sIIn->Location = System::Drawing::Point(21, 104);
			this->sIIn->Name = L"sIIn";
			this->sIIn->Size = System::Drawing::Size(145, 32);
			this->sIIn->TabIndex = 0;
			this->sIIn->TabStop = true;
			this->sIIn->Text = L"Square Inch";
			this->sIIn->UseVisualStyleBackColor = true;
			// 
			// sfIn
			// 
			this->sfIn->AutoSize = true;
			this->sfIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sfIn->ForeColor = System::Drawing::Color::Black;
			this->sfIn->Location = System::Drawing::Point(20, 74);
			this->sfIn->Name = L"sfIn";
			this->sfIn->Size = System::Drawing::Size(147, 32);
			this->sfIn->TabIndex = 0;
			this->sfIn->TabStop = true;
			this->sfIn->Text = L"Square Foot";
			this->sfIn->UseVisualStyleBackColor = true;
			// 
			// scmIn
			// 
			this->scmIn->AutoSize = true;
			this->scmIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scmIn->ForeColor = System::Drawing::Color::Black;
			this->scmIn->Location = System::Drawing::Point(19, 44);
			this->scmIn->Name = L"scmIn";
			this->scmIn->Size = System::Drawing::Size(133, 32);
			this->scmIn->TabIndex = 0;
			this->scmIn->TabStop = true;
			this->scmIn->Text = L"Square cm";
			this->scmIn->UseVisualStyleBackColor = true;
			// 
			// smInn
			// 
			this->smInn->AutoSize = true;
			this->smInn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->smInn->ForeColor = System::Drawing::Color::Black;
			this->smInn->Location = System::Drawing::Point(21, 14);
			this->smInn->Name = L"smInn";
			this->smInn->Size = System::Drawing::Size(160, 32);
			this->smInn->TabIndex = 0;
			this->smInn->TabStop = true;
			this->smInn->Text = L"Square Metre";
			this->smInn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->smInn->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Navy;
			this->button5->Location = System::Drawing::Point(330, 550);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 80);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Cverter::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Indigo;
			this->button6->Location = System::Drawing::Point(55, 550);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(167, 80);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Convert";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Cverter::button6_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::Transparent;
			this->tabPage6->Controls->Add(this->label15);
			this->tabPage6->Controls->Add(this->pictureBox5);
			this->tabPage6->Controls->Add(this->label20);
			this->tabPage6->Controls->Add(this->label12);
			this->tabPage6->Controls->Add(this->labelVolume);
			this->tabPage6->Controls->Add(this->textBoxVolumeIn);
			this->tabPage6->Controls->Add(this->textBoxVolumeOut);
			this->tabPage6->Controls->Add(this->panel12);
			this->tabPage6->Controls->Add(this->panel11);
			this->tabPage6->Controls->Add(this->button7);
			this->tabPage6->Controls->Add(this->button8);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage6->Location = System::Drawing::Point(4, 37);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(545, 644);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"Volume";
			this->tabPage6->Click += gcnew System::EventHandler(this, &Cverter::tabPage6_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Red;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(76, 150);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(416, 54);
			this->label15->TabIndex = 39;
			this->label15->Text = L"VOLUME CONVERTER";
			this->label15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(-4, -92);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(549, 319);
			this->pictureBox5->TabIndex = 40;
			this->pictureBox5->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Chocolate;
			this->label20->Location = System::Drawing::Point(355, 449);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 32);
			this->label20->TabIndex = 38;
			this->label20->Text = L"Output";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Chocolate;
			this->label12->Location = System::Drawing::Point(100, 449);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 32);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Input";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelVolume
			// 
			this->labelVolume->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelVolume->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVolume->ForeColor = System::Drawing::Color::Black;
			this->labelVolume->Location = System::Drawing::Point(315, 486);
			this->labelVolume->Name = L"labelVolume";
			this->labelVolume->Size = System::Drawing::Size(173, 31);
			this->labelVolume->TabIndex = 37;
			// 
			// textBoxVolumeIn
			// 
			this->textBoxVolumeIn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxVolumeIn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxVolumeIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxVolumeIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxVolumeIn->Location = System::Drawing::Point(21, 486);
			this->textBoxVolumeIn->Name = L"textBoxVolumeIn";
			this->textBoxVolumeIn->Size = System::Drawing::Size(244, 32);
			this->textBoxVolumeIn->TabIndex = 35;
			this->textBoxVolumeIn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxVolumeOut
			// 
			this->textBoxVolumeOut->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxVolumeOut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxVolumeOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxVolumeOut->Location = System::Drawing::Point(285, 486);
			this->textBoxVolumeOut->Name = L"textBoxVolumeOut";
			this->textBoxVolumeOut->Size = System::Drawing::Size(244, 32);
			this->textBoxVolumeOut->TabIndex = 36;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->mltrOut);
			this->panel12->Controls->Add(this->ltrOut);
			this->panel12->Controls->Add(this->in3Out);
			this->panel12->Controls->Add(this->ft3Out);
			this->panel12->Controls->Add(this->cm3Out);
			this->panel12->Controls->Add(this->m3Out);
			this->panel12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel12->Location = System::Drawing::Point(315, 233);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(226, 206);
			this->panel12->TabIndex = 34;
			// 
			// mltrOut
			// 
			this->mltrOut->AutoSize = true;
			this->mltrOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mltrOut->ForeColor = System::Drawing::Color::Black;
			this->mltrOut->Location = System::Drawing::Point(21, 164);
			this->mltrOut->Name = L"mltrOut";
			this->mltrOut->Size = System::Drawing::Size(105, 32);
			this->mltrOut->TabIndex = 0;
			this->mltrOut->TabStop = true;
			this->mltrOut->Text = L"Mililitre";
			this->mltrOut->UseVisualStyleBackColor = true;
			// 
			// ltrOut
			// 
			this->ltrOut->AutoSize = true;
			this->ltrOut->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltrOut->ForeColor = System::Drawing::Color::Black;
			this->ltrOut->Location = System::Drawing::Point(21, 134);
			this->ltrOut->Name = L"ltrOut";
			this->ltrOut->Size = System::Drawing::Size(77, 32);
			this->ltrOut->TabIndex = 0;
			this->ltrOut->TabStop = true;
			this->ltrOut->Text = L"Litre";
			this->ltrOut->UseVisualStyleBackColor = true;
			// 
			// in3Out
			// 
			this->in3Out->AutoSize = true;
			this->in3Out->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->in3Out->ForeColor = System::Drawing::Color::Black;
			this->in3Out->Location = System::Drawing::Point(21, 104);
			this->in3Out->Name = L"in3Out";
			this->in3Out->Size = System::Drawing::Size(132, 32);
			this->in3Out->TabIndex = 0;
			this->in3Out->TabStop = true;
			this->in3Out->Text = L"Cubic Inch";
			this->in3Out->UseVisualStyleBackColor = true;
			// 
			// ft3Out
			// 
			this->ft3Out->AutoSize = true;
			this->ft3Out->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ft3Out->ForeColor = System::Drawing::Color::Black;
			this->ft3Out->Location = System::Drawing::Point(20, 74);
			this->ft3Out->Name = L"ft3Out";
			this->ft3Out->Size = System::Drawing::Size(134, 32);
			this->ft3Out->TabIndex = 0;
			this->ft3Out->TabStop = true;
			this->ft3Out->Text = L"Cubic Foot";
			this->ft3Out->UseVisualStyleBackColor = true;
			// 
			// cm3Out
			// 
			this->cm3Out->AutoSize = true;
			this->cm3Out->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cm3Out->ForeColor = System::Drawing::Color::Black;
			this->cm3Out->Location = System::Drawing::Point(19, 44);
			this->cm3Out->Name = L"cm3Out";
			this->cm3Out->Size = System::Drawing::Size(120, 32);
			this->cm3Out->TabIndex = 0;
			this->cm3Out->TabStop = true;
			this->cm3Out->Text = L"Cubic cm";
			this->cm3Out->UseVisualStyleBackColor = true;
			// 
			// m3Out
			// 
			this->m3Out->AutoSize = true;
			this->m3Out->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m3Out->ForeColor = System::Drawing::Color::Black;
			this->m3Out->Location = System::Drawing::Point(20, 10);
			this->m3Out->Name = L"m3Out";
			this->m3Out->Size = System::Drawing::Size(147, 32);
			this->m3Out->TabIndex = 0;
			this->m3Out->TabStop = true;
			this->m3Out->Text = L"Cubic Metre";
			this->m3Out->UseVisualStyleBackColor = true;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->mltrIn);
			this->panel11->Controls->Add(this->ltrIn);
			this->panel11->Controls->Add(this->in3In);
			this->panel11->Controls->Add(this->ft3In);
			this->panel11->Controls->Add(this->cm3In);
			this->panel11->Controls->Add(this->m3In);
			this->panel11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel11->ForeColor = System::Drawing::Color::Black;
			this->panel11->Location = System::Drawing::Point(35, 233);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(226, 206);
			this->panel11->TabIndex = 34;
			// 
			// mltrIn
			// 
			this->mltrIn->AutoSize = true;
			this->mltrIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mltrIn->ForeColor = System::Drawing::Color::Black;
			this->mltrIn->Location = System::Drawing::Point(21, 164);
			this->mltrIn->Name = L"mltrIn";
			this->mltrIn->Size = System::Drawing::Size(105, 32);
			this->mltrIn->TabIndex = 0;
			this->mltrIn->TabStop = true;
			this->mltrIn->Text = L"Mililitre";
			this->mltrIn->UseVisualStyleBackColor = true;
			// 
			// ltrIn
			// 
			this->ltrIn->AutoSize = true;
			this->ltrIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltrIn->ForeColor = System::Drawing::Color::Black;
			this->ltrIn->Location = System::Drawing::Point(21, 134);
			this->ltrIn->Name = L"ltrIn";
			this->ltrIn->Size = System::Drawing::Size(77, 32);
			this->ltrIn->TabIndex = 0;
			this->ltrIn->TabStop = true;
			this->ltrIn->Text = L"Litre";
			this->ltrIn->UseVisualStyleBackColor = true;
			// 
			// in3In
			// 
			this->in3In->AutoSize = true;
			this->in3In->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->in3In->ForeColor = System::Drawing::Color::Black;
			this->in3In->Location = System::Drawing::Point(21, 104);
			this->in3In->Name = L"in3In";
			this->in3In->Size = System::Drawing::Size(132, 32);
			this->in3In->TabIndex = 0;
			this->in3In->TabStop = true;
			this->in3In->Text = L"Cubic Inch";
			this->in3In->UseVisualStyleBackColor = true;
			// 
			// ft3In
			// 
			this->ft3In->AutoSize = true;
			this->ft3In->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ft3In->ForeColor = System::Drawing::Color::Black;
			this->ft3In->Location = System::Drawing::Point(20, 74);
			this->ft3In->Name = L"ft3In";
			this->ft3In->Size = System::Drawing::Size(134, 32);
			this->ft3In->TabIndex = 0;
			this->ft3In->TabStop = true;
			this->ft3In->Text = L"Cubic Foot";
			this->ft3In->UseVisualStyleBackColor = true;
			// 
			// cm3In
			// 
			this->cm3In->AutoSize = true;
			this->cm3In->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cm3In->ForeColor = System::Drawing::Color::Black;
			this->cm3In->Location = System::Drawing::Point(19, 44);
			this->cm3In->Name = L"cm3In";
			this->cm3In->Size = System::Drawing::Size(120, 32);
			this->cm3In->TabIndex = 0;
			this->cm3In->TabStop = true;
			this->cm3In->Text = L"Cubic cm";
			this->cm3In->UseVisualStyleBackColor = true;
			// 
			// m3In
			// 
			this->m3In->AutoSize = true;
			this->m3In->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m3In->ForeColor = System::Drawing::Color::Black;
			this->m3In->Location = System::Drawing::Point(19, 10);
			this->m3In->Name = L"m3In";
			this->m3In->Size = System::Drawing::Size(147, 32);
			this->m3In->TabIndex = 0;
			this->m3In->TabStop = true;
			this->m3In->Text = L"Cubic Metre";
			this->m3In->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Navy;
			this->button7->Location = System::Drawing::Point(330, 550);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(167, 80);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Cverter::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Indigo;
			this->button8->Location = System::Drawing::Point(55, 550);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(167, 80);
			this->button8->TabIndex = 31;
			this->button8->Text = L"Convert";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Cverter::button8_Click);
			// 
			// Cverter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(553, 690);
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Cverter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Unit Converter";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Cverter::Cverter_Load);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Length_tab->ResumeLayout(false);
			this->Length_tab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ metre1;
		String ^ testO;
		double a;
		double b;
		

	private: System::Void resetButton_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxIn->Text = " ";
		textBoxOut->Text = "";
		label4->Text = "";
	}

	public: System::Void convertButton_Click(System::Object^  sender, System::EventArgs^  e) {
		a = System::Convert::ToDouble(textBoxIn->Text);
	////length
		//Input Metre
		if ( metreIn->Checked)
		{
			double temp;
			String ^ tm;
			if (metreOut->Checked)
			{
				temp = a * 1;
				tm = System::Convert::ToString(temp);
				label4->Text = tm ;
			}
			else if (KilometreOut->Checked)
			{ 
				temp = a * 0.001;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (centimeterOut->Checked)
			{
				temp = a * 100;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (inchOut->Checked)
			{
				temp = a * 39.3701;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (footOut->Checked)
			{
				temp = a * 3.28084;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
		}
		//Input Kilometre
		if (kilometreIn->Checked)
		{
			double temp;
			String ^ tm;
			if (metreOut->Checked)
			{
				temp = a * 1000;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (KilometreOut->Checked)
			{
				temp = a * 1;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (centimeterOut->Checked)
			{
				temp = a * 100000;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (inchOut->Checked)
			{
				temp = a * 3.28084*1000;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (footOut->Checked)
			{
				temp = a * 3.28084*(1000/12);
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
		}
		//for Centimeter input
		if (centimetreIn->Checked)
		{
			double temp;
			String ^ tm;
			if (metreOut->Checked)
			{
				temp = a * 0.01;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (KilometreOut->Checked)
			{
				temp = a * 0.00001;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (centimeterOut->Checked)
			{
				temp = a * (1);
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (inchOut->Checked)
			{
				temp = a * 0.3936;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (footOut->Checked)
			{
				temp = a * 0.033;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
		}
		//for foot input
		if (footIn->Checked)
		{
			double temp;
			String ^ tm;
			if (metreOut->Checked)
			{
				temp = a * 0.30248;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (KilometreOut->Checked)
			{
				temp = a * 0.0003048;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (centimeterOut->Checked)
			{
				temp = a * 30.48;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (inchOut->Checked)
			{
				temp = a *12;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (footOut->Checked)
			{
				temp = a * 1;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
		}
		//for Inch input
		if (inchIn->Checked)
		{
			double temp;
			String ^ tm;
			if (metreOut->Checked)
			{
				temp = a * 0.0254;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (KilometreOut->Checked)
			{
				temp = a * 0.0254*0.001;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (centimeterOut->Checked)
			{
				temp = a * 2.54;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (inchOut->Checked)
			{
				temp = a * 1;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
			else if (footOut->Checked)
			{
				temp = a * 0.0833;
				tm = System::Convert::ToString(temp);
				label4->Text = tm;
			}
		}
	////length
		//no input
		if (textBoxTime->Text == "")
		{
			labelTime->Text = "No Input !!";
		}

	}
	private: System::Void buttonReset_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxInn->Text = "";
		textBoxOout->Text = "";
		labelWeight->Text = "";
	}

private: System::Void buttonConvert_Click(System::Object^  sender, System::EventArgs^  e) {
	///weight
	b = System::Convert::ToDouble(textBoxInn->Text);
	//Input gram
	if (radiogram->Checked)
	{
		double temp;
		String ^ tm;
		if (radioGramO->Checked)
		{
			temp = b * 1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioKgO->Checked)
		{
			temp = b * 0.001;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioQuintalO->Checked)
		{
			temp = b * 0.00001;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioTonneO->Checked)
		{
			temp = b * 0.000001;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioPoundO->Checked)
		{
			temp = b * 0.00220462;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
	}
	//Input Kilo
	if (radioKg->Checked)
	{
		double temp;
		String ^ tm;
		if (radioGramO->Checked)
		{
			temp = b * 1000;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioKgO->Checked)
		{
			temp = b * 1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioQuintalO->Checked)
		{
			temp = b * 0.01;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioTonneO->Checked)
		{
			temp = b * 0.001;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioPoundO->Checked)
		{
			temp = b * 2.20462;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
	}
	//for quintal
	if (radioQuintal->Checked)
	{
		double temp;
		String ^ tm;
		if (radioGramO->Checked)
		{
			temp = b * 100000;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioKgO->Checked)
		{
			temp = b * 100;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioQuintalO->Checked)
		{
			temp = b * 1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioTonneO->Checked)
		{
			temp = b * 0.1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioPoundO->Checked)
		{
			temp = b * 220.462;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
	}
	//for tonne input
	if (radioTonne->Checked)
	{
		double temp;
		String ^ tm;
		if (radioGramO->Checked)
		{
			temp = b * 100000000;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioKgO->Checked)
		{
			temp = b * 1000;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioQuintalO->Checked)
		{
			temp = b * 0.1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioTonneO->Checked)
		{
			temp = b * 1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioPoundO->Checked)
		{
			temp = b * 2204.62;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
	}
	//for pound
	if (radioPound->Checked)
	{
		double temp;
		String ^ tm;
		if (radioGramO->Checked)
		{
			temp = b*453.592;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioKgO->Checked)
		{
			temp = b*0.453592;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioQuintalO->Checked)
		{
			temp = b*0.00453592;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioTonneO->Checked)
		{
			temp = b*0.000453592;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
		else if (radioPoundO->Checked)
		{
			temp = b*1;
			tm = System::Convert::ToString(temp);
			labelWeight->Text = tm;
		}
	}
	////weight
	//no input
	if (textBoxTime->Text == "")
	{
		labelTime->Text = "No input !!";
	}
}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Int32 c;
	///weight
	c = System::Convert::ToInt32(textBoxTime->Text);
	//Day
	if (dayI->Checked)
	{
		Int32 temp;
		String ^ tm;
		if (dayO->Checked)
		{
			temp = c * 1;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (hourO->Checked)
		{
			temp = c * 24;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (minuteO->Checked)
		{
			temp = c * 1440;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (secondO->Checked)
		{
			temp = c * 86400;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (weekO->Checked)
		{
			temp = c * 0.143;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (monthO->Checked)
		{
			temp = c * 0.034;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (yearO->Checked)
		{
			temp = c * 0.003;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
			
	}
	//Hour
	else if(hourI->Checked)
	{
		Int32 temp;
		String ^ tm;
		if (dayO->Checked)
		{
			temp = c * 0.042;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (hourO->Checked)
		{
			temp = c * 1;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (minuteO->Checked)
		{
			temp = c * 60;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (secondO->Checked)
		{
			temp = c * 3600;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (weekO->Checked)
		{
			temp = c * 0.00599;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (monthO->Checked)
		{
			temp = c * 0.0014;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (yearO->Checked)
		{
			temp = c * 0.000115;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
	}
	//Minute
	else if (minuteI->Checked)
	{
		Int32 temp;
		String ^ tm;
		if (dayO->Checked)
		{
			temp = c * 0.000696;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (hourO->Checked)
		{
			temp = c * 0.016668;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (minuteO->Checked)
		{
			temp = c * 1;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (secondO->Checked)
		{
			temp = c * 60;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (weekO->Checked)
		{
			temp = c * 0.0009931;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (monthO->Checked)
		{
			temp = c * 0.0002285;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (yearO->Checked)
		{
			temp = c * 0.00001909;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
	}
	//second
	else if (secondI->Checked)
	{
		Int32 temp;
		String ^ tm;
		if (dayO->Checked)
		{
			temp = b * 0.000115;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (hourO->Checked)
		{
			temp = b * 0.0223;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (minuteO->Checked)
		{
			temp = b * 0.017;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (secondO->Checked)
		{
			temp = b * 1;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (weekO->Checked)
		{
			temp = b * 0.00017;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (monthO->Checked)
		{
			temp = b * 0.0000381;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (yearO->Checked)
		{
			temp = b * 0.0000032;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
	}
	//week
	else if (weekI->Checked)
	{
		Int32 temp;
		String ^ tm;
		if (dayO->Checked)
		{
			temp = c * 7;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (hourO->Checked)
		{
			temp = c * 168;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (minuteO->Checked)
		{
			temp = c * 1080;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (secondO->Checked)
		{
			temp = c* 604800;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (weekO->Checked)
		{
			temp = c * 1;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (monthO->Checked)
		{
			temp = c * 0.234;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (yearO->Checked)
		{
			temp = c * 0.0193;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
	}
	//month
	else if (monthI->Checked)
		{
			Int32 temp;
			String ^ tm;
			if (dayO->Checked)
			{
				temp = c * 30;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
			else if (hourO->Checked)
			{
				temp = c * 1800;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
			else if (minuteO->Checked)
			{
				temp = c * 108000;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
			else if (secondO->Checked)
			{
				temp = c * 6480000;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
			else if (weekO->Checked)
			{
				temp = c * 4;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
			else if (monthO->Checked)
			{
				temp = c * 1;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
			else if (yearO->Checked)
			{
				temp = c * 0.085;
				tm = System::Convert::ToString(temp);
				labelTime->Text = tm;
			}
		}
	//year
	else if (yearI->Checked)
	{
		Int32 temp;
		String ^ tm;
		if (dayO->Checked)
		{
			temp = c * 365;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (hourO->Checked)
		{
			temp = c * 8760;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (minuteO->Checked)
		{
			temp = c * 525600;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (secondO->Checked)
		{
			temp = c * 31536000;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (weekO->Checked)
		{
			temp = c * 52;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (monthO->Checked)
		{
			temp = c * 12;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
		else if (yearO->Checked)
		{
			temp = c* 1;
			tm = System::Convert::ToString(temp);
			labelTime->Text = tm;
		}
	}
	//no input
	
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	labelTime->Text = "";
	textBoxTime ->Text = "";
	textBoxTO->Text = "";
	textBoxTO->Text = "";
	textBoxTO->Text = "";
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxCIn->Text = "";
	labelCurrency->Text = "";
	textBoxCOut->Text = "";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	double d;
	d = System::Convert::ToDouble(textBoxCIn->Text);
	//dollarIn
	if (dollarIn->Checked)
	{
		double temp;
		String ^ tm;
		if (dollarOut->Checked)
		{
			temp = d * 1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (poundOut->Checked)
		{
			temp = d * 0.7125;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (euroOut->Checked)
		{
			temp = d * 0.95;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (yuanOut->Checked)
		{
			temp = d * 1.1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (inrOut->Checked)
		{
			temp = d * 71.25;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (nrOut->Checked)
		{
			temp = d * 114;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
	}
	//euroIn
	if (euroIn->Checked)
	{
		double temp;
		String ^ tm;
		if (dollarOut->Checked)
		{
			temp = d * 1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (poundOut->Checked)
		{
			temp = d * 1.16;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (euroOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (yuanOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (inrOut->Checked)
		{
			temp = d * 71.25;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (nrOut->Checked)
		{
			temp = d * 114;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
	}
	//poundIn
	if (poundIn->Checked)
	{
		double temp;
		String ^ tm;
		if (dollarOut->Checked)
		{
			temp = d * 1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (poundOut->Checked)
		{
			temp = d * 1.16;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (euroOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (yuanOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (inrOut->Checked)
		{
			temp = d * 71.25;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (nrOut->Checked)
		{
			temp = d * 114;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
	}
	//yuan
	if (yuanIn->Checked)
	{
		double temp;
		String ^ tm;
		if (dollarOut->Checked)
		{
			temp = d * 1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (poundOut->Checked)
		{
			temp = d * 1.16;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (euroOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (yuanOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (inrOut->Checked)
		{
			temp = d * 71.25;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (nrOut->Checked)
		{
			temp = d * 114;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
	}
	//inrIn
	if (inrIn->Checked)
	{
		double temp;
		String ^ tm;
		if (dollarOut->Checked)
		{
			temp = d * 1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (poundOut->Checked)
		{
			temp = d * 1.16;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (euroOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (yuanOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (inrOut->Checked)
		{
			temp = d * 71.25;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (nrOut->Checked)
		{
			temp = d * 114;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
	}
	//nrIn
	if (nrIn->Checked)
	{
		double temp;
		String ^ tm;
		if (dollarOut->Checked)
		{
			temp = d * 1;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (poundOut->Checked)
		{
			temp = d * 1.16;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (euroOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (yuanOut->Checked)
		{
			temp = d * 1.23;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (inrOut->Checked)
		{
			temp = d * 71.25;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
		else if (nrOut->Checked)
		{
			temp = d * 114;
			tm = System::Convert::ToString(temp);
			labelCurrency->Text = tm;
		}
	}
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	labelArea->Text = "";
	textBoxAreaIn->Text = "";
	textBoxAreaOut -> Text = "";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	double en;
	en = System::Convert::ToDouble(textBoxAreaIn->Text);
	//cemtimetersquare
	if (smInn->Checked)
	{
		double temp;
		String ^ tm;
		if (smOut->Checked)
		{
			temp = en * 1;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}

		else if (scmOut->Checked)
		{
			temp = en * 10000;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sIOut->Checked)
		{
			temp = en * 1550;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sfOut->Checked)
		{
			temp = en * 10.764;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (acreOut->Checked)
		{
			temp = en * 0.000247105;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (hectareOut->Checked)
		{
			temp = en * 0.0001;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}


	}
	//cemtimetersquare
	if (scmIn->Checked)
	{
		double temp;
		String ^ tm;
		if (smOut->Checked)
		{
			temp = en * 0.0001;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}

		else if (scmOut->Checked)
		{
			temp = en * 1;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sIOut->Checked)
		{
			temp = en * 0.155;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sfOut->Checked)
		{
			temp = en * 0.00107639;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (acreOut->Checked)
		{
			temp = en * 0.0000000247105;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (hectareOut->Checked)
		{
			temp = en * 0.00000001;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}


	}
	//footsquare
	if (sfIn->Checked)
	{
		double temp;
		String ^ tm;
		if (smOut->Checked)
		{
			temp = en * 0.0929;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}

		else if (scmOut->Checked)
		{
			temp = en * 929.0304;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sIOut->Checked)
		{
			temp = en * 144;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sfOut->Checked)
		{
			temp = en * 1;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (acreOut->Checked)
		{
			temp = en * 0.000229;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (hectareOut->Checked)
		{
			temp = en * 0.0000929;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
	}
	//inchSquare
	if (sIIn->Checked)
	{
		double temp;
		String ^ tm;
		if (smOut->Checked)
		{
			temp = en * 0.00064516;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}

		else if (scmOut->Checked)
		{
			temp = en * 6.4516;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sIOut->Checked)
		{
			temp = en * 1;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sfOut->Checked)
		{
			temp = en * 0.006944;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (acreOut->Checked)
		{
			temp = en * 0.00000159422;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (hectareOut->Checked)
		{
			temp = en * 0.00000064516;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}


	}
	//acre
	if (acreIn->Checked)
	{
		double temp;
		String ^ tm;
		if (smOut->Checked)
		{
			temp = en * 4046.856;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}

		else if (scmOut->Checked)
		{
			temp = en * 40468560;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sIOut->Checked)
		{
			temp = en * 6272639.35;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sfOut->Checked)
		{
			temp = en * 43559.9955;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (acreOut->Checked)
		{
			temp = en * 1;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (hectareOut->Checked)
		{
			temp = en * 0.4046856;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}


}
	//hectare
	if (hectareIn->Checked)
	{
		double temp;
		String ^ tm;
		if (smOut->Checked)
		{
			temp = en * 10000;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}

		else if (scmOut->Checked)
		{
			temp = en * 100000000;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sIOut->Checked)
		{
			temp = en * 15500031;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (sfOut->Checked)
		{
			temp = en * 107639.104;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (acreOut->Checked)
		{
			temp = en * 2.47105;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
		else if (hectareOut->Checked)
		{
			temp = en * 1;
			tm = System::Convert::ToString(temp);
			labelArea->Text = tm;
		}
	}
	}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	labelVolume->Text = "";
	textBoxVolumeIn->Text = "";
	textBoxVolumeOut->Text = "";
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	double vl;
	vl = System::Convert::ToDouble(textBoxVolumeIn->Text);
	//metrecube
	if (m3In->Checked)
	{
		double temp;
		String ^ tm;
		if (m3Out->Checked)
		{
			temp = vl * 1;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}

		else if (cm3Out->Checked)
		{
			temp = vl * 1000000;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (ft3Out->Checked)
		{
			temp = vl* 35.315;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (in3Out->Checked)
		{
			temp = vl * 61023.7;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if(ltrOut->Checked)
		{
			temp = vl * 1000;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (mltrOut->Checked)
		{
			temp = vl * 1000000;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
	}
	//centimetrecube
	 if(cm3In->Checked)
	{
		double temp;
		String ^ tm;
		if (m3Out->Checked)
		{
			temp = vl * 0.00001;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}

		else if (cm3Out->Checked)
		{
			temp = vl * 1;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (ft3Out->Checked)
		{
			temp = vl* 0.000353147;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (in3Out->Checked)
		{
			temp = vl * 0.061024;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (ltrOut->Checked)
		{
			temp = vl * 0.001;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if(mltrOut->Checked)
		{
			temp = vl * 1;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
	}
	//footcube
	 if (ft3In->Checked)
	 {
		 double temp;
		 String ^ tm;
		 if (m3Out->Checked)
		 {
			 temp = vl * 0.0283168;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }

		 else if (cm3Out->Checked)
		 {
			 temp = vl * 28316.85;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (ft3Out->Checked)
		 {
			 temp = vl* 1;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (in3Out->Checked)
		 {
			 temp = vl * 1728;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (ltrOut->Checked)
		 {
			 temp = vl *28.317;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (mltrOut->Checked)
		 {
			 temp = vl * 28316.8466;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
	 }
	//inchcube
	 if (in3In->Checked)
	 {
		 double temp;
		 String ^ tm;
		 if (m3Out->Checked)
		 {
			 temp = vl * 0.00016387;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }

		 else if (cm3Out->Checked)
		 {
			 temp = vl * 16.387;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (ft3Out->Checked)
		 {
			 temp = vl* 0.0005787;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (in3Out->Checked)
		 {
			 temp = vl * 1;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (ltrOut->Checked)
		 {
			 temp = vl * 0.016387;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (mltrOut->Checked)
		 {
			 temp = vl * 16.387;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
	 }
	//litre
	 if (ltrIn->Checked)
	 {
		 double temp;
		 String ^ tm;
		 if (m3Out->Checked)
		 {
			 temp = vl * 0.001;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }

		 else if (cm3Out->Checked)
		 {
			 temp = vl * 1000;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (ft3Out->Checked)
		 {
			 temp = vl* 0.35315;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (in3Out->Checked)
		 {
			 temp = vl * 61.0237;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (ltrOut->Checked)
		 {
			 temp = vl * 1;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
		 else if (mltrOut->Checked)
		 {
			 temp = vl * 1000;
			 tm = System::Convert::ToString(temp);
			 labelVolume->Text = tm;
		 }
	 }
	//mililitre
	if (mltrIn->Checked)
	{
		double temp;
		String ^ tm;
		if (m3Out->Checked)
		{
			temp = vl * 0.00001;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}

		else if (cm3Out->Checked)
		{
			temp = vl * 1;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (ft3Out->Checked)
		{
			temp = vl* 0.00035315;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (in3Out->Checked)
		{
			temp = vl * 0.0610237;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (ltrOut->Checked)
		{
			temp = vl * 0.001;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
		else if (mltrOut->Checked)
		{
			temp = vl * 1;
			tm = System::Convert::ToString(temp);
			labelVolume->Text = tm;
		}
	}
	
}



private: System::Void Cverter_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelArea_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxAreaIn_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxAreaOut_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel10_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel9_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel8_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void inrIn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxIn_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};

}
