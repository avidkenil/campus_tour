#pragma once
#include "atlstr.h"
#include<string>
#include<limits.h>
#include "graph_node.h"
std::string a[] = {
	"ab quarter", "admin", "akshara",
	"aseb gate", "auditorium", "barak", "biotech park", "brahamaputra", "biotechnology", "civil",
	"center for education technology", "cf quarters", "chemistry", "civil", "cf quarters", "computer", "market",
	"conference", "cricket", "cse", "design", "dhansiri", "dibang", "dihing", "d quarters",
	"electrical", "faculty gate", "faculty", "guest", "hospital", "hss", "kameng", "kapili",
	"kendriya", "kv", "lecture", "library", "lohit", "math", "main", "manas",
	"mandir", "manas hall", "mechanical", "married", "new sac", "physics", "sac ext",
	"siang", "serpentine", "sewage", "sports", "subansiri", "swimming", "tennis", "umiam",
	"view", "workshop", "chemical"
};


//this strucutre is used to get the return from the graph_node class function dijkstra() 
struct node2{
	int *parent;
	int start;
	int end;
};



namespace map {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// this is the main and the only form in the entire program
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




	private: System::Windows::Forms::Label^  Kameng;
	private: System::Windows::Forms::Label^  Barak;
	private: System::Windows::Forms::Label^  Siang;
	private: System::Windows::Forms::Label^  Umiam;
	private: System::Windows::Forms::Label^  Kapili;
	private: System::Windows::Forms::Label^  Cl;
	private: System::Windows::Forms::Label^  Me;
	private: System::Windows::Forms::Label^  Hss;

	private: System::Windows::Forms::Label^  Ph;

	private: System::Windows::Forms::Label^  Ma;
	private: System::Windows::Forms::Label^  Dd;

	private: System::Windows::Forms::Label^  Brahmaputra;
	private: System::Windows::Forms::Label^  Dihing;
	private: System::Windows::Forms::Label^  Manas;
	private: System::Windows::Forms::Label^  Cricket;
	private: System::Windows::Forms::Label^  Mch;
	private: System::Windows::Forms::Label^  Lohit;
	private: System::Windows::Forms::Label^  Dibang;
	private: System::Windows::Forms::Label^  Kv;
	private: System::Windows::Forms::Label^  Ce;
	private: System::Windows::Forms::Label^  Bt;
	private: System::Windows::Forms::Label^  Ch;
	private: System::Windows::Forms::Label^  Eee;
	private: System::Windows::Forms::Label^  Cse;
	private: System::Windows::Forms::Label^  Cet;
	private: System::Windows::Forms::Label^  Lecture;
	private: System::Windows::Forms::Label^  Workshop;
	private: System::Windows::Forms::Label^  Cc;

	private: System::Windows::Forms::Label^  Audi;

	private: System::Windows::Forms::Label^  Faculty;
	private: System::Windows::Forms::Label^  Conf;
	private: System::Windows::Forms::Label^  Admin;
	private: System::Windows::Forms::Label^  Viewpoint;
	private: System::Windows::Forms::Label^  Fquarter;
	private: System::Windows::Forms::Label^  Slake;
	private: System::Windows::Forms::Label^  Dquarter;
	private: System::Windows::Forms::Label^  Cfquarter;
	private: System::Windows::Forms::Label^  Abquarter;
	private: System::Windows::Forms::Label^  Aseb;
	private: System::Windows::Forms::Label^  As;
	private: System::Windows::Forms::Label^  Sacext;
	private: System::Windows::Forms::Label^  Bpark;
	private: System::Windows::Forms::Label^  Kvgate;
	private: System::Windows::Forms::Label^  Mandir;
	private: System::Windows::Forms::Label^  Splant;
	private: System::Windows::Forms::Label^  Newsac;
	private: System::Windows::Forms::Label^  swim;
	private: System::Windows::Forms::Label^  Tennis;
	private: System::Windows::Forms::Label^  Sport;
	private: System::Windows::Forms::Label^  Subbu;
	private: System::Windows::Forms::Label^  Dhanno;
	private: System::Windows::Forms::Label^  Mscholar;
	private: System::Windows::Forms::Label^  Hospital;
	private: System::Windows::Forms::Label^  Guest;
	private: System::Windows::Forms::Label^  Maingate;
	private: System::Windows::Forms::Label^  Complex;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;










	private: System::Windows::Forms::Label^  label43;

	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;

	private: System::Windows::Forms::Label^  label37;






	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;




	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;

	private: System::Windows::Forms::Label^  label21;





	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;




private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label58;





private: System::Windows::Forms::Label^  label142;
private: System::Windows::Forms::Label^  label141;

private: System::Windows::Forms::Label^  label139;

private: System::Windows::Forms::Label^  label137;
private: System::Windows::Forms::Label^  label136;

private: System::Windows::Forms::Label^  label134;

private: System::Windows::Forms::Label^  label132;

private: System::Windows::Forms::Label^  label130;
private: System::Windows::Forms::Label^  label129;

private: System::Windows::Forms::Label^  label127;
private: System::Windows::Forms::Label^  label126;

private: System::Windows::Forms::Label^  label124;
private: System::Windows::Forms::Label^  label123;

private: System::Windows::Forms::Label^  label121;

private: System::Windows::Forms::Label^  label119;

private: System::Windows::Forms::Label^  label117;
private: System::Windows::Forms::Label^  label116;

private: System::Windows::Forms::Label^  label114;

private: System::Windows::Forms::Label^  label112;

private: System::Windows::Forms::Label^  label110;
private: System::Windows::Forms::Label^  label109;

private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::Label^  label106;

private: System::Windows::Forms::Label^  label104;

private: System::Windows::Forms::Label^  label102;

private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label99;

private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Label^  label95;

private: System::Windows::Forms::Label^  label93;

private: System::Windows::Forms::Label^  label91;


private: System::Windows::Forms::Label^  label88;

private: System::Windows::Forms::Label^  label86;

private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label83;

private: System::Windows::Forms::Label^  label81;

private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;












	protected:

	protected:



	protected:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Kvgate = (gcnew System::Windows::Forms::Label());
			this->Mandir = (gcnew System::Windows::Forms::Label());
			this->Splant = (gcnew System::Windows::Forms::Label());
			this->Newsac = (gcnew System::Windows::Forms::Label());
			this->swim = (gcnew System::Windows::Forms::Label());
			this->Tennis = (gcnew System::Windows::Forms::Label());
			this->Sport = (gcnew System::Windows::Forms::Label());
			this->Subbu = (gcnew System::Windows::Forms::Label());
			this->Dhanno = (gcnew System::Windows::Forms::Label());
			this->Mscholar = (gcnew System::Windows::Forms::Label());
			this->Hospital = (gcnew System::Windows::Forms::Label());
			this->Guest = (gcnew System::Windows::Forms::Label());
			this->Maingate = (gcnew System::Windows::Forms::Label());
			this->Complex = (gcnew System::Windows::Forms::Label());
			this->Viewpoint = (gcnew System::Windows::Forms::Label());
			this->Fquarter = (gcnew System::Windows::Forms::Label());
			this->Slake = (gcnew System::Windows::Forms::Label());
			this->Dquarter = (gcnew System::Windows::Forms::Label());
			this->Cfquarter = (gcnew System::Windows::Forms::Label());
			this->Abquarter = (gcnew System::Windows::Forms::Label());
			this->Aseb = (gcnew System::Windows::Forms::Label());
			this->As = (gcnew System::Windows::Forms::Label());
			this->Sacext = (gcnew System::Windows::Forms::Label());
			this->Bpark = (gcnew System::Windows::Forms::Label());
			this->Faculty = (gcnew System::Windows::Forms::Label());
			this->Conf = (gcnew System::Windows::Forms::Label());
			this->Admin = (gcnew System::Windows::Forms::Label());
			this->Audi = (gcnew System::Windows::Forms::Label());
			this->Cc = (gcnew System::Windows::Forms::Label());
			this->Lecture = (gcnew System::Windows::Forms::Label());
			this->Workshop = (gcnew System::Windows::Forms::Label());
			this->Cricket = (gcnew System::Windows::Forms::Label());
			this->Mch = (gcnew System::Windows::Forms::Label());
			this->Lohit = (gcnew System::Windows::Forms::Label());
			this->Dibang = (gcnew System::Windows::Forms::Label());
			this->Kv = (gcnew System::Windows::Forms::Label());
			this->Ce = (gcnew System::Windows::Forms::Label());
			this->Bt = (gcnew System::Windows::Forms::Label());
			this->Ch = (gcnew System::Windows::Forms::Label());
			this->Eee = (gcnew System::Windows::Forms::Label());
			this->Cse = (gcnew System::Windows::Forms::Label());
			this->Cet = (gcnew System::Windows::Forms::Label());
			this->Me = (gcnew System::Windows::Forms::Label());
			this->Hss = (gcnew System::Windows::Forms::Label());
			this->Ph = (gcnew System::Windows::Forms::Label());
			this->Ma = (gcnew System::Windows::Forms::Label());
			this->Dd = (gcnew System::Windows::Forms::Label());
			this->Brahmaputra = (gcnew System::Windows::Forms::Label());
			this->Dihing = (gcnew System::Windows::Forms::Label());
			this->Manas = (gcnew System::Windows::Forms::Label());
			this->Cl = (gcnew System::Windows::Forms::Label());
			this->Kapili = (gcnew System::Windows::Forms::Label());
			this->Siang = (gcnew System::Windows::Forms::Label());
			this->Umiam = (gcnew System::Windows::Forms::Label());
			this->Barak = (gcnew System::Windows::Forms::Label());
			this->Kameng = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Location = System::Drawing::Point(13, 96);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(270, 633);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &main::groupBox1_Enter);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(6, 316);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(258, 298);
			this->textBox3->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(6, 31);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(258, 239);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(13, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1321, 63);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Cyan;
			this->label16->Location = System::Drawing::Point(1101, 26);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(101, 20);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Shortest Path";
			this->label16->Click += gcnew System::EventHandler(this, &main::label16_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"Administrative Building", L"Auditorium", L"Brahamaputra Hostel",
					L"Biotechnology Dept", L"Civil Engineering Dept", L"Chemistry Dept", L"Civil Dept", L"Computer Center", L"Conference Room", L"CSE Dept",
					L"Design Dept", L"Dibang Hostel", L"Dihing Hostel", L"Electrical Dept", L"Faculty Quarters", L"Guest House", L"HSS Dept", L"Kapili",
					L"Kendriya Vidhalya", L"KV Gate", L"Lecture Rooms", L"Library", L"Math Dept", L"Mechanical Dept", L"New SAC", L"Physics Dept",
					L"Sports Complex", L"Subansiri", L"Workshop"
			});
			this->comboBox2->Location = System::Drawing::Point(660, 22);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(183, 33);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main::comboBox2_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label1->Location = System::Drawing::Point(17, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(483, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Naksha: IITG Map Application";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"AB Quarter", L"Administrative Building", L"Akshara School",
					L"Aseb Gate", L"Auditorium", L"Barak Hostel", L"Biotech Park", L"Brahamaputra Hostel", L"Biotechnology Dept", L"Civil Engineering Dept",
					L"Center For Education Technology", L"CF quarters", L"Chemistry Dept", L"Civil Dept", L"Cf quarters", L"Computer Center", L"Market Complex",
					L"Conference Room", L"Cricket Field", L"CSE Dept", L"Design Dept", L"Dhansiri Hostel", L"Dibang Hostel", L"Dihing Hostel", L"D quarters",
					L"Electrical Dept", L"Faculty Gate", L"Faculty Quarters", L"Guest House", L"Hospital", L"HSS Dept", L"Kameng Hostel", L"Kapili",
					L"Kendriya Vidhalya", L"KV Gate", L"Lecture Rooms", L"Library", L"Lohit Hostel", L"Math Dept", L"Main Gate", L"Manas Hostel",
					L"Mandir", L"Manas Community Hall", L"Mechanical Dept", L"Marridied Scholar", L"New SAC", L"Physics Dept", L"Sac Extension",
					L"Siang Hostel", L"Serpentine Lake", L"Sewage Plant", L"Sports Complex", L"Subansiri", L"Swimming Pool", L"Tennis Court", L"Umiam Hostel",
					L"Viewpoint", L"Workshop"
			});
			this->comboBox1->Location = System::Drawing::Point(879, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(183, 33);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main::comboBox1_KeyDown);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1226, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 33);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label142);
			this->panel1->Controls->Add(this->label141);
			this->panel1->Controls->Add(this->label139);
			this->panel1->Controls->Add(this->label137);
			this->panel1->Controls->Add(this->label136);
			this->panel1->Controls->Add(this->label134);
			this->panel1->Controls->Add(this->label132);
			this->panel1->Controls->Add(this->label130);
			this->panel1->Controls->Add(this->label129);
			this->panel1->Controls->Add(this->label127);
			this->panel1->Controls->Add(this->label126);
			this->panel1->Controls->Add(this->label124);
			this->panel1->Controls->Add(this->label123);
			this->panel1->Controls->Add(this->label121);
			this->panel1->Controls->Add(this->label119);
			this->panel1->Controls->Add(this->label117);
			this->panel1->Controls->Add(this->label116);
			this->panel1->Controls->Add(this->label114);
			this->panel1->Controls->Add(this->label112);
			this->panel1->Controls->Add(this->label110);
			this->panel1->Controls->Add(this->label109);
			this->panel1->Controls->Add(this->label107);
			this->panel1->Controls->Add(this->label106);
			this->panel1->Controls->Add(this->label104);
			this->panel1->Controls->Add(this->label102);
			this->panel1->Controls->Add(this->label100);
			this->panel1->Controls->Add(this->label99);
			this->panel1->Controls->Add(this->label97);
			this->panel1->Controls->Add(this->label96);
			this->panel1->Controls->Add(this->label95);
			this->panel1->Controls->Add(this->label93);
			this->panel1->Controls->Add(this->label91);
			this->panel1->Controls->Add(this->label88);
			this->panel1->Controls->Add(this->label86);
			this->panel1->Controls->Add(this->label84);
			this->panel1->Controls->Add(this->label83);
			this->panel1->Controls->Add(this->label81);
			this->panel1->Controls->Add(this->label79);
			this->panel1->Controls->Add(this->label74);
			this->panel1->Controls->Add(this->label73);
			this->panel1->Controls->Add(this->label72);
			this->panel1->Controls->Add(this->label71);
			this->panel1->Controls->Add(this->label70);
			this->panel1->Controls->Add(this->label69);
			this->panel1->Controls->Add(this->label68);
			this->panel1->Controls->Add(this->label67);
			this->panel1->Controls->Add(this->label66);
			this->panel1->Controls->Add(this->label65);
			this->panel1->Controls->Add(this->label64);
			this->panel1->Controls->Add(this->label63);
			this->panel1->Controls->Add(this->label62);
			this->panel1->Controls->Add(this->label60);
			this->panel1->Controls->Add(this->label61);
			this->panel1->Controls->Add(this->label59);
			this->panel1->Controls->Add(this->label58);
			this->panel1->Controls->Add(this->label43);
			this->panel1->Controls->Add(this->label41);
			this->panel1->Controls->Add(this->label40);
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Kvgate);
			this->panel1->Controls->Add(this->Mandir);
			this->panel1->Controls->Add(this->Splant);
			this->panel1->Controls->Add(this->Newsac);
			this->panel1->Controls->Add(this->swim);
			this->panel1->Controls->Add(this->Tennis);
			this->panel1->Controls->Add(this->Sport);
			this->panel1->Controls->Add(this->Subbu);
			this->panel1->Controls->Add(this->Dhanno);
			this->panel1->Controls->Add(this->Mscholar);
			this->panel1->Controls->Add(this->Hospital);
			this->panel1->Controls->Add(this->Guest);
			this->panel1->Controls->Add(this->Maingate);
			this->panel1->Controls->Add(this->Complex);
			this->panel1->Controls->Add(this->Viewpoint);
			this->panel1->Controls->Add(this->Fquarter);
			this->panel1->Controls->Add(this->Slake);
			this->panel1->Controls->Add(this->Dquarter);
			this->panel1->Controls->Add(this->Cfquarter);
			this->panel1->Controls->Add(this->Abquarter);
			this->panel1->Controls->Add(this->Aseb);
			this->panel1->Controls->Add(this->As);
			this->panel1->Controls->Add(this->Sacext);
			this->panel1->Controls->Add(this->Bpark);
			this->panel1->Controls->Add(this->Faculty);
			this->panel1->Controls->Add(this->Conf);
			this->panel1->Controls->Add(this->Admin);
			this->panel1->Controls->Add(this->Audi);
			this->panel1->Controls->Add(this->Cc);
			this->panel1->Controls->Add(this->Lecture);
			this->panel1->Controls->Add(this->Workshop);
			this->panel1->Controls->Add(this->Cricket);
			this->panel1->Controls->Add(this->Mch);
			this->panel1->Controls->Add(this->Lohit);
			this->panel1->Controls->Add(this->Dibang);
			this->panel1->Controls->Add(this->Kv);
			this->panel1->Controls->Add(this->Ce);
			this->panel1->Controls->Add(this->Bt);
			this->panel1->Controls->Add(this->Ch);
			this->panel1->Controls->Add(this->Eee);
			this->panel1->Controls->Add(this->Cse);
			this->panel1->Controls->Add(this->Cet);
			this->panel1->Controls->Add(this->Me);
			this->panel1->Controls->Add(this->Hss);
			this->panel1->Controls->Add(this->Ph);
			this->panel1->Controls->Add(this->Ma);
			this->panel1->Controls->Add(this->Dd);
			this->panel1->Controls->Add(this->Brahmaputra);
			this->panel1->Controls->Add(this->Dihing);
			this->panel1->Controls->Add(this->Manas);
			this->panel1->Controls->Add(this->Cl);
			this->panel1->Controls->Add(this->Kapili);
			this->panel1->Controls->Add(this->Siang);
			this->panel1->Controls->Add(this->Umiam);
			this->panel1->Controls->Add(this->Barak);
			this->panel1->Controls->Add(this->Kameng);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(299, 114);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1035, 615);
			this->panel1->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Blue;
			this->label12->Location = System::Drawing::Point(490, 1077);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 11);
			this->label12->TabIndex = 203;
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Blue;
			this->label11->Location = System::Drawing::Point(432, 1153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 11);
			this->label11->TabIndex = 202;
			this->label11->Visible = false;
			// 
			// label142
			// 
			this->label142->BackColor = System::Drawing::Color::Blue;
			this->label142->Location = System::Drawing::Point(487, 958);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(36, 11);
			this->label142->TabIndex = 201;
			this->label142->Visible = false;
			// 
			// label141
			// 
			this->label141->BackColor = System::Drawing::Color::Blue;
			this->label141->Location = System::Drawing::Point(519, 1108);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(14, 25);
			this->label141->TabIndex = 200;
			this->label141->Visible = false;
			// 
			// label139
			// 
			this->label139->BackColor = System::Drawing::Color::Blue;
			this->label139->Location = System::Drawing::Point(515, 1086);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(14, 22);
			this->label139->TabIndex = 198;
			this->label139->Visible = false;
			// 
			// label137
			// 
			this->label137->BackColor = System::Drawing::Color::Blue;
			this->label137->Location = System::Drawing::Point(509, 1079);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(14, 14);
			this->label137->TabIndex = 196;
			this->label137->Visible = false;
			// 
			// label136
			// 
			this->label136->BackColor = System::Drawing::Color::Blue;
			this->label136->Location = System::Drawing::Point(517, 1071);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(14, 15);
			this->label136->TabIndex = 195;
			this->label136->Visible = false;
			// 
			// label134
			// 
			this->label134->BackColor = System::Drawing::Color::Blue;
			this->label134->Location = System::Drawing::Point(523, 1051);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(14, 20);
			this->label134->TabIndex = 193;
			this->label134->Visible = false;
			// 
			// label132
			// 
			this->label132->BackColor = System::Drawing::Color::Blue;
			this->label132->Location = System::Drawing::Point(521, 1032);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(14, 19);
			this->label132->TabIndex = 191;
			this->label132->Visible = false;
			// 
			// label130
			// 
			this->label130->BackColor = System::Drawing::Color::Blue;
			this->label130->Location = System::Drawing::Point(517, 1018);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(14, 14);
			this->label130->TabIndex = 189;
			this->label130->Visible = false;
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::Blue;
			this->label129->Location = System::Drawing::Point(517, 1007);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(14, 14);
			this->label129->TabIndex = 188;
			this->label129->Visible = false;
			// 
			// label127
			// 
			this->label127->BackColor = System::Drawing::Color::Blue;
			this->label127->Location = System::Drawing::Point(517, 991);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(14, 18);
			this->label127->TabIndex = 186;
			this->label127->Visible = false;
			// 
			// label126
			// 
			this->label126->BackColor = System::Drawing::Color::Blue;
			this->label126->Location = System::Drawing::Point(519, 974);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(14, 17);
			this->label126->TabIndex = 185;
			this->label126->Visible = false;
			// 
			// label124
			// 
			this->label124->BackColor = System::Drawing::Color::Blue;
			this->label124->Location = System::Drawing::Point(519, 958);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(14, 16);
			this->label124->TabIndex = 183;
			this->label124->Visible = false;
			// 
			// label123
			// 
			this->label123->BackColor = System::Drawing::Color::Blue;
			this->label123->Location = System::Drawing::Point(512, 938);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(14, 20);
			this->label123->TabIndex = 182;
			this->label123->Visible = false;
			// 
			// label121
			// 
			this->label121->BackColor = System::Drawing::Color::Blue;
			this->label121->Location = System::Drawing::Point(509, 919);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(14, 22);
			this->label121->TabIndex = 180;
			this->label121->Visible = false;
			// 
			// label119
			// 
			this->label119->BackColor = System::Drawing::Color::Blue;
			this->label119->Location = System::Drawing::Point(501, 905);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(14, 14);
			this->label119->TabIndex = 178;
			this->label119->Visible = false;
			// 
			// label117
			// 
			this->label117->BackColor = System::Drawing::Color::Blue;
			this->label117->Location = System::Drawing::Point(498, 891);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(14, 14);
			this->label117->TabIndex = 176;
			this->label117->Visible = false;
			// 
			// label116
			// 
			this->label116->BackColor = System::Drawing::Color::Blue;
			this->label116->Location = System::Drawing::Point(657, 909);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(21, 16);
			this->label116->TabIndex = 175;
			this->label116->Visible = false;
			// 
			// label114
			// 
			this->label114->BackColor = System::Drawing::Color::Blue;
			this->label114->Location = System::Drawing::Point(522, 853);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(19, 14);
			this->label114->TabIndex = 173;
			this->label114->Visible = false;
			// 
			// label112
			// 
			this->label112->BackColor = System::Drawing::Color::Blue;
			this->label112->Location = System::Drawing::Point(538, 849);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(23, 14);
			this->label112->TabIndex = 171;
			this->label112->Visible = false;
			// 
			// label110
			// 
			this->label110->BackColor = System::Drawing::Color::Blue;
			this->label110->Location = System::Drawing::Point(560, 840);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(20, 14);
			this->label110->TabIndex = 169;
			this->label110->Visible = false;
			// 
			// label109
			// 
			this->label109->BackColor = System::Drawing::Color::Blue;
			this->label109->Location = System::Drawing::Point(507, 864);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(18, 14);
			this->label109->TabIndex = 168;
			this->label109->Visible = false;
			// 
			// label107
			// 
			this->label107->BackColor = System::Drawing::Color::Blue;
			this->label107->Location = System::Drawing::Point(498, 879);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(14, 14);
			this->label107->TabIndex = 166;
			this->label107->Visible = false;
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::Blue;
			this->label106->Location = System::Drawing::Point(522, 795);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(17, 15);
			this->label106->TabIndex = 165;
			this->label106->Visible = false;
			// 
			// label104
			// 
			this->label104->BackColor = System::Drawing::Color::Blue;
			this->label104->Location = System::Drawing::Point(512, 784);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(14, 14);
			this->label104->TabIndex = 163;
			this->label104->Visible = false;
			// 
			// label102
			// 
			this->label102->BackColor = System::Drawing::Color::Blue;
			this->label102->Location = System::Drawing::Point(525, 756);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(14, 14);
			this->label102->TabIndex = 161;
			this->label102->Visible = false;
			// 
			// label100
			// 
			this->label100->BackColor = System::Drawing::Color::Blue;
			this->label100->Location = System::Drawing::Point(511, 769);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(14, 14);
			this->label100->TabIndex = 159;
			this->label100->Visible = false;
			// 
			// label99
			// 
			this->label99->BackColor = System::Drawing::Color::Blue;
			this->label99->Location = System::Drawing::Point(495, 787);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(14, 14);
			this->label99->TabIndex = 158;
			this->label99->Visible = false;
			// 
			// label97
			// 
			this->label97->BackColor = System::Drawing::Color::Blue;
			this->label97->Location = System::Drawing::Point(482, 798);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(7, 7);
			this->label97->TabIndex = 156;
			this->label97->Visible = false;
			// 
			// label96
			// 
			this->label96->BackColor = System::Drawing::Color::Blue;
			this->label96->Location = System::Drawing::Point(482, 805);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(23, 11);
			this->label96->TabIndex = 155;
			this->label96->Visible = false;
			// 
			// label95
			// 
			this->label95->BackColor = System::Drawing::Color::Blue;
			this->label95->Location = System::Drawing::Point(511, 805);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(30, 11);
			this->label95->TabIndex = 154;
			this->label95->Visible = false;
			// 
			// label93
			// 
			this->label93->BackColor = System::Drawing::Color::Blue;
			this->label93->Location = System::Drawing::Point(531, 770);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(14, 18);
			this->label93->TabIndex = 152;
			this->label93->Visible = false;
			// 
			// label91
			// 
			this->label91->BackColor = System::Drawing::Color::Blue;
			this->label91->Location = System::Drawing::Point(535, 788);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(14, 22);
			this->label91->TabIndex = 150;
			this->label91->Visible = false;
			// 
			// label88
			// 
			this->label88->BackColor = System::Drawing::Color::Blue;
			this->label88->Location = System::Drawing::Point(535, 738);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(19, 18);
			this->label88->TabIndex = 147;
			this->label88->Visible = false;
			// 
			// label86
			// 
			this->label86->BackColor = System::Drawing::Color::Blue;
			this->label86->Location = System::Drawing::Point(553, 723);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(20, 15);
			this->label86->TabIndex = 145;
			this->label86->Visible = false;
			// 
			// label84
			// 
			this->label84->BackColor = System::Drawing::Color::Blue;
			this->label84->Location = System::Drawing::Point(568, 707);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(20, 16);
			this->label84->TabIndex = 143;
			this->label84->Visible = false;
			// 
			// label83
			// 
			this->label83->BackColor = System::Drawing::Color::Blue;
			this->label83->Location = System::Drawing::Point(540, 810);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(21, 14);
			this->label83->TabIndex = 142;
			this->label83->Visible = false;
			// 
			// label81
			// 
			this->label81->BackColor = System::Drawing::Color::Blue;
			this->label81->Location = System::Drawing::Point(556, 825);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(24, 14);
			this->label81->TabIndex = 140;
			this->label81->Visible = false;
			// 
			// label79
			// 
			this->label79->BackColor = System::Drawing::Color::Blue;
			this->label79->Location = System::Drawing::Point(578, 832);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(89, 11);
			this->label79->TabIndex = 138;
			this->label79->Visible = false;
			// 
			// label74
			// 
			this->label74->BackColor = System::Drawing::Color::Blue;
			this->label74->Location = System::Drawing::Point(417, 1007);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(29, 11);
			this->label74->TabIndex = 133;
			this->label74->Visible = false;
			// 
			// label73
			// 
			this->label73->BackColor = System::Drawing::Color::Blue;
			this->label73->Location = System::Drawing::Point(417, 1031);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(29, 11);
			this->label73->TabIndex = 132;
			this->label73->Visible = false;
			// 
			// label72
			// 
			this->label72->BackColor = System::Drawing::Color::Blue;
			this->label72->Location = System::Drawing::Point(336, 1132);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(21, 11);
			this->label72->TabIndex = 131;
			this->label72->Visible = false;
			// 
			// label71
			// 
			this->label71->BackColor = System::Drawing::Color::Blue;
			this->label71->Location = System::Drawing::Point(360, 1139);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(10, 10);
			this->label71->TabIndex = 130;
			this->label71->Visible = false;
			// 
			// label70
			// 
			this->label70->BackColor = System::Drawing::Color::Blue;
			this->label70->Location = System::Drawing::Point(371, 1150);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(10, 10);
			this->label70->TabIndex = 129;
			this->label70->Visible = false;
			// 
			// label69
			// 
			this->label69->BackColor = System::Drawing::Color::Blue;
			this->label69->Location = System::Drawing::Point(512, 1132);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(21, 11);
			this->label69->TabIndex = 128;
			this->label69->Visible = false;
			// 
			// label68
			// 
			this->label68->BackColor = System::Drawing::Color::Blue;
			this->label68->Location = System::Drawing::Point(657, 1163);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(13, 11);
			this->label68->TabIndex = 127;
			this->label68->Visible = false;
			// 
			// label67
			// 
			this->label67->BackColor = System::Drawing::Color::Blue;
			this->label67->Location = System::Drawing::Point(609, 1163);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(58, 11);
			this->label67->TabIndex = 126;
			this->label67->Visible = false;
			// 
			// label66
			// 
			this->label66->BackColor = System::Drawing::Color::Blue;
			this->label66->Location = System::Drawing::Point(590, 1160);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(21, 11);
			this->label66->TabIndex = 125;
			this->label66->Visible = false;
			// 
			// label65
			// 
			this->label65->BackColor = System::Drawing::Color::Blue;
			this->label65->Location = System::Drawing::Point(572, 1153);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(21, 11);
			this->label65->TabIndex = 124;
			this->label65->Visible = false;
			// 
			// label64
			// 
			this->label64->BackColor = System::Drawing::Color::Blue;
			this->label64->Location = System::Drawing::Point(556, 1143);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(17, 11);
			this->label64->TabIndex = 123;
			this->label64->Visible = false;
			// 
			// label63
			// 
			this->label63->BackColor = System::Drawing::Color::Blue;
			this->label63->Location = System::Drawing::Point(532, 1132);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(26, 11);
			this->label63->TabIndex = 122;
			this->label63->Visible = false;
			// 
			// label62
			// 
			this->label62->BackColor = System::Drawing::Color::Blue;
			this->label62->Location = System::Drawing::Point(482, 1132);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(33, 11);
			this->label62->TabIndex = 121;
			this->label62->Visible = false;
			// 
			// label60
			// 
			this->label60->BackColor = System::Drawing::Color::Blue;
			this->label60->Location = System::Drawing::Point(374, 1153);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(61, 11);
			this->label60->TabIndex = 120;
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->BackColor = System::Drawing::Color::Blue;
			this->label61->Location = System::Drawing::Point(807, 932);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(11, 40);
			this->label61->TabIndex = 119;
			this->label61->Visible = false;
			// 
			// label59
			// 
			this->label59->BackColor = System::Drawing::Color::Blue;
			this->label59->Location = System::Drawing::Point(789, 919);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(27, 11);
			this->label59->TabIndex = 117;
			this->label59->Visible = false;
			// 
			// label58
			// 
			this->label58->BackColor = System::Drawing::Color::Blue;
			this->label58->Location = System::Drawing::Point(766, 910);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(26, 11);
			this->label58->TabIndex = 116;
			this->label58->Visible = false;
			// 
			// label43
			// 
			this->label43->BackColor = System::Drawing::Color::Blue;
			this->label43->Location = System::Drawing::Point(657, 910);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(13, 11);
			this->label43->TabIndex = 101;
			this->label43->Visible = false;
			// 
			// label41
			// 
			this->label41->BackColor = System::Drawing::Color::Blue;
			this->label41->Location = System::Drawing::Point(654, 689);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(15, 21);
			this->label41->TabIndex = 99;
			this->label41->Visible = false;
			// 
			// label40
			// 
			this->label40->BackColor = System::Drawing::Color::Blue;
			this->label40->Location = System::Drawing::Point(575, 688);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(18, 19);
			this->label40->TabIndex = 98;
			this->label40->Visible = false;
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::Color::Blue;
			this->label39->Location = System::Drawing::Point(343, 897);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(34, 11);
			this->label39->TabIndex = 97;
			this->label39->Visible = false;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::Color::Blue;
			this->label37->Location = System::Drawing::Point(339, 911);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(11, 25);
			this->label37->TabIndex = 95;
			this->label37->Visible = false;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::Blue;
			this->label30->Location = System::Drawing::Point(374, 889);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(61, 11);
			this->label30->TabIndex = 88;
			this->label30->Visible = false;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::Blue;
			this->label29->Location = System::Drawing::Point(432, 889);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(70, 11);
			this->label29->TabIndex = 87;
			this->label29->Visible = false;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Blue;
			this->label24->Location = System::Drawing::Point(339, 1019);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(78, 11);
			this->label24->TabIndex = 82;
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Blue;
			this->label23->Location = System::Drawing::Point(450, 1019);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(73, 11);
			this->label23->TabIndex = 81;
			this->label23->Visible = false;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Blue;
			this->label21->Location = System::Drawing::Point(810, 928);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(94, 11);
			this->label21->TabIndex = 79;
			this->label21->Visible = false;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Blue;
			this->label15->Location = System::Drawing::Point(660, 689);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 11);
			this->label15->TabIndex = 73;
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Blue;
			this->label14->Location = System::Drawing::Point(725, 908);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 11);
			this->label14->TabIndex = 72;
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(671, 908);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 11);
			this->label13->TabIndex = 71;
			this->label13->Visible = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(592, 689);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 11);
			this->label10->TabIndex = 68;
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(339, 932);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(11, 85);
			this->label9->TabIndex = 67;
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(339, 1021);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(11, 112);
			this->label8->TabIndex = 66;
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(657, 925);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(11, 239);
			this->label7->TabIndex = 65;
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(575, 486);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 57);
			this->label6->TabIndex = 64;
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(575, 543);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 91);
			this->label5->TabIndex = 63;
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(575, 634);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 54);
			this->label4->TabIndex = 62;
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(656, 710);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 127);
			this->label3->TabIndex = 61;
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(656, 837);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(11, 82);
			this->label2->TabIndex = 60;
			this->label2->Visible = false;
			// 
			// Kvgate
			// 
			this->Kvgate->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Kvgate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Kvgate->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kvgate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Kvgate->Location = System::Drawing::Point(593, 1190);
			this->Kvgate->Name = L"Kvgate";
			this->Kvgate->Size = System::Drawing::Size(93, 35);
			this->Kvgate->TabIndex = 59;
			this->Kvgate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Kvgate->Click += gcnew System::EventHandler(this, &main::Kvgate_Click);
			this->Kvgate->MouseLeave += gcnew System::EventHandler(this, &main::Kvgate_MouseLeave);
			this->Kvgate->MouseHover += gcnew System::EventHandler(this, &main::Kvgate_MouseHover);
			// 
			// Mandir
			// 
			this->Mandir->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Mandir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Mandir->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mandir->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mandir->Location = System::Drawing::Point(252, 1146);
			this->Mandir->Name = L"Mandir";
			this->Mandir->Size = System::Drawing::Size(40, 22);
			this->Mandir->TabIndex = 58;
			this->Mandir->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Mandir->Click += gcnew System::EventHandler(this, &main::Mandir_Click);
			this->Mandir->MouseLeave += gcnew System::EventHandler(this, &main::Mandir_MouseLeave);
			this->Mandir->MouseHover += gcnew System::EventHandler(this, &main::Mandir_MouseHover);
			// 
			// Splant
			// 
			this->Splant->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Splant->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Splant->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Splant->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Splant->Location = System::Drawing::Point(1091, 788);
			this->Splant->Name = L"Splant";
			this->Splant->Size = System::Drawing::Size(55, 68);
			this->Splant->TabIndex = 57;
			this->Splant->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Splant->Click += gcnew System::EventHandler(this, &main::Splant_Click);
			this->Splant->MouseLeave += gcnew System::EventHandler(this, &main::Splant_MouseLeave);
			this->Splant->MouseHover += gcnew System::EventHandler(this, &main::Splant_MouseHover);
			// 
			// Newsac
			// 
			this->Newsac->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Newsac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Newsac->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Newsac->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Newsac->Location = System::Drawing::Point(835, 594);
			this->Newsac->Name = L"Newsac";
			this->Newsac->Size = System::Drawing::Size(58, 57);
			this->Newsac->TabIndex = 56;
			this->Newsac->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Newsac->Click += gcnew System::EventHandler(this, &main::Newsac_Click);
			this->Newsac->MouseLeave += gcnew System::EventHandler(this, &main::Newsac_MouseLeave);
			this->Newsac->MouseHover += gcnew System::EventHandler(this, &main::Newsac_MouseHover);
			// 
			// swim
			// 
			this->swim->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->swim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->swim->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->swim->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->swim->Location = System::Drawing::Point(831, 664);
			this->swim->Name = L"swim";
			this->swim->Size = System::Drawing::Size(47, 33);
			this->swim->TabIndex = 55;
			this->swim->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->swim->Click += gcnew System::EventHandler(this, &main::swim_Click);
			this->swim->MouseLeave += gcnew System::EventHandler(this, &main::swim_MouseLeave);
			this->swim->MouseHover += gcnew System::EventHandler(this, &main::swim_MouseHover);
			// 
			// Tennis
			// 
			this->Tennis->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Tennis->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Tennis->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tennis->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Tennis->Location = System::Drawing::Point(591, 653);
			this->Tennis->Name = L"Tennis";
			this->Tennis->Size = System::Drawing::Size(78, 36);
			this->Tennis->TabIndex = 54;
			this->Tennis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Tennis->Click += gcnew System::EventHandler(this, &main::Tennis_Click);
			this->Tennis->MouseLeave += gcnew System::EventHandler(this, &main::Tennis_MouseLeave);
			this->Tennis->MouseHover += gcnew System::EventHandler(this, &main::Tennis_MouseHover);
			// 
			// Sport
			// 
			this->Sport->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Sport->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sport->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sport->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Sport->Location = System::Drawing::Point(687, 564);
			this->Sport->Name = L"Sport";
			this->Sport->Size = System::Drawing::Size(129, 125);
			this->Sport->TabIndex = 53;
			this->Sport->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Sport->Click += gcnew System::EventHandler(this, &main::Sport_Click);
			this->Sport->MouseLeave += gcnew System::EventHandler(this, &main::Sport_MouseLeave);
			this->Sport->MouseHover += gcnew System::EventHandler(this, &main::Sport_MouseHover);
			// 
			// Subbu
			// 
			this->Subbu->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Subbu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Subbu->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Subbu->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Subbu->Location = System::Drawing::Point(594, 565);
			this->Subbu->Name = L"Subbu";
			this->Subbu->Size = System::Drawing::Size(75, 86);
			this->Subbu->TabIndex = 52;
			this->Subbu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Subbu->Click += gcnew System::EventHandler(this, &main::Subbu_Click);
			this->Subbu->MouseLeave += gcnew System::EventHandler(this, &main::Subbu_MouseLeave);
			this->Subbu->MouseHover += gcnew System::EventHandler(this, &main::Subbu_MouseHover);
			// 
			// Dhanno
			// 
			this->Dhanno->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Dhanno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dhanno->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dhanno->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Dhanno->Location = System::Drawing::Point(758, 529);
			this->Dhanno->Name = L"Dhanno";
			this->Dhanno->Size = System::Drawing::Size(58, 25);
			this->Dhanno->TabIndex = 51;
			this->Dhanno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Dhanno->Click += gcnew System::EventHandler(this, &main::Dhanno_Click);
			this->Dhanno->MouseLeave += gcnew System::EventHandler(this, &main::Dhanno_MouseLeave);
			this->Dhanno->MouseHover += gcnew System::EventHandler(this, &main::Dhanno_MouseHover);
			// 
			// Mscholar
			// 
			this->Mscholar->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Mscholar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Mscholar->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mscholar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mscholar->Location = System::Drawing::Point(761, 428);
			this->Mscholar->Name = L"Mscholar";
			this->Mscholar->Size = System::Drawing::Size(55, 91);
			this->Mscholar->TabIndex = 50;
			this->Mscholar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Mscholar->Click += gcnew System::EventHandler(this, &main::Mscholar_Click);
			this->Mscholar->MouseLeave += gcnew System::EventHandler(this, &main::Mscholar_MouseLeave);
			this->Mscholar->MouseHover += gcnew System::EventHandler(this, &main::Mscholar_MouseHover);
			// 
			// Hospital
			// 
			this->Hospital->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Hospital->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Hospital->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hospital->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Hospital->Location = System::Drawing::Point(685, 341);
			this->Hospital->Name = L"Hospital";
			this->Hospital->Size = System::Drawing::Size(71, 42);
			this->Hospital->TabIndex = 49;
			this->Hospital->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Hospital->Click += gcnew System::EventHandler(this, &main::Hospital_Click);
			this->Hospital->MouseLeave += gcnew System::EventHandler(this, &main::Hospital_MouseLeave);
			this->Hospital->MouseHover += gcnew System::EventHandler(this, &main::Hospital_MouseHover);
			// 
			// Guest
			// 
			this->Guest->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Guest->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Guest->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guest->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Guest->Location = System::Drawing::Point(588, 411);
			this->Guest->Name = L"Guest";
			this->Guest->Size = System::Drawing::Size(81, 60);
			this->Guest->TabIndex = 48;
			this->Guest->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Guest->Click += gcnew System::EventHandler(this, &main::Guest_Click);
			this->Guest->MouseLeave += gcnew System::EventHandler(this, &main::Guest_MouseLeave);
			this->Guest->MouseHover += gcnew System::EventHandler(this, &main::Guest_MouseHover);
			// 
			// Maingate
			// 
			this->Maingate->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Maingate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Maingate->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Maingate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Maingate->Location = System::Drawing::Point(133, 314);
			this->Maingate->Name = L"Maingate";
			this->Maingate->Size = System::Drawing::Size(62, 47);
			this->Maingate->TabIndex = 47;
			this->Maingate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Maingate->Click += gcnew System::EventHandler(this, &main::Maingate_Click);
			this->Maingate->MouseLeave += gcnew System::EventHandler(this, &main::Maingate_MouseLeave);
			this->Maingate->MouseHover += gcnew System::EventHandler(this, &main::Maingate_MouseHover);
			// 
			// Complex
			// 
			this->Complex->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Complex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Complex->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Complex->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Complex->Location = System::Drawing::Point(201, 428);
			this->Complex->Name = L"Complex";
			this->Complex->Size = System::Drawing::Size(50, 33);
			this->Complex->TabIndex = 46;
			this->Complex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Complex->Click += gcnew System::EventHandler(this, &main::Complex_Click);
			this->Complex->MouseLeave += gcnew System::EventHandler(this, &main::Complex_MouseLeave);
			this->Complex->MouseHover += gcnew System::EventHandler(this, &main::Complex_MouseHover);
			// 
			// Viewpoint
			// 
			this->Viewpoint->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Viewpoint->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Viewpoint->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Viewpoint->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Viewpoint->Location = System::Drawing::Point(429, 461);
			this->Viewpoint->Name = L"Viewpoint";
			this->Viewpoint->Size = System::Drawing::Size(66, 52);
			this->Viewpoint->TabIndex = 45;
			this->Viewpoint->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Viewpoint->Click += gcnew System::EventHandler(this, &main::Viewpoint_Click);
			this->Viewpoint->MouseLeave += gcnew System::EventHandler(this, &main::Viewpoint_MouseLeave);
			this->Viewpoint->MouseHover += gcnew System::EventHandler(this, &main::Viewpoint_MouseHover);
			// 
			// Fquarter
			// 
			this->Fquarter->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Fquarter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Fquarter->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fquarter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Fquarter->Location = System::Drawing::Point(525, 398);
			this->Fquarter->Name = L"Fquarter";
			this->Fquarter->Size = System::Drawing::Size(42, 230);
			this->Fquarter->TabIndex = 44;
			this->Fquarter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Fquarter->Click += gcnew System::EventHandler(this, &main::Fquarter_Click);
			this->Fquarter->MouseLeave += gcnew System::EventHandler(this, &main::Fquarter_MouseLeave);
			this->Fquarter->MouseHover += gcnew System::EventHandler(this, &main::Fquarter_MouseHover);
			// 
			// Slake
			// 
			this->Slake->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Slake->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Slake->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Slake->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Slake->Location = System::Drawing::Point(553, 298);
			this->Slake->Name = L"Slake";
			this->Slake->Size = System::Drawing::Size(81, 63);
			this->Slake->TabIndex = 43;
			this->Slake->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Slake->Click += gcnew System::EventHandler(this, &main::Slake_Click);
			this->Slake->MouseLeave += gcnew System::EventHandler(this, &main::Slake_MouseLeave);
			this->Slake->MouseHover += gcnew System::EventHandler(this, &main::Slake_MouseHover);
			// 
			// Dquarter
			// 
			this->Dquarter->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Dquarter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dquarter->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dquarter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Dquarter->Location = System::Drawing::Point(338, 277);
			this->Dquarter->Name = L"Dquarter";
			this->Dquarter->Size = System::Drawing::Size(88, 73);
			this->Dquarter->TabIndex = 42;
			this->Dquarter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Dquarter->Click += gcnew System::EventHandler(this, &main::Dquarter_Click);
			this->Dquarter->MouseLeave += gcnew System::EventHandler(this, &main::Dquarter_MouseLeave);
			this->Dquarter->MouseHover += gcnew System::EventHandler(this, &main::Dquarter_MouseHover);
			// 
			// Cfquarter
			// 
			this->Cfquarter->BackColor = System::Drawing::Color::LemonChiffon;
			this->Cfquarter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cfquarter->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cfquarter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cfquarter->Location = System::Drawing::Point(432, 171);
			this->Cfquarter->Name = L"Cfquarter";
			this->Cfquarter->Size = System::Drawing::Size(135, 120);
			this->Cfquarter->TabIndex = 41;
			this->Cfquarter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cfquarter->Click += gcnew System::EventHandler(this, &main::Cfquarter_Click);
			this->Cfquarter->MouseLeave += gcnew System::EventHandler(this, &main::Cfquarter_MouseLeave);
			this->Cfquarter->MouseHover += gcnew System::EventHandler(this, &main::Cfquarter_MouseHover);
			// 
			// Abquarter
			// 
			this->Abquarter->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Abquarter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Abquarter->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Abquarter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Abquarter->Location = System::Drawing::Point(643, 117);
			this->Abquarter->Name = L"Abquarter";
			this->Abquarter->Size = System::Drawing::Size(113, 127);
			this->Abquarter->TabIndex = 40;
			this->Abquarter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Abquarter->Click += gcnew System::EventHandler(this, &main::Abquarter_Click);
			this->Abquarter->MouseLeave += gcnew System::EventHandler(this, &main::Abquarter_MouseLeave);
			this->Abquarter->MouseHover += gcnew System::EventHandler(this, &main::Abquarter_MouseHover);
			// 
			// Aseb
			// 
			this->Aseb->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Aseb->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Aseb->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aseb->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Aseb->Location = System::Drawing::Point(959, 298);
			this->Aseb->Name = L"Aseb";
			this->Aseb->Size = System::Drawing::Size(61, 30);
			this->Aseb->TabIndex = 39;
			this->Aseb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Aseb->Click += gcnew System::EventHandler(this, &main::Aseb_Click);
			this->Aseb->MouseLeave += gcnew System::EventHandler(this, &main::Aseb_MouseLeave);
			this->Aseb->MouseHover += gcnew System::EventHandler(this, &main::Aseb_MouseHover);
			// 
			// As
			// 
			this->As->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->As->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->As->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->As->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->As->Location = System::Drawing::Point(927, 421);
			this->As->Name = L"As";
			this->As->Size = System::Drawing::Size(45, 30);
			this->As->TabIndex = 38;
			this->As->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->As->Click += gcnew System::EventHandler(this, &main::As_Click);
			this->As->MouseLeave += gcnew System::EventHandler(this, &main::As_MouseLeave);
			this->As->MouseHover += gcnew System::EventHandler(this, &main::As_MouseHover);
			// 
			// Sacext
			// 
			this->Sacext->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Sacext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sacext->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sacext->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Sacext->Location = System::Drawing::Point(1011, 389);
			this->Sacext->Name = L"Sacext";
			this->Sacext->Size = System::Drawing::Size(60, 110);
			this->Sacext->TabIndex = 37;
			this->Sacext->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Sacext->Click += gcnew System::EventHandler(this, &main::Sacext_Click);
			this->Sacext->MouseLeave += gcnew System::EventHandler(this, &main::Sacext_MouseLeave);
			this->Sacext->MouseHover += gcnew System::EventHandler(this, &main::Sacext_MouseHover);
			// 
			// Bpark
			// 
			this->Bpark->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Bpark->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Bpark->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bpark->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Bpark->Location = System::Drawing::Point(1014, 543);
			this->Bpark->Name = L"Bpark";
			this->Bpark->Size = System::Drawing::Size(75, 131);
			this->Bpark->TabIndex = 36;
			this->Bpark->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Bpark->Click += gcnew System::EventHandler(this, &main::Bpark_Click);
			this->Bpark->MouseLeave += gcnew System::EventHandler(this, &main::Bpark_MouseLeave);
			this->Bpark->MouseHover += gcnew System::EventHandler(this, &main::Bpark_MouseHover);
			// 
			// Faculty
			// 
			this->Faculty->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Faculty->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Faculty->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Faculty->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Faculty->Location = System::Drawing::Point(951, 1011);
			this->Faculty->Name = L"Faculty";
			this->Faculty->Size = System::Drawing::Size(83, 31);
			this->Faculty->TabIndex = 35;
			this->Faculty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Faculty->Click += gcnew System::EventHandler(this, &main::Faculty_Click);
			this->Faculty->MouseLeave += gcnew System::EventHandler(this, &main::Faculty_MouseLeave);
			this->Faculty->MouseHover += gcnew System::EventHandler(this, &main::Faculty_MouseHover);
			// 
			// Conf
			// 
			this->Conf->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Conf->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Conf->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Conf->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Conf->Location = System::Drawing::Point(455, 716);
			this->Conf->Name = L"Conf";
			this->Conf->Size = System::Drawing::Size(40, 21);
			this->Conf->TabIndex = 34;
			this->Conf->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Conf->Click += gcnew System::EventHandler(this, &main::Conf_Click);
			this->Conf->MouseLeave += gcnew System::EventHandler(this, &main::Conf_MouseLeave);
			this->Conf->MouseHover += gcnew System::EventHandler(this, &main::Conf_MouseHover);
			// 
			// Admin
			// 
			this->Admin->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Admin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Admin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Admin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Admin->Location = System::Drawing::Point(429, 756);
			this->Admin->Name = L"Admin";
			this->Admin->Size = System::Drawing::Size(44, 70);
			this->Admin->TabIndex = 33;
			this->Admin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Admin->Click += gcnew System::EventHandler(this, &main::Admin_Click);
			this->Admin->MouseLeave += gcnew System::EventHandler(this, &main::Admin_MouseLeave);
			this->Admin->MouseHover += gcnew System::EventHandler(this, &main::Admin_MouseHover);
			// 
			// Audi
			// 
			this->Audi->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Audi->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Audi->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Audi->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Audi->Location = System::Drawing::Point(499, 716);
			this->Audi->Name = L"Audi";
			this->Audi->Size = System::Drawing::Size(39, 34);
			this->Audi->TabIndex = 32;
			this->Audi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Audi->Click += gcnew System::EventHandler(this, &main::Audi_Click);
			this->Audi->MouseLeave += gcnew System::EventHandler(this, &main::Audi_MouseLeave);
			this->Audi->MouseHover += gcnew System::EventHandler(this, &main::Audi_MouseHover);
			// 
			// Cc
			// 
			this->Cc->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Cc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cc->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cc->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cc->Location = System::Drawing::Point(479, 822);
			this->Cc->Name = L"Cc";
			this->Cc->Size = System::Drawing::Size(59, 34);
			this->Cc->TabIndex = 31;
			this->Cc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cc->Click += gcnew System::EventHandler(this, &main::Cc_Click);
			this->Cc->MouseLeave += gcnew System::EventHandler(this, &main::Cc_MouseLeave);
			this->Cc->MouseHover += gcnew System::EventHandler(this, &main::Cc_MouseHover);
			// 
			// Lecture
			// 
			this->Lecture->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Lecture->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Lecture->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lecture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lecture->Location = System::Drawing::Point(414, 834);
			this->Lecture->Name = L"Lecture";
			this->Lecture->Size = System::Drawing::Size(32, 41);
			this->Lecture->TabIndex = 30;
			this->Lecture->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Lecture->Click += gcnew System::EventHandler(this, &main::Lecture_Click);
			this->Lecture->MouseLeave += gcnew System::EventHandler(this, &main::Lecture_MouseLeave);
			this->Lecture->MouseHover += gcnew System::EventHandler(this, &main::Lecture_MouseHover);
			// 
			// Workshop
			// 
			this->Workshop->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Workshop->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Workshop->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Workshop->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Workshop->Location = System::Drawing::Point(297, 938);
			this->Workshop->Name = L"Workshop";
			this->Workshop->Size = System::Drawing::Size(37, 71);
			this->Workshop->TabIndex = 29;
			this->Workshop->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Workshop->Click += gcnew System::EventHandler(this, &main::Workshop_Click);
			this->Workshop->MouseLeave += gcnew System::EventHandler(this, &main::Workshop_MouseLeave);
			this->Workshop->MouseHover += gcnew System::EventHandler(this, &main::Workshop_MouseHover);
			// 
			// Cricket
			// 
			this->Cricket->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Cricket->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cricket->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cricket->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cricket->Location = System::Drawing::Point(671, 716);
			this->Cricket->Name = L"Cricket";
			this->Cricket->Size = System::Drawing::Size(68, 85);
			this->Cricket->TabIndex = 28;
			this->Cricket->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cricket->Click += gcnew System::EventHandler(this, &main::Cricket_Click);
			this->Cricket->MouseLeave += gcnew System::EventHandler(this, &main::Cricket_MouseLeave);
			this->Cricket->MouseHover += gcnew System::EventHandler(this, &main::Cricket_MouseHover);
			// 
			// Mch
			// 
			this->Mch->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Mch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Mch->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mch->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mch->Location = System::Drawing::Point(831, 787);
			this->Mch->Name = L"Mch";
			this->Mch->Size = System::Drawing::Size(80, 39);
			this->Mch->TabIndex = 27;
			this->Mch->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Mch->Click += gcnew System::EventHandler(this, &main::Mch_Click);
			this->Mch->MouseLeave += gcnew System::EventHandler(this, &main::Mch_MouseLeave);
			this->Mch->MouseHover += gcnew System::EventHandler(this, &main::Mch_MouseHover);
			// 
			// Lohit
			// 
			this->Lohit->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Lohit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Lohit->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lohit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lohit->Location = System::Drawing::Point(758, 769);
			this->Lohit->Name = L"Lohit";
			this->Lohit->Size = System::Drawing::Size(67, 102);
			this->Lohit->TabIndex = 26;
			this->Lohit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Lohit->Click += gcnew System::EventHandler(this, &main::Lohit_Click);
			this->Lohit->MouseLeave += gcnew System::EventHandler(this, &main::Lohit_MouseLeave);
			this->Lohit->MouseHover += gcnew System::EventHandler(this, &main::Lohit_MouseHover);
			// 
			// Dibang
			// 
			this->Dibang->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Dibang->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dibang->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dibang->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Dibang->Location = System::Drawing::Point(684, 925);
			this->Dibang->Name = L"Dibang";
			this->Dibang->Size = System::Drawing::Size(68, 47);
			this->Dibang->TabIndex = 25;
			this->Dibang->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Dibang->Click += gcnew System::EventHandler(this, &main::Dibang_Click);
			this->Dibang->MouseLeave += gcnew System::EventHandler(this, &main::Dibang_MouseLeave);
			this->Dibang->MouseHover += gcnew System::EventHandler(this, &main::Dibang_MouseHover);
			// 
			// Kv
			// 
			this->Kv->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Kv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Kv->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kv->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Kv->Location = System::Drawing::Point(671, 1002);
			this->Kv->Name = L"Kv";
			this->Kv->Size = System::Drawing::Size(68, 130);
			this->Kv->TabIndex = 24;
			this->Kv->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Kv->Click += gcnew System::EventHandler(this, &main::Kv_Click);
			this->Kv->MouseLeave += gcnew System::EventHandler(this, &main::Kv_MouseLeave);
			this->Kv->MouseHover += gcnew System::EventHandler(this, &main::Kv_MouseHover);
			// 
			// Ce
			// 
			this->Ce->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Ce->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ce->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ce->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Ce->Location = System::Drawing::Point(450, 1110);
			this->Ce->Name = L"Ce";
			this->Ce->Size = System::Drawing::Size(44, 22);
			this->Ce->TabIndex = 23;
			this->Ce->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Ce->Click += gcnew System::EventHandler(this, &main::Ce_Click);
			this->Ce->MouseLeave += gcnew System::EventHandler(this, &main::Ce_MouseLeave);
			this->Ce->MouseHover += gcnew System::EventHandler(this, &main::Ce_MouseHover);
			// 
			// Bt
			// 
			this->Bt->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Bt->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Bt->Location = System::Drawing::Point(451, 1057);
			this->Bt->Name = L"Bt";
			this->Bt->Size = System::Drawing::Size(44, 44);
			this->Bt->TabIndex = 22;
			this->Bt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Bt->Click += gcnew System::EventHandler(this, &main::Bt_Click);
			this->Bt->MouseLeave += gcnew System::EventHandler(this, &main::Bt_MouseLeave);
			this->Bt->MouseHover += gcnew System::EventHandler(this, &main::Bt_MouseHover);
			// 
			// Ch
			// 
			this->Ch->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Ch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ch->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ch->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Ch->Location = System::Drawing::Point(450, 1031);
			this->Ch->Name = L"Ch";
			this->Ch->Size = System::Drawing::Size(65, 26);
			this->Ch->TabIndex = 21;
			this->Ch->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Ch->Click += gcnew System::EventHandler(this, &main::Ch_Click);
			this->Ch->MouseLeave += gcnew System::EventHandler(this, &main::Ch_MouseLeave);
			this->Ch->MouseHover += gcnew System::EventHandler(this, &main::Ch_MouseHover);
			// 
			// Eee
			// 
			this->Eee->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Eee->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Eee->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eee->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Eee->Location = System::Drawing::Point(450, 987);
			this->Eee->Name = L"Eee";
			this->Eee->Size = System::Drawing::Size(52, 22);
			this->Eee->TabIndex = 20;
			this->Eee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Eee->Click += gcnew System::EventHandler(this, &main::Eee_Click);
			this->Eee->MouseLeave += gcnew System::EventHandler(this, &main::Eee_MouseLeave);
			this->Eee->MouseHover += gcnew System::EventHandler(this, &main::Eee_MouseHover);
			// 
			// Cse
			// 
			this->Cse->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Cse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cse->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cse->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cse->Location = System::Drawing::Point(450, 960);
			this->Cse->Name = L"Cse";
			this->Cse->Size = System::Drawing::Size(45, 24);
			this->Cse->TabIndex = 19;
			this->Cse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cse->Click += gcnew System::EventHandler(this, &main::Cse_Click);
			this->Cse->MouseLeave += gcnew System::EventHandler(this, &main::Cse_MouseLeave);
			this->Cse->MouseHover += gcnew System::EventHandler(this, &main::Cse_MouseHover);
			// 
			// Cet
			// 
			this->Cet->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Cet->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cet->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cet->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cet->Location = System::Drawing::Point(450, 938);
			this->Cet->Name = L"Cet";
			this->Cet->Size = System::Drawing::Size(40, 21);
			this->Cet->TabIndex = 18;
			this->Cet->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cet->Click += gcnew System::EventHandler(this, &main::Cet_Click);
			this->Cet->MouseLeave += gcnew System::EventHandler(this, &main::Cet_MouseLeave);
			this->Cet->MouseHover += gcnew System::EventHandler(this, &main::Cet_MouseHover);
			// 
			// Me
			// 
			this->Me->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Me->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Me->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Me->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Me->Location = System::Drawing::Point(352, 919);
			this->Me->Name = L"Me";
			this->Me->Size = System::Drawing::Size(76, 40);
			this->Me->TabIndex = 17;
			this->Me->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Me->Click += gcnew System::EventHandler(this, &main::Me_Click);
			this->Me->MouseLeave += gcnew System::EventHandler(this, &main::Me_MouseLeave);
			this->Me->MouseHover += gcnew System::EventHandler(this, &main::Me_MouseHover);
			// 
			// Hss
			// 
			this->Hss->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Hss->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Hss->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hss->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Hss->Location = System::Drawing::Point(368, 987);
			this->Hss->Name = L"Hss";
			this->Hss->Size = System::Drawing::Size(42, 22);
			this->Hss->TabIndex = 16;
			this->Hss->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Hss->Click += gcnew System::EventHandler(this, &main::Hss_Click);
			this->Hss->MouseLeave += gcnew System::EventHandler(this, &main::Hss_MouseLeave);
			this->Hss->MouseHover += gcnew System::EventHandler(this, &main::Hss_MouseHover);
			// 
			// Ph
			// 
			this->Ph->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Ph->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ph->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ph->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Ph->Location = System::Drawing::Point(352, 1110);
			this->Ph->Name = L"Ph";
			this->Ph->Size = System::Drawing::Size(58, 22);
			this->Ph->TabIndex = 15;
			this->Ph->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Ph->Click += gcnew System::EventHandler(this, &main::Ph_Click);
			this->Ph->MouseLeave += gcnew System::EventHandler(this, &main::Ph_MouseLeave);
			this->Ph->MouseHover += gcnew System::EventHandler(this, &main::Ph_MouseHover);
			// 
			// Ma
			// 
			this->Ma->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Ma->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ma->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Ma->Location = System::Drawing::Point(352, 959);
			this->Ma->Name = L"Ma";
			this->Ma->Size = System::Drawing::Size(92, 25);
			this->Ma->TabIndex = 14;
			this->Ma->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Ma->Click += gcnew System::EventHandler(this, &main::Ma_Click);
			this->Ma->MouseLeave += gcnew System::EventHandler(this, &main::Ma_MouseLeave);
			this->Ma->MouseHover += gcnew System::EventHandler(this, &main::Ma_MouseHover);
			// 
			// Dd
			// 
			this->Dd->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Dd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dd->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dd->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Dd->Location = System::Drawing::Point(450, 910);
			this->Dd->Name = L"Dd";
			this->Dd->Size = System::Drawing::Size(53, 27);
			this->Dd->TabIndex = 12;
			this->Dd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Dd->Click += gcnew System::EventHandler(this, &main::Dd_Click);
			this->Dd->MouseLeave += gcnew System::EventHandler(this, &main::Dd_MouseLeave);
			this->Dd->MouseHover += gcnew System::EventHandler(this, &main::Dd_MouseHover);
			// 
			// Brahmaputra
			// 
			this->Brahmaputra->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Brahmaputra->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Brahmaputra->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Brahmaputra->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Brahmaputra->Location = System::Drawing::Point(811, 976);
			this->Brahmaputra->Name = L"Brahmaputra";
			this->Brahmaputra->Size = System::Drawing::Size(93, 53);
			this->Brahmaputra->TabIndex = 11;
			this->Brahmaputra->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Brahmaputra->Click += gcnew System::EventHandler(this, &main::Brahmaputra_Click);
			this->Brahmaputra->MouseLeave += gcnew System::EventHandler(this, &main::Brahmaputra_MouseLeave);
			this->Brahmaputra->MouseHover += gcnew System::EventHandler(this, &main::Brahmaputra_MouseHover);
			// 
			// Dihing
			// 
			this->Dihing->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Dihing->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dihing->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dihing->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Dihing->Location = System::Drawing::Point(843, 887);
			this->Dihing->Name = L"Dihing";
			this->Dihing->Size = System::Drawing::Size(68, 34);
			this->Dihing->TabIndex = 10;
			this->Dihing->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Dihing->Click += gcnew System::EventHandler(this, &main::Dihing_Click);
			this->Dihing->MouseLeave += gcnew System::EventHandler(this, &main::Dihing_MouseLeave);
			this->Dihing->MouseHover += gcnew System::EventHandler(this, &main::Dihing_MouseHover);
			// 
			// Manas
			// 
			this->Manas->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Manas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Manas->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Manas->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Manas->Location = System::Drawing::Point(843, 837);
			this->Manas->Name = L"Manas";
			this->Manas->Size = System::Drawing::Size(68, 34);
			this->Manas->TabIndex = 9;
			this->Manas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Manas->Click += gcnew System::EventHandler(this, &main::Manas_Click);
			this->Manas->MouseLeave += gcnew System::EventHandler(this, &main::Manas_MouseLeave);
			this->Manas->MouseHover += gcnew System::EventHandler(this, &main::Manas_MouseHover);
			// 
			// Cl
			// 
			this->Cl->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Cl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cl->Location = System::Drawing::Point(349, 1031);
			this->Cl->Name = L"Cl";
			this->Cl->Size = System::Drawing::Size(67, 70);
			this->Cl->TabIndex = 8;
			this->Cl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cl->Click += gcnew System::EventHandler(this, &main::Cl_Click);
			this->Cl->MouseLeave += gcnew System::EventHandler(this, &main::Cl_MouseLeave);
			this->Cl->MouseHover += gcnew System::EventHandler(this, &main::Cl_MouseHover);
			// 
			// Kapili
			// 
			this->Kapili->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Kapili->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Kapili->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kapili->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Kapili->Location = System::Drawing::Point(684, 865);
			this->Kapili->Name = L"Kapili";
			this->Kapili->Size = System::Drawing::Size(55, 43);
			this->Kapili->TabIndex = 7;
			this->Kapili->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Kapili->Click += gcnew System::EventHandler(this, &main::Kapili_Click);
			this->Kapili->MouseLeave += gcnew System::EventHandler(this, &main::Kapili_MouseLeave);
			this->Kapili->MouseHover += gcnew System::EventHandler(this, &main::Kapili_MouseHover);
			// 
			// Siang
			// 
			this->Siang->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Siang->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Siang->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Siang->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Siang->Location = System::Drawing::Point(684, 822);
			this->Siang->Name = L"Siang";
			this->Siang->Size = System::Drawing::Size(68, 34);
			this->Siang->TabIndex = 6;
			this->Siang->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Siang->Click += gcnew System::EventHandler(this, &main::Siang_Click);
			this->Siang->MouseLeave += gcnew System::EventHandler(this, &main::Siang_MouseLeave);
			this->Siang->MouseHover += gcnew System::EventHandler(this, &main::Siang_MouseHover);
			// 
			// Umiam
			// 
			this->Umiam->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Umiam->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Umiam->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Umiam->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Umiam->Location = System::Drawing::Point(987, 874);
			this->Umiam->Name = L"Umiam";
			this->Umiam->Size = System::Drawing::Size(68, 34);
			this->Umiam->TabIndex = 5;
			this->Umiam->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Umiam->Click += gcnew System::EventHandler(this, &main::Umiam_Click);
			this->Umiam->MouseLeave += gcnew System::EventHandler(this, &main::Umiam_MouseLeave);
			this->Umiam->MouseHover += gcnew System::EventHandler(this, &main::Umiam_MouseHover);
			// 
			// Barak
			// 
			this->Barak->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Barak->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Barak->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Barak->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Barak->Location = System::Drawing::Point(987, 809);
			this->Barak->Name = L"Barak";
			this->Barak->Size = System::Drawing::Size(68, 34);
			this->Barak->TabIndex = 4;
			this->Barak->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Barak->Click += gcnew System::EventHandler(this, &main::Barak_Click);
			this->Barak->MouseLeave += gcnew System::EventHandler(this, &main::Barak_MouseLeave);
			this->Barak->MouseHover += gcnew System::EventHandler(this, &main::Barak_MouseHover);
			// 
			// Kameng
			// 
			this->Kameng->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Kameng->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Kameng->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kameng->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Kameng->Location = System::Drawing::Point(987, 756);
			this->Kameng->Name = L"Kameng";
			this->Kameng->Size = System::Drawing::Size(68, 34);
			this->Kameng->TabIndex = 3;
			this->Kameng->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Kameng->Click += gcnew System::EventHandler(this, &main::Kameng_Click);
			this->Kameng->MouseLeave += gcnew System::EventHandler(this, &main::Kameng_MouseLeave);
			this->Kameng->MouseHover += gcnew System::EventHandler(this, &main::Kameng_MouseHover);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1172, 1488);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &main::pictureBox1_Click);
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Blue;
			this->label17->Location = System::Drawing::Point(426, 897);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(18, 14);
			this->label17->TabIndex = 204;
			this->label17->Visible = false;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->ClientSize = System::Drawing::Size(1350, 733);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"main";
			this->Text = L"Naksha:IITG Map";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {
			
				 Audi->Parent = pictureBox1;
				 Audi->BackColor = Color::Transparent;
				 Abquarter->Parent = pictureBox1;
				 Abquarter->BackColor = Color::Transparent;
				 Admin->Parent = pictureBox1;
				 Admin->BackColor = Color::Transparent;
				 As->Parent = pictureBox1;
				 As->BackColor = Color::Transparent;
				 Aseb->Parent = pictureBox1;
				 Aseb->BackColor = Color::Transparent;
				 Barak->Parent = pictureBox1;
				 Barak->BackColor = Color::Transparent;
				 Bpark->Parent = pictureBox1;
				 Bpark->BackColor = Color::Transparent;
				 Brahmaputra->Parent = pictureBox1;
				 Brahmaputra->BackColor = Color::Transparent;
				 Bt->Parent = pictureBox1;
				 Bt->BackColor = Color::Transparent;
				 Ce->Parent = pictureBox1;
				 Ce->BackColor = Color::Transparent;
				 Cet->Parent = pictureBox1;
				 Cet->BackColor = Color::Transparent;
				 Cfquarter->Parent = pictureBox1;
				 Cfquarter->BackColor = Color::Transparent;
				 Ch->Parent = pictureBox1;
				 Ch->BackColor = Color::Transparent;
				 Cl->Parent = pictureBox1;
				 Cl->BackColor = Color::Transparent;
				 Complex->Parent = pictureBox1;
				 Complex->BackColor = Color::Transparent;
				 Conf->Parent = pictureBox1;
				 Conf->BackColor = Color::Transparent;
				 Cricket->Parent = pictureBox1;
				 Cricket->BackColor = Color::Transparent;
				 Cse->Parent = pictureBox1;
				 Cse->BackColor = Color::Transparent;
				 Dibang->Parent = pictureBox1;
				 Dibang->BackColor = Color::Transparent;
				 Dhanno->Parent = pictureBox1;
				 Dhanno->BackColor = Color::Transparent;
				 Dihing->Parent = pictureBox1;
				 Dihing->BackColor = Color::Transparent;
				 Dquarter->Parent = pictureBox1;
				 Dquarter->BackColor = Color::Transparent;
				 Eee->Parent = pictureBox1;
				 Eee->BackColor = Color::Transparent;
				 Faculty->Parent = pictureBox1;
				 Faculty->BackColor = Color::Transparent;
				 Fquarter->Parent = pictureBox1;
				 Fquarter->BackColor = Color::Transparent;
				 Guest->Parent = pictureBox1;
				 Guest->BackColor = Color::Transparent;
				 Hospital->Parent = pictureBox1;
				 Hospital->BackColor = Color::Transparent;
				 Hss->Parent = pictureBox1;
				 Hss->BackColor = Color::Transparent;
				 Kameng->Parent = pictureBox1;
				 Kameng->BackColor = Color::Transparent;
				 Kapili->Parent = pictureBox1;
				 Kapili->BackColor = Color::Transparent;
				 Kv->Parent = pictureBox1;
				 Kv->BackColor = Color::Transparent;
				 Kvgate->Parent = pictureBox1;
				 Kvgate->BackColor = Color::Transparent;
				 Lecture->Parent = pictureBox1;
				 Lecture->BackColor = Color::Transparent;
				 Lohit->Parent = pictureBox1;
				 Lohit->BackColor = Color::Transparent;
				 this->comboBox2->Visible = false;
				 Ma->BackColor = Color::Transparent;
				 Ma->Parent = pictureBox1;
				 Maingate->BackColor = Color::Transparent;
				 Maingate->Parent = pictureBox1;
				 Manas->BackColor = Color::Transparent;
				 Manas->Parent = pictureBox1;
				 Mandir->BackColor = Color::Transparent;
				 Mandir->Parent = pictureBox1;
				 Mch->BackColor = Color::Transparent;
				 Mch->Parent = pictureBox1;
				 Me->BackColor = Color::Transparent;
				 Me->Parent = pictureBox1;
				 Mscholar->BackColor = Color::Transparent;
				 Mscholar->Parent = pictureBox1;
				 Newsac->BackColor = Color::Transparent;
				 Newsac->Parent = pictureBox1;
				 Ph->BackColor = Color::Transparent;
				 Ph->Parent = pictureBox1;
				 Sacext->BackColor = Color::Transparent;
				 Sacext->Parent = pictureBox1;
				 Siang->BackColor = Color::Transparent;
				 Siang->Parent = pictureBox1;
				 Slake->BackColor = Color::Transparent;
				 Slake->Parent = pictureBox1;
				 Splant->BackColor = Color::Transparent;
				 Splant->Parent = pictureBox1;
				 Sport->BackColor = Color::Transparent;
				 Sport->Parent = pictureBox1;
				 Subbu->BackColor = Color::Transparent;
				 Subbu->Parent = pictureBox1;
				 swim->BackColor = Color::Transparent;
				 swim->Parent = pictureBox1;
				 Tennis->BackColor = Color::Transparent;
				 Tennis->Parent = pictureBox1;
				 Umiam->BackColor = Color::Transparent;
				 Umiam->Parent = pictureBox1;
				 Viewpoint->BackColor = Color::Transparent;
				 Viewpoint->Parent = pictureBox1;
				 Workshop->BackColor = Color::Transparent;
				 Workshop->Parent = pictureBox1;
				 label1->Parent = groupBox2;
				 label1->BackColor = Color::Transparent;
				 Dd->Parent = pictureBox1;
				 Cc->BackColor = Color::Transparent;
				 Cc->Parent = pictureBox1;
				 Dd->BackColor = Color::Transparent;
				 label21->Parent = pictureBox1;
				 label61->Parent = pictureBox1;
				 label59->Parent = pictureBox1;
				 label58->Parent = pictureBox1;
				 label14->Parent = pictureBox1;
				 label13->Parent = pictureBox1;
				 label116->Parent = pictureBox1;
				 label2->Parent = pictureBox1;
				 label3->Parent = pictureBox1;
				 label41->Parent = pictureBox1;
				 label15->Parent = pictureBox1;
				 label10->Parent = pictureBox1;
				 label40->Parent = pictureBox1;
				 label4->Parent = pictureBox1;
				 label5->Parent = pictureBox1;
				 label6->Parent = pictureBox1;
				 label84->Parent = pictureBox1;
				 label86->Parent = pictureBox1;
				 label88->Parent = pictureBox1;
				 label102->Parent = pictureBox1;
				 label93->Parent = pictureBox1;
				 label91->Parent = pictureBox1;
				 label100->Parent = pictureBox1;
				 label106->Parent = pictureBox1;
				 label99->Parent = pictureBox1;
				 label97->Parent = pictureBox1;
				 label96->Parent = pictureBox1;
				 label95->Parent = pictureBox1;
				 label79->Parent = pictureBox1;
				 label81->Parent = pictureBox1;
				 label83->Parent = pictureBox1;
				 label110->Parent = pictureBox1;
				 label112->Parent = pictureBox1;
				 label114->Parent = pictureBox1;
				 label109->Parent = pictureBox1;
				 label107->Parent = pictureBox1;
				 label117->Parent = pictureBox1;
				 label29->Parent = pictureBox1;
				 label119->Parent = pictureBox1;
				 label121->Parent = pictureBox1;
				 label123->Parent = pictureBox1;
				 label124->Parent = pictureBox1;
				 label142->Parent = pictureBox1;
				 label126->Parent = pictureBox1;
				 label127->Parent = pictureBox1;
				 label129->Parent = pictureBox1;
				 label130->Parent = pictureBox1;
				 label23->Parent = pictureBox1;
				 label74->Parent = pictureBox1;
				 label73->Parent = pictureBox1;
				 label24->Parent = pictureBox1;
				 label9->Parent = pictureBox1;
				 label37->Parent = pictureBox1;
				 label39->Parent = pictureBox1;
				 label30->Parent = pictureBox1;
				 label8->Parent = pictureBox1;
				 label72->Parent = pictureBox1;
				 label71->Parent = pictureBox1;
				 label70->Parent = pictureBox1;
				 label60->Parent = pictureBox1;
				 label11->Parent = pictureBox1;
				 label62->Parent = pictureBox1;
				 label69->Parent = pictureBox1;
				 label141->Parent = pictureBox1;
				 label139->Parent = pictureBox1;
				 label137->Parent = pictureBox1;
				 label12->Parent = pictureBox1;
				 label136->Parent = pictureBox1;
				 label134->Parent = pictureBox1;
				 label132->Parent = pictureBox1;
				 label63->Parent = pictureBox1;
				 label64->Parent = pictureBox1;
				 label65->Parent = pictureBox1;
				 label66->Parent = pictureBox1;
				 label67->Parent = pictureBox1;
				 label68->Parent = pictureBox1;
				 label7->Parent = pictureBox1;
				 label104->Parent = pictureBox1;
				 ///
				 ///initialize node data
				 ///
				

	}
	//integer array
	array<int>^ chk = gcnew array<int>(65);			//defining chk array which stores 1 if object is clicked else 0


		private: System::Void Abquarter_MouseHover(System::Object^  sender, System::EventArgs^  e) {	/*if object is not already selected 
																										change backcolor to BlanchedAlmond,
																										shows the name of that place*/
					 if (chk[0] == 0){
						 Abquarter->BackColor = Color::BlanchedAlmond;
						 Abquarter->Text = "AB quarter";
					 }
		}
	private: System::Void Abquarter_MouseLeave(System::Object^  sender, System::EventArgs^  e) {		/*if object is not already selected,
																										change backcolor back to transparent,
																										and do not display any text*/
				 if (chk[0] == 0){
					 Abquarter->BackColor = Color::Transparent;
					 Abquarter->Text = "";
				 }
	}
	private: System::Void Admin_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[1] == 0){
					 Admin->BackColor = Color::BlanchedAlmond;
					 Admin->Text = "Admin";
				 }
	}
	private: System::Void Admin_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[1] == 0){
					 Admin->BackColor = Color::Transparent;
					 Admin->Text = "";
				 }
	}
	private: System::Void As_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[2] == 0){
					 As->BackColor = Color::BlanchedAlmond;
					 As->Text = "Akshara School";
				 }
	}
	private: System::Void As_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[2] == 0){
					 As->BackColor = Color::Transparent;
					 As->Text = "";
				 }
	}
	private: System::Void Aseb_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[3] == 0){
					 Aseb->BackColor = Color::BlanchedAlmond;
					 Aseb->Text = "Aseb Gate";
				 }
	}
	private: System::Void Aseb_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[3] == 0){
					 Aseb->BackColor = Color::Transparent;
					 Aseb->Text = "";
				 }
	}
	private: System::Void Barak_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[4] == 0){
					 Barak->BackColor = Color::BlanchedAlmond;
					 Barak->Text = "Barak";
				 }
	}
	private: System::Void Barak_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[4] == 0){
					 Barak->BackColor = Color::Transparent;
					 Barak->Text = "";
				 }
	}
	private: System::Void Bpark_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[5] == 0){
					 Bpark->BackColor = Color::BlanchedAlmond;
					 Bpark->Text = "Biotech Park";
				 }
	}
	private: System::Void Bpark_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[5] == 0){
					 Bpark->BackColor = Color::Transparent;
					 Bpark->Text = "";
				 }
	}
	private: System::Void Brahmaputra_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[6] == 0){
					 Brahmaputra->BackColor = Color::BlanchedAlmond;
					 Brahmaputra->Text = "Brahmaputra";
				 }
	}
	private: System::Void Brahmaputra_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[6] == 0){
					 Brahmaputra->BackColor = Color::Transparent;
					 Brahmaputra->Text = "";
				 }
	}
	private: System::Void Bt_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[7] == 0){
					 Bt->BackColor = Color::BlanchedAlmond;
					 Bt->Text = "Biotech";
				 }
	}
	private: System::Void Bt_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[7] == 0){
					 Bt->BackColor = Color::Transparent;
					 Bt->Text = "";
				 }
	}
	private: System::Void Ce_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[8] == 0){
					 Ce->BackColor = Color::BlanchedAlmond;
					 Ce->Text = "Civil";
				 }
	}
	private: System::Void Ce_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[8] == 0){
					 Ce->BackColor = Color::Transparent;
					 Ce->Text = "";
				 }
	}
	private: System::Void Cet_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[9] == 0){
					 Cet->BackColor = Color::BlanchedAlmond;
					 Cet->Text = "CET";
				 }
	}
	private: System::Void Cet_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[9] == 0){
					 Cet->BackColor = Color::Transparent;
					 Cet->Text = "";
				 }
	}
	private: System::Void Cfquarter_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[10] == 0){
					 Cfquarter->BackColor = Color::BlanchedAlmond;
					 Cfquarter->Text = "CF quarter";
				 }
	}
	private: System::Void Cfquarter_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[10] == 0){
					 Cfquarter->BackColor = Color::Transparent;
					 Cfquarter->Text = "";
				 }
	}
	private: System::Void Ch_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[11] == 0){
					 Ch->BackColor = Color::BlanchedAlmond;
					 Ch->Text = "Chemistry";
				 }
	}
	private: System::Void Ch_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[11] == 0){
					 Ch->BackColor = Color::Transparent;
					 Ch->Text = "";
				 }
	}
	private: System::Void Cl_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[12] == 0){
					 Cl->BackColor = Color::BlanchedAlmond;
					 Cl->Text = "Chemical";
				 }
	}
	private: System::Void Cl_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[12] == 0){
					 Cl->BackColor = Color::Transparent;
					 Cl->Text = "";
				 }
	}
	private: System::Void Complex_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[13] == 0){
					 Complex->BackColor = Color::BlanchedAlmond;
					 Complex->Text = "Complex";
				 }
	}
	private: System::Void Complex_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[13] == 0){
					 Complex->BackColor = Color::Transparent;
					 Complex->Text = "";
				 }
	}
	private: System::Void Conf_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[14] == 0){
					 Conf->BackColor = Color::BlanchedAlmond;
					 Conf->Text = "Confernece";
				 }
	}
	private: System::Void Conf_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[14] == 0){
					 Conf->BackColor = Color::Transparent;
					 Conf->Text = "";
				 }
	}
	private: System::Void Cricket_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[15] == 0){
					 Cricket->BackColor = Color::BlanchedAlmond;
					 Cricket->Text = "Cricket";
				 }
	}
	private: System::Void Cricket_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[15] == 0){
					 Cricket->BackColor = Color::Transparent;
					 Cricket->Text = "";
				 }
	}
	private: System::Void Cse_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[16] == 0){
					 Cse->BackColor = Color::BlanchedAlmond;
					 Cse->Text = "Cse";
				 }
	}
	private: System::Void Cse_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[16] == 0){
					 Cse->BackColor = Color::Transparent;
					 Cse->Text = "";
				 }
	}

	private: System::Void Dibang_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[17] == 0){
					 Dibang->BackColor = Color::BlanchedAlmond;
					 Dibang->Text = "Dibang";
				 }
	}
	private: System::Void Dibang_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[17] == 0){
					 Dibang->BackColor = Color::Transparent;
					 Dibang->Text = "";
				 }
	}

	private: System::Void Dihing_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[18] == 0){
					 Dihing->BackColor = Color::BlanchedAlmond;
					 Dihing->Text = "Dihing";
				 }
	}
	private: System::Void Dihing_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[18] == 0){
					 Dihing->BackColor = Color::Transparent;
					 Dihing->Text = "";
				 }
	}
	private: System::Void Audi_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[19] == 0){
					 Audi->BackColor = Color::BlanchedAlmond;
					 Audi->Text = "Auditorium";
				 }
	}
	private: System::Void Audi_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[19] == 0){
					 Audi->BackColor = Color::Transparent;
					 Audi->Text = "";
				 }
	}

	private: System::Void Dhanno_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[20] == 0){
					 Dhanno->BackColor = Color::BlanchedAlmond;
					 Dhanno->Text = "Dhansiri";
				 }
	}
	private: System::Void Dhanno_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[20] == 0){
					 Dhanno->BackColor = Color::Transparent;
					 Dhanno->Text = "";
				 }
	}

	private: System::Void Dquarter_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[21] == 0){
					 Dquarter->BackColor = Color::BlanchedAlmond;
					 Dquarter->Text = "Dquarter";
				 }
	}
	private: System::Void Dquarter_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[21] == 0){
					 Dquarter->BackColor = Color::Transparent;
					 Dquarter->Text = "";
				 }
	}



	private: System::Void Eee_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[22] == 0){
					 Eee->BackColor = Color::BlanchedAlmond;
					 Eee->Text = "Eee";
				 }
	}
	private: System::Void Eee_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[22] == 0){
					 Eee->BackColor = Color::Transparent;
					 Eee->Text = "";
				 }
	}

	private: System::Void Faculty_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[23] == 0){
					 Faculty->BackColor = Color::BlanchedAlmond;
					 Faculty->Text = "Faculty";
				 }
	}
	private: System::Void Faculty_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[23] == 0){
					 Faculty->BackColor = Color::Transparent;
					 Faculty->Text = "";
				 }
	}


	private: System::Void Fquarter_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[24] == 0){
					 Fquarter->BackColor = Color::BlanchedAlmond;
					 Fquarter->Text = "Fquarter";
				 }
	}
	private: System::Void Fquarter_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[24] == 0){
					 Fquarter->BackColor = Color::Transparent;
					 Fquarter->Text = "";
				 }
	}


	private: System::Void Guest_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[25] == 0){
					 Guest->BackColor = Color::BlanchedAlmond;
					 Guest->Text = "Guest";
				 }
	}
	private: System::Void Guest_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[25] == 0){
					 Guest->BackColor = Color::Transparent;
					 Guest->Text = "";
				 }
	}


	private: System::Void Hospital_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[26] == 0){
					 Hospital->BackColor = Color::BlanchedAlmond;
					 Hospital->Text = "Faculty";
				 }
	}
	private: System::Void Hospital_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[26] == 0){
					 Hospital->BackColor = Color::Transparent;
					 Hospital->Text = "";
				 }
	}


	private: System::Void Hss_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[27] == 0){
					 Hss->BackColor = Color::BlanchedAlmond;
					 Hss->Text = "Hss";
				 }
	}
	private: System::Void Hss_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[27] == 0){
					 Hss->BackColor = Color::Transparent;
					 Hss->Text = "";
				 }
	}
	private: System::Void Kameng_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[28] == 0){
					 Kameng->BackColor = Color::BlanchedAlmond;
					 Kameng->Text = "Kameng";
				 }
	}

	private: System::Void Kameng_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[28] == 0){
					 Kameng->BackColor = Color::Transparent;
					 Kameng->Text = "";
				 }
	}

	private: System::Void Kapili_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[29] == 0){
					 Kapili->BackColor = Color::BlanchedAlmond;
					 Kapili->Text = "Kapili";
				 }
	}
	private: System::Void Kapili_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[29] == 0){
					 Kapili->BackColor = Color::Transparent;
					 Kapili->Text = "";
				 }
	}

		private: System::Void Kv_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					 if (chk[30] == 0){
						 Kv->BackColor = Color::BlanchedAlmond;
						 Kv->Text = "Kendriya Vidhlya";
					 }
		}
	private: System::Void Kv_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[30] == 0){
					 Kv->BackColor = Color::Transparent;
					 Kv->Text = "";
				 }
	}


		private: System::Void Kvgate_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					 if (chk[31] == 0){
						 Kvgate->BackColor = Color::BlanchedAlmond;
						 Kvgate->Text = "Kvgate";
					 }
		}
	private: System::Void Kvgate_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[31] == 0){
					 Kvgate->BackColor = Color::Transparent;
					 Kvgate->Text = "";
				 }
	}


		private: System::Void Lecture_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					 if (chk[32] == 0){
						 Lecture->BackColor = Color::BlanchedAlmond;
						 Lecture->Text = "Lecture";
					 }
		}
	private: System::Void Lecture_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[32] == 0){
					 Lecture->BackColor = Color::Transparent;
					 Lecture->Text = "";
				 }
	}


		private: System::Void Lohit_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					 if (chk[33] == 0){
						 Lohit->BackColor = Color::BlanchedAlmond;
						 Lohit->Text = "Lohit";
					 }
		}
	private: System::Void Lohit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[33] == 0){
					 Lohit->BackColor = Color::Transparent;
					 Lohit->Text = "";
				 }
	}





private: System::Void Ma_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[34] == 0){
				 Ma->BackColor = Color::BlanchedAlmond;
				 Ma->Text = "Mathematics";
			 }
}
	private: System::Void Ma_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[34] == 0){
					 Ma->BackColor = Color::Transparent;
					 Ma->Text = "";
				 }
	}
private: System::Void Maingate_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[35] == 0){
				 Maingate->BackColor = Color::BlanchedAlmond;
				 Maingate->Text = "Maingate";
			 }
}
	private: System::Void Maingate_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[35] == 0){
					 Maingate->BackColor = Color::Transparent;
					 Maingate->Text = "";
				 }
	}
private: System::Void Manas_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[36] == 0){
				 Manas->BackColor = Color::BlanchedAlmond;
				 Manas->Text = "Manas";
			 }
}
	private: System::Void Manas_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[36] == 0){
					 Manas->BackColor = Color::Transparent;
					 Manas->Text = "";
				 }
	}
private: System::Void Mandir_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[37] == 0){
				 Mandir->BackColor = Color::BlanchedAlmond;
				 Mandir->Text = "Mandir";
			 }
}
	private: System::Void Mandir_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[37] == 0){
					 Mandir->BackColor = Color::Transparent;
					 Mandir->Text = "";
				 }
	}
private: System::Void Mch_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[38] == 0){
				 Mch->BackColor = Color::BlanchedAlmond;
				 Mch->Text = "Manas Community Hall";
			 }
}
	private: System::Void Mch_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[38] == 0){
					 Mch->BackColor = Color::Transparent;
					 Mch->Text = "";
				 }
	}
private: System::Void Me_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[39] == 0){
				 Me->BackColor = Color::BlanchedAlmond;
				 Me->Text = "Mechanical Engineering";
			 }
}
	private: System::Void Me_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[39] == 0){
					 Me->BackColor = Color::Transparent;
					 Me->Text = "";
				 }
	}
private: System::Void Mscholar_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[40] == 0){
				 Mscholar->BackColor = Color::BlanchedAlmond;
				 Mscholar->Text = "Married Scholar";
			 }
}
	private: System::Void Mscholar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[40] == 0){
					 Mscholar->BackColor = Color::Transparent;
					 Mscholar->Text = "";
				 }
	}
private: System::Void Newsac_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[41] == 0){
				 Newsac->BackColor = Color::BlanchedAlmond;
				 Newsac->Text = "Newsac";
			 }
}
	private: System::Void Newsac_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[41] == 0){
					 Newsac->BackColor = Color::Transparent;
					 Newsac->Text = "";
				 }
	}
private: System::Void Ph_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[42] == 0){
				 Ph->BackColor = Color::BlanchedAlmond;
				 Ph->Text = "Physics";
			 }
}
	private: System::Void Ph_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[42] == 0){
					 Ph->BackColor = Color::Transparent;
					 Ph->Text = "";
				 }
	}
private: System::Void Sacext_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[43] == 0){
				 Sacext->BackColor = Color::BlanchedAlmond;
				 Sacext->Text = "Sac extension";
			 }
}
	private: System::Void Sacext_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[43] == 0){
					 Sacext->BackColor = Color::Transparent;
					 Sacext->Text = "";
				 }
	}
private: System::Void Siang_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[44] == 0){
				 Siang->BackColor = Color::BlanchedAlmond;
				 Siang->Text = "Siang";
			 }
}
	private: System::Void Siang_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[44] == 0){
					 Siang->BackColor = Color::Transparent;
					 Siang->Text = "";
				 }
	}
private: System::Void Slake_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[45] == 0){
				 Slake->BackColor = Color::BlanchedAlmond;
				 Slake->Text = "Serpentine Lake";
			 }
}
	private: System::Void Slake_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[45] == 0){
					 Slake->BackColor = Color::Transparent;
					 Slake->Text = "";
				 }
	}
private: System::Void Splant_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[46] == 0){
				 Splant->BackColor = Color::BlanchedAlmond;
				 Splant->Text = "Sewage plant";
			 }
}
	private: System::Void Splant_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[46] == 0){
					 Splant->BackColor = Color::Transparent;
					 Splant->Text = "";
				 }
	}
private: System::Void Sport_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[47] == 0){
				 Sport->BackColor = Color::BlanchedAlmond;
				 Sport->Text = "Sport";
			 }
}
	private: System::Void Sport_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[47] == 0){
					 Sport->BackColor = Color::Transparent;
					 Sport->Text = "";
				 }
	}
private: System::Void Subbu_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[48] == 0){
				 Subbu->BackColor = Color::BlanchedAlmond;
				 Subbu->Text = "Subhansiri";
			 }
}
	private: System::Void Subbu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[48] == 0){
					 Subbu->BackColor = Color::Transparent;
					 Subbu->Text = "";
				 }
	}
private: System::Void swim_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[49] == 0){
				 swim->BackColor = Color::BlanchedAlmond;
				 swim->Text = "Swimming Pool";
			 }
}
	private: System::Void swim_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[49] == 0){
					 swim->BackColor = Color::Transparent;
					 swim->Text = "";
				 }
	}
private: System::Void Tennis_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[50] == 0){
				 Tennis->BackColor = Color::BlanchedAlmond;
				 Tennis->Text = "Tennis";
			 }
}
	private: System::Void Tennis_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[50] == 0){
					 Tennis->BackColor = Color::Transparent;
					 Tennis->Text = "";
				 }
	}
private: System::Void Umiam_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[51] == 0){
				 Umiam->BackColor = Color::BlanchedAlmond;
				 Umiam->Text = "Umiam";
			 }
}
	private: System::Void Umiam_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[51] == 0){
					 Umiam->BackColor = Color::Transparent;
					 Umiam->Text = "";
				 }
	}
private: System::Void Viewpoint_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[52] == 0){
				 Viewpoint->BackColor = Color::BlanchedAlmond;
				 Viewpoint->Text = "Viewpoint";
			 }
}
	private: System::Void Viewpoint_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[52] == 0){
					 Viewpoint->BackColor = Color::Transparent;
					 Viewpoint->Text = "";
				 }
	}
private: System::Void Workshop_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 if (chk[53] == 0){
				 Workshop->BackColor = Color::BlanchedAlmond;
				 Workshop->Text = "Workshop";
			 }
}
	private: System::Void Workshop_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[53] == 0){
					 Workshop->BackColor = Color::Transparent;
					 Workshop->Text = "";
				 }
	}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
		 private: System::Void Cc_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					  if (chk[54] == 0){
						  Cc->BackColor = Color::BlanchedAlmond;
						  Cc->Text = "Computer Center";
					  }
		 }
	private: System::Void Cc_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[54] == 0){
					 Cc->BackColor = Color::Transparent;
					 Cc->Text = "";
				 }
	}
			 private: System::Void Dd_MouseHover(System::Object^  sender, System::EventArgs^  e) {
						  if (chk[55] == 0){
							  Dd->BackColor = Color::BlanchedAlmond;
							  Dd->Text = "Design";
						  }
			 }
	private: System::Void Dd_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 if (chk[55] == 0){
					 Dd->BackColor = Color::Transparent;
					 Dd->Text = "";
				 }
	}


			 void make_invisible()						/*this function does the following:
														1)resets chk[i]=0 i.e makes all objects free(not selected)
														2)Empties all the text shown in the labels
														3)Restores the transparency of all the objects*/
		 {
			 for (int i = 0; i < 60; i++)
				 chk[i] = 0;
			 Abquarter->Text = "";
			 Admin->Text = "";
			 As->Text = "";
			 Aseb->Text = "";
			 Barak->Text = "";
			 Bpark->Text = "";
			 Brahmaputra->Text = "";
			 Bt->Text = "";
			 Ce->Text = "";
			 Cet->Text = "";
			 Cfquarter->Text = "";
			 Ch->Text = "";
			 Cl->Text = "";
			 Complex->Text = "";
			 Conf->Text = "";
			 Cricket->Text = "";
			 Cse->Text = "";
			 Dibang->Text = "";
			 Dhanno->Text = "";
			 Dihing->Text = "";
			 Dquarter->Text = "";
			 Eee->Text = "";
			 Faculty->Text = "";
			 Fquarter->Text = "";
			 Guest->Text = "";
			 Hospital->Text = "";
			 Hss->Text = "";
			 Kameng->Text = "";
			 Kapili->Text = "";
			 Kv->Text = "";
			 Kvgate->Text = "";
			 Lecture->Text = "";
			 Lohit->Text = "";
			 Ma->Text = "";
			 Maingate->Text = "";
			 Manas->Text = "";
			 Mandir->Text = "";
			 Mch->Text = "";
			 Me->Text = "";
			 Mscholar->Text = "";
			 Newsac->Text = "";
			 Ph->Text = "";
			 Sacext->Text = "";
			 Siang->Text = "";
			 Slake->Text = "";
			 Splant->Text = "";
			 Sport->Text = "";
			 Subbu->Text = "";
			 swim->Text = "";
			 Tennis->Text = "";
			 Umiam->Text = "";
			 Viewpoint->Text = "";
			 Workshop->Text = "";
			 Cc->Text = "";
			 Dd->Text = "";
			 Audi->Text = "";
			 Dd->Parent = pictureBox1;
			 Cc->BackColor = Color::Transparent;
			 Cc->Parent = pictureBox1;
			 Dd->BackColor = Color::Transparent;
			 Audi->Parent = pictureBox1;
			 Audi->BackColor = Color::Transparent;
			 Abquarter->Parent = pictureBox1;
			 Abquarter->BackColor = Color::Transparent;
			 Admin->Parent = pictureBox1;
			 Admin->BackColor = Color::Transparent;
			 As->Parent = pictureBox1;
			 As->BackColor = Color::Transparent;
			 Aseb->Parent = pictureBox1;
			 Aseb->BackColor = Color::Transparent;
			 Barak->Parent = pictureBox1;
			 Barak->BackColor = Color::Transparent;
			 Bpark->Parent = pictureBox1;
			 Bpark->BackColor = Color::Transparent;
			 Brahmaputra->Parent = pictureBox1;
			 Brahmaputra->BackColor = Color::Transparent;
			 Bt->Parent = pictureBox1;
			 Bt->BackColor = Color::Transparent;
			 Ce->Parent = pictureBox1;
			 Ce->BackColor = Color::Transparent;
			 Cet->Parent = pictureBox1;
			 Cet->BackColor = Color::Transparent;
			 Cfquarter->Parent = pictureBox1;
			 Cfquarter->BackColor = Color::Transparent;
			 Ch->Parent = pictureBox1;
			 Ch->BackColor = Color::Transparent;
			 Cl->Parent = pictureBox1;
			 Cl->BackColor = Color::Transparent;
			 Complex->Parent = pictureBox1;
			 Complex->BackColor = Color::Transparent;
			 Conf->Parent = pictureBox1;
			 Conf->BackColor = Color::Transparent;
			 Cricket->Parent = pictureBox1;
			 Cricket->BackColor = Color::Transparent;
			 Cse->Parent = pictureBox1;
			 Cse->BackColor = Color::Transparent;
			 Dibang->Parent = pictureBox1;
			 Dibang->BackColor = Color::Transparent;
			 Dhanno->Parent = pictureBox1;
			 Dhanno->BackColor = Color::Transparent;
			 Dihing->Parent = pictureBox1;
			 Dihing->BackColor = Color::Transparent;
			 Dquarter->Parent = pictureBox1;
			 Dquarter->BackColor = Color::Transparent;
			 Eee->Parent = pictureBox1;
			 Eee->BackColor = Color::Transparent;
			 Faculty->Parent = pictureBox1;
			 Faculty->BackColor = Color::Transparent;
			 Fquarter->Parent = pictureBox1;
			 Fquarter->BackColor = Color::Transparent;
			 Guest->Parent = pictureBox1;
			 Guest->BackColor = Color::Transparent;
			 Hospital->Parent = pictureBox1;
			 Hospital->BackColor = Color::Transparent;
			 Hss->Parent = pictureBox1;
			 Hss->BackColor = Color::Transparent;
			 Kameng->Parent = pictureBox1;
			 Kameng->BackColor = Color::Transparent;
			 Kapili->Parent = pictureBox1;
			 Kapili->BackColor = Color::Transparent;
			 Kv->Parent = pictureBox1;
			 Kv->BackColor = Color::Transparent;
			 Kvgate->Parent = pictureBox1;
			 Kvgate->BackColor = Color::Transparent;
			 Lecture->Parent = pictureBox1;
			 Lecture->BackColor = Color::Transparent;
			 Lohit->Parent = pictureBox1;
			 Lohit->BackColor = Color::Transparent;
			 Ma->BackColor = Color::Transparent;
			 Ma->Parent = pictureBox1;
			 Maingate->BackColor = Color::Transparent;
			 Maingate->Parent = pictureBox1;
			 Manas->BackColor = Color::Transparent;
			 Manas->Parent = pictureBox1;
			 Mandir->BackColor = Color::Transparent;
			 Mandir->Parent = pictureBox1;
			 Mch->BackColor = Color::Transparent;
			 Mch->Parent = pictureBox1;
			 Me->BackColor = Color::Transparent;
			 Me->Parent = pictureBox1;
			 Mscholar->BackColor = Color::Transparent;
			 Mscholar->Parent = pictureBox1;
			 Newsac->BackColor = Color::Transparent;
			 Newsac->Parent = pictureBox1;
			 Ph->BackColor = Color::Transparent;
			 Ph->Parent = pictureBox1;
			 Sacext->BackColor = Color::Transparent;
			 Sacext->Parent = pictureBox1;
			 Siang->BackColor = Color::Transparent;
			 Siang->Parent = pictureBox1;
			 Slake->BackColor = Color::Transparent;
			 Slake->Parent = pictureBox1;
			 Splant->BackColor = Color::Transparent;
			 Splant->Parent = pictureBox1;
			 Sport->BackColor = Color::Transparent;
			 Sport->Parent = pictureBox1;
			 Subbu->BackColor = Color::Transparent;
			 Subbu->Parent = pictureBox1;
			 swim->BackColor = Color::Transparent;
			 swim->Parent = pictureBox1;
			 Tennis->BackColor = Color::Transparent;
			 Tennis->Parent = pictureBox1;
			 Umiam->BackColor = Color::Transparent;
			 Umiam->Parent = pictureBox1;
			 Viewpoint->BackColor = Color::Transparent;
			 Viewpoint->Parent = pictureBox1;
			 Workshop->BackColor = Color::Transparent;
			 Workshop->Parent = pictureBox1;
			 label21->Visible = false;
			 label61->Visible = false;
			 label59->Visible = false;
			 label58->Visible = false;
			 label14->Visible = false;
			 label13->Visible = false;
			 label116->Visible = false;
			 label2->Visible = false;
			 label3->Visible = false;
			 label41->Visible = false;
			 label15->Visible = false;
			 label10->Visible = false;
			 label40->Visible = false;
			 label4->Visible = false;
			 label5->Visible = false;
			 label6->Visible = false;
			 label84->Visible = false;
			 label86->Visible = false;
			 label88->Visible = false;
			 label102->Visible = false;
			 label93->Visible = false;
			 label91->Visible = false;
			 label100->Visible = false;
			 label106->Visible = false;
			 label99->Visible = false;
			 label97->Visible = false;
			 label96->Visible = false;
			 label95->Visible = false;
			 label79->Visible = false;
			 label81->Visible = false;
			 label83->Visible = false;
			 label110->Visible = false;
			 label112->Visible = false;
			 label114->Visible = false;
			 label109->Visible = false;
			 label107->Visible = false;
			 label117->Visible = false;
			 label29->Visible = false;
			 label119->Visible = false;
			 label121->Visible = false;
			 label123->Visible = false;
			 label124->Visible = false;
			 label142->Visible = false;
			 label126->Visible = false;
			 label127->Visible = false;
			 label129->Visible = false;
			 label130->Visible = false;
			 label23->Visible = false;
			 label74->Visible = false;
			 label73->Visible = false;
			 label24->Visible = false;
			 label9->Visible = false;
			 label37->Visible = false;
			 label39->Visible = false;
			 label30->Visible = false;
			 label8->Visible = false;
			 label72->Visible = false;
			 label71->Visible = false;
			 label70->Visible = false;
			 label60->Visible = false;
			 label11->Visible = false;
			 label62->Visible = false;
			 label69->Visible = false;
			 label141->Visible = false;
			 label139->Visible = false;
			 label137->Visible = false;
			 label12->Visible = false;
			 label136->Visible = false;
			 label134->Visible = false;
			 label132->Visible = false;
			 label63->Visible = false;
			 label64->Visible = false;
			 label65->Visible = false;
			 label66->Visible = false;
			 label67->Visible = false;
			 label68->Visible = false;
			 label7->Visible = false;
			 label104->Visible = false;
		 }
		 ///
		 ///
		 ///
		 void Abquarter_clk(){
			 chk[0] = 1;											/*click function which sets chk[i]=1,backcolor to gren
																	displays name of the clicked place, loads image and 
																	shows that image*/
				 Abquarter->BackColor = Color::Green;
				 Abquarter->Text = "AB quarter";
				 Image^ image = Image::FromFile("Abquarter.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Quarter of Professor ";

			 }
			 void Admin_clk(){
				 chk[1] = 1;
				 Admin->BackColor = Color::Green;
				 Admin->Text = "Admin";
				 Image^ image = Image::FromFile("Admin.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The building consists of all the major administration sections like accounts, student affairs, faculty affairs, placement cell, registrar's office, public relations, stores and purchase, research and development, establishment, engineering section and of course the Director's office. The base of the building also has a restaurant and two banks for the access of junta at IITG ";

			 }
			 void As_clk(){
				 chk[2] = 1;
				 As->BackColor = Color::Green;
				 As->Text = "Akshara";
				 Image^ image = Image::FromFile("As.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Akshara Pre-Primary School : It is the only pre primary school uder the institute premise located near ASEB gate.";
			 }
			 void Aseb_clk(){
				 chk[3] = 1;
				 Aseb->BackColor = Color::Green;
				 Aseb->Text = "Aseb gate";
				 Image^ image = Image::FromFile("Aseb.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "ASEB Gate: One of the entrance/exit gate of IITG. ";
			 }
			 void Barak_clk(){
				 chk[4] = 1;
				 Barak->BackColor = Color::Green;
				 Barak->Text = "Barak";
				 Image^ image = Image::FromFile("Barak.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Barak is the 7th hostel in the IITG fraternity and derives its name from the River Barak which is a major river in north-eastern India and is a part of the Surma-Meghna River System. It was previously only for M.Tech and PhD. Students but from 2011 onwards the hostel also has boarders of B.Tech."
					 ;
			 }
			 void Bpark_clk(){
				 chk[5] = 1;
				 Bpark->BackColor = Color::Green;
				 Bpark->Text = "Bpark";
				 Image^ image = Image::FromFile("Bpark.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Centre for the Environment was established in May 2004 with the main objective to promote interdisciplinary research and development, to impart postgraduate education, to create public awareness, to provide consultancy in challenging area and to train manpower for mitigating emerging environmental problems. Centre for the Environment offers PhD programme intended for the students who are interested in carrying out distinguished scholarly activities in the interdisciplinary domains of environmental issues ";
			 }

			 void Brahmaputra_clk(){
				 chk[6] = 1;
				 Brahmaputra->BackColor = Color::Green;
				 Brahmaputra->Text = "Brahmaputra";
				 Image^ image = Image::FromFile("Brahmaputra.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The Hostel Brahmaputra was opened for students in the academic year 2011 - 2012. The Hostel spreads in four blocks . At present the hostel accommodates more than 1000 students majority of them are either M.Tech or Ph.D from different disciplines and a few are from B.Tech.  ";
			 }
			 void Bt_clk(){
				 chk[7] = 1;
				 Bt->BackColor = Color::Green;
				 Bt->Text = "Biotechnology";
				 Image^ image = Image::FromFile("Bt.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Contributing to the fascinating and emerging areas of Science, IIT Guwahati established Department of Biotechnology in the year 2002. The Department is one of its kind in the north-eastern region of Indian sub-continent and is dedicated for promoting goal-oriented interdisciplinary research by interfacing modern biology with applied engineering sciences, addressing problems affecting human health/welfare, and training students to be the next generation engineers and researchers. As of now, the department has twenty-seven faculty members from diverse streams and specializations, eight well-trained scientific staff members, two administrative staff members, 141 students in the B. Tech programme, 57 students in the M. Tech programme and 95 students in the Ph.D. programme. Till date, degrees have been awarded to 141 B. Tech students, 35 M. Tech students, and 29 Ph. D. Students ";

			 }
			 void Ce_clk(){
				 chk[8] = 1;
				 Ce->BackColor = Color::Green;
				 Ce->Text = "Civil Engineering";
				 Image^ image = Image::FromFile("Ce.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The department started in 1999. The department educates students at all degree levels that meet the present and future engineering needs of the country. Students are given the theoretical engineering knowledge accompanied by laboratory and field practice. Emphasis is given to develop professional leadership skills and a strong sense of responsibility to take up challenging problems in Civil Engineering. The main areas of research include Geotechnical Engineering, Structural Engineering, Hydraulics Engineering, Hydrology, GIS and GPS Systems, Design of Structures, Environmental Engineering, Solid Mechanics and Transportation Engineering. The department also handles consultancy works and projects ";

			 }
			 void Cet_clk(){
				 chk[9] = 1;
				 Cet->BackColor = Color::Green;
				 Cet->Text = "Cet";
				 Image^ image = Image::FromFile("Cet.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Centre for Educational Technology, a central facility of the Institute, is involved in Research, Design and Development of Educational Learning Content & its Technology. The centre coordinates the QIP Masters and PhD students' activities studying in various departments & centers of the Institute. It conducts Short Term courses & Training Programs for industry & institutions. Through its Curriculum Development Cell it develops pedagogy strategies & syllabus development for courses at IITG It extends collaboration and academic support to student's working on their thesis and projects in the area of ICT based Education, E- learning & Web Content Design ";

			 }
			 void Cfquarter_clk(){
				 chk[10] = 1;
				 Cfquarter->BackColor = Color::Green;
				 Cfquarter->Text = "Cfquarter";
				 Image^ image = Image::FromFile("Cfquarter.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Quarter of Prof. ";

			 }
			 void Ch_clk(){
				 chk[11] = 1;
				 Ch->BackColor = Color::Green;
				 Ch->Text = "Chemistry";
				 Image^ image = Image::FromFile("Ch.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Started in 2002, the department is a major academic host offering all degree programmes such as B.Tech., M.Tech. and Ph.D. in Chemical Engineering. The department offers Petroleum Science & Technology (PST) and Materials Science & Technology (MST) as specializations in the master curriculum. Since inception, the department is endowed with young, vibrant, dynamic and qualified faculty to impart high quality teaching and research in conventional and frontier areas of Chemical Engineering and Refinery Engineering. ";

			 }
			 void Cl_clk(){
				 chk[12] = 1;
				 Cl->BackColor = Color::Green;
				 Cl->Text = "Chemical Engineering";
				 Image^ image = Image::FromFile("Cl.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Started in 2002, the department is a major academic host offering all degree programmes such as B.Tech., M.Tech. and Ph.D. in Chemical Engineering. The department offers Petroleum Science & Technology (PST) and Materials Science & Technology (MST) as specializations in the master curriculum. Since inception, the department is endowed with young, vibrant, dynamic and qualified faculty to impart high quality teaching and research in conventional and frontier areas of Chemical Engineering and Refinery Engineering ";

			 }
			 void Complex_clk(){
				 chk[13] = 1;
				 Complex->BackColor = Color::Green;
				 Complex->Text = "Market Complex";
				 Image^ image = Image::FromFile("Complex.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Market Complex provides common facilitise like general store, tailor, hair saloon to the students as well as faculties ";

			 }
			 void Conf_clk(){
				 chk[14] = 1;
				 Conf->BackColor = Color::Green;
				 Conf->Text = "Conference Hall";
				 Image^ image = Image::FromFile("Conf.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "A Conference Centre with a provision of 4 halls (2 halls with 150 capacity and 2 halls with 200 capacity) serves as a best place for organising big professional events ";

			 }
			 void Cricket_clk(){
				 chk[15] = 1;
				 Cricket->BackColor = Color::Green;
				 Cricket->Text = "Cricket";
				 Image^ image = Image::FromFile("Cricket.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Cricket Field: Part of the immense grounds and sports facilities that are carefully maintained in order to provide a holistic environment to the IITG Fraternity ";

			 }
			 void Cse_clk(){
				 chk[16] = 1;
				 Cse->BackColor = Color::Green;
				 Cse->Text = "CSE";
				 Image^ image = Image::FromFile("cse.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The Department of Computer Science and Engineering at the Indian Institute of Technology Guwahati, was formed in 1995. Since its inception, the Department has always been recognized all over the world for excellence in research and teaching. The Department provides an outstanding research environment complemented by superior teaching for its students to flourish in. In March 2012, the Department has 25 faculty members, 7 supporting staff members, 336 students in the B. Tech programme, 105 students in the M. Tech programme and 53 students in the Ph.D. programme. Till date, degrees have been awarded to 518 B. Tech students, 303 M. Tech students, and 8 Ph. D. Students ";

			 }
			 void Dibang_clk(){
				 chk[17] = 1;
				 Dibang->BackColor = Color::Green;
				 Dibang->Text = "Dibang";
				 Image^ image = Image::FromFile("Dibang.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Hostel Dibang came into being in July 2010 as the eighth boys' hostel of IIT Guwahati. The name Dibang follows the tradition of naming hostels of IIT Guwahati after benevolent rivers and valleys of Northeast India. Being the home of most of the MTech, MDes, MA, PhD and Project Staff of various departments and centres of the Institute, Dibang is reputed for its comparatively peaceful environment ";

			 }
			 void Dihing_clk(){
				 chk[18] = 1;
				 Dihing->BackColor = Color::Green;
				 Dihing->Text = "Dihing";
				 Image^ image = Image::FromFile("Dihing.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Named after a tributary of the Brahmaputra, Dihing Hostel is situated just beside the newly built Brhahmaputra Hostel. This 300 seater boys' hostel was established during 2000 ";

			 }
			 void Audi_clk(){
				 chk[19] = 1;
				 Audi->BackColor = Color::Green;
				 Audi->Text = "Auditorium";
				 Image^ image = Image::FromFile("Audi.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "DR. Bhupen Hazarika auditorium with a capacity of 1500 provide space for teaching and holding various events/programmes. ";

			 }
			 void Dhanno_clk(){
				 chk[20] = 1;
				 Dhanno->BackColor = Color::Green;
				 Dhanno->Text = "Dhannsiri";
				 Image^ image = Image::FromFile("Dhanno.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "One of the major attractions at IITG is its 1500 seater auditorium. The state of the art facilities provides amazing experience of every event happening inside. The auditorium building boasts an area of 5895 sq. mts. Apart from a conference hall, green room, projector room, it also has a 180 seater mini auditorium. The acoustics of the auditorium are built with exceptional quality to hear the incredible sound of the Bose sound system. The push back chairs, floor and stage furnishing completes your experience as a lifetime experience. It is also secured with fire detection alarm system and fire extinguishers at required places ";

			 }

			 void Newsac_clk(){
				 chk[41] = 1;
				 Newsac->BackColor = Color::Green;
				 Newsac->Text = "New SAC";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "New Sac made of 2013 ";
			 }
			 void Ph_clk(){
				 chk[42] = 1;
				 Ph->BackColor = Color::Green;
				 Ph->Text = "Physics";
				 Image^ image = Image::FromFile("Ph.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Physics Dept. ";
			 }

			 void Sacext_clk(){
				 chk[43] = 1;
				 Sacext->BackColor = Color::Green;
				 Sacext->Text = "SAC Ext";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Stuent Activity Center(SAC) provides a place for the students to recreate and playing their favourite indoor games. SAC has badminton court, Table tennis court, squash court ";
			 }
			 void Siang_clk(){
				 chk[44] = 1;
				 Siang->BackColor = Color::Green;
				 Siang->Text = "Siang";
				 Image^ image = Image::FromFile("Siang.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Siang hostel came into being on July 2003 as the fourth boys' hostel of IIT Guwahati. The name Siang follows the same revered tradition of naming hostels of IIT Guwahati after benevolent rivers of north-east India. Being the home of some of the M.Tech.,M.Sc., PhD. and Project Staffs of various specializations of the Institute, Siang is reputed for its peaceful environment ";
			 }
			 void Slake_clk(){
				 chk[45] = 1;
				 Slake->BackColor = Color::Green;
				 Slake->Text = "Serpentine Lake";
				 Image^ image = Image::FromFile("Slake.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Known as Serpentine Lake, it is situated near to the faculty quareters and guest house ";
			 }
			 void Splant_clk(){
				 chk[46] = 1;
				 Splant->BackColor = Color::Green;
				 Splant->Text = "Sewage";
				 Image^ image = Image::FromFile("Splant.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Sewage Plant ";
			 }
			 void Sport_clk(){
				 chk[47] = 1;
				 Sport->BackColor = Color::Green;
				 Sport->Text = "Sports";
				 Image^ image = Image::FromFile("Sport.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Athletic Field: Part of the immense grounds and sports facilities that are carefully maintained in order to provide a holistic environment to the IITG Fraternity ";
			 }
			 void Subbu_clk(){
				 chk[48] = 1;
				 Subbu->BackColor = Color::Green;
				 Subbu->Text = "Subansiri";
				 Image^ image = Image::FromFile("Subbu.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Inaugurated in 2003, Subansiri is the 1st girls' hostel in the campus. Named after the largest tributary of the Brahmaputra, this hostel houses research scholars, UGs and PGs. Over the last couple of years, it has grown to accommodate 503 students ";
			 }

			 void Swim_clk(){
				 chk[49] = 1;
				 swim->BackColor = Color::Green;
				 swim->Text = "Swimming pool";
				 Image^ image = Image::FromFile("swim.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Swimming Pool: The 50 metre long and 24 feet deep world class swimming pool leaves you in awe. The 42nd Inter IIT Aquatics Meet was held here. It has a fully functioning filtration plant and also facilitates playing water polo. You can also dive from enthralling three stage diving platform that goes as high as 19 feet. The sanitation of the pool is always kept as a priority and thus is well maintained. Necessary apparel and equipment can be bought from the pool itself ";
			 }
			 void Tennis_clk(){
				 chk[50] = 1;
				 Tennis->BackColor = Color::Green;
				 Tennis->Text = "Tennis Court";
				 Image^ image = Image::FromFile("Tennis.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Tennis Courts: Part of the immense grounds and sports facilities that are carefully maintained in order to provide a holistic environment to the IITG Fraternity ";
			 }
			 void Umiam_clk(){
				 chk[51] = 1;
				 Umiam->BackColor = Color::Green;
				 Umiam->Text = "Umiam";
				 Image^ image = Image::FromFile("Umiam.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Umiam hostel was the 8th hostel in IITG. The origin of the name came from the river Umiam originating from Meghalaya ";
			 }
			 void Viewpoint_clk(){
				 chk[52] = 1;
				 Viewpoint->BackColor = Color::Green;
				 Viewpoint->Text = "Viewpoint";
				 Image^ image = Image::FromFile("Viewpoint.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Viewpoint for awesome view. ";
			 }
			 void Workshop_clk(){
				 chk[53] = 1;
				 Workshop->BackColor = Color::Green;
				 Workshop->Text = "Workshop";
				 Image^ image = Image::FromFile("Workshop.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "Workshop mech dept. ";
			 }
			 void Cc_clk(){
				 chk[54] = 1;
				 Cc->BackColor = Color::Green;
				 Cc->Text = "Library";
				 Image^ image = Image::FromFile("Cc.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear(); textBox3->Text = textBox3->Text + "The Computer & Communication Centre remains open for seventeen hours in a day and the students visit the Centre for their routine computing task. Besides the resources of the Computer Center is used by the departments to conduct their practical courses.The CSE dept conducts their computer programming practical in the Centre for the first year Btech students, the Mechanical Engineering Dept uses the Centre for their engineering drawing practical, students of ECE dept. use the Centre resources to work on Matlab. Likewise all the other departments conduct some of their labs in the Centre ";
			 }
			 void Dd_clk(){
				 chk[55] = 1;
				 Dd->BackColor = Color::Green;
				 Dd->Text = "Design Dept";
				 Image^ image = Image::FromFile("Dd.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The Department of Design(DoD), one of the thirteen departments at IIT Guwahati, was set up with a vision to enkindle some of the brightest technical minds of the country a passion for innovation in technology driven by a firm understanding, appreciation and celebration of design. The focus of the programs here is on the study, invention, and creative use of technologies to create effective, usable, enjoyable experiences through interdisciplinary research in engineering, design, behavioral and social sciences, and to understand the impact of technology on individuals, groups, and organizations. The department envisions to produce successful graduates who will be capable of leading the changing scenarios of today and tomorrow through thought, innovation and values ";
			 }

			 void Dquarter_clk()
			 {
				 chk[21] = 1;
				 Dquarter->BackColor = Color::Green;
				 Dquarter->Text = "Dquarter";
				 Image^ image = Image::FromFile("Dquarter.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Quarter for Prof. ";
			 }


			 void Eee_clk()
			 {
				 chk[22] = 1;
				 Eee->BackColor = Color::Green;
				 Eee->Text = "Eee";
				 Image^ image = Image::FromFile("Eee.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The department was established during the inception of the institute in 1995. Since its commencement, the primary objective of the department has been to impart quality education, training and research at the undergraduate, postgraduate and doctoral levels in various areas of Electronics and Communication Engineering with broad emphasis on design aspects of electronic systems. The major areas of faculty expertise of the department include Communications, Advanced DSP, Biomedical and Speech Processing, Control, Instrumentation, VLSI, Image Processing and Computer Vision ";
			 }


			 void Faculty_clk()
			 {
				 chk[23] = 1;
				 Faculty->BackColor = Color::Green;
				 Faculty->Text = "Faculty";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Faculty gate ";
			 }


			 void Fquarter_clk()
			 {
				 chk[24] = 1;
				 Fquarter->BackColor = Color::Green;
				 Fquarter->Text = "Fquarter";
				 Image^ image = Image::FromFile("Dquarter.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Quarter for Prof ";
			 }


			 void Guest_clk()
			 {
				 chk[25] = 1;
				 Guest->BackColor = Color::Green;
				 Guest->Text = "Guest";
				 Image^ image = Image::FromFile("Guest.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Guesthouse: The institute has a beautiful guest house which is used to accommodate invitees, important personalities and guardians of students of the institute. The beautiful design of guest house makes it possible for most of the rooms to enjoy the scenic beauty of serpentine lake and surroundings. The dining in the guest house is believed to serve the best food available in the campus. The current guest house consists of 60 rooms and a new guest house is under construction to accommodate more people ";
			 }


			 void Hospital_clk()
			 {
				 chk[26] = 1;
				 Hospital->BackColor = Color::Green;
				 Hospital->Text = "Hospital";
				 Image^ image = Image::FromFile("Hospital.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The IIT Guwahati Hospital is located inside the scenic IIT Guwahati campus..IITG hospital has an Emergency Room, Minor OT room, ECG Room, 10 numbers of Patient Cabin, 02 numbers of Isolation Cabin and 02 numbers of General Ward.Hospital has 24 hrs Doctor, Nursing and Pharmacy service for its patients provided by outsourced hospital service provider. It has a Reception Counter for Patients registration, Diagnostics Laboratory with specimen collection facility for its patients from 8.00 PM to 1.00 PM provided by outsourced hospital service provider. The Hospital also has two ambulances for patient care ";
			 }


			 void Hss_clk()
			 {
				 chk[27] = 1;
				 Hss->BackColor = Color::Green;
				 Hss->Text = "Hss";
				 Image^ image = Image::FromFile("Hss.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The Department of Humanities and Social Sciences consists of eight academic disciplines, viz. Economics, English, Linguistics, Philosophy, Psychology, Sociology and History & Archeology and Political Science. The department offers courses for students at B Tech, M.A. and Ph. D level.  ";
			 }


			 void Kameng_clk()
			 {
				 chk[28] = 1;
				 Kameng->BackColor = Color::Green;
				 Kameng->Text = "Kameng";
				 Image^ image = Image::FromFile("Kameng.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Kameng Hostel is named after the tributary Kameng of the mighty river Bramhaputra. Kameng has 504 rooms distributed over five blocks(B1,B2,B3,B4 and C1).The B blocks have 30 rooms on each floor while the C1 block has eight rooms on each floor.";
			 }


			 void Kapili_clk()
			 {
				 chk[29] = 1;
				 Kapili->BackColor = Color::Green;
				 Kapili->Text = "Kapili";
				 Image^ image = Image::FromFile("Kapili.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Hostel Kapili: Mostly undergraduate students reside in this 300 capacity hostel. The hostel has a reading room, table tennis room, television room and music room to ensure a pleasant stay to all the boarders. In addition, the hostel has a juice centre, canteen and stationery shop to cater the need of the students ";
			 }


			 void Kv_clk()
			 {
				 chk[30] = 1;
				 Kv->BackColor = Color::Green;
				 Kv->Text = "Kv";
				 Image^ image = Image::FromFile("Kv.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Kendriya Vidyalaya IITG has finally realised its vision of growing itself into a full fledged Higher Secondary School with a well designed building that accommodate well equipped laboratories , adequate library facilities, furnished classrooms with modern amenities, teaching aids, playground, etc. to render teaching learning enjoyable and effective. Well trained, dedicated teachers in respective fields selected on the basis of nationwide tests are appointed ";
			 }


			 void Kvgate_clk()
			 {
				 chk[31] = 1;
				 Kvgate->BackColor = Color::Green;
				 Kvgate->Text = "Kvgate";
				 Image^ image = Image::FromFile("Kvgate.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Exit Gate ";
			 }


			 void Lecture_clk()
			 {
				 chk[32] = 1;
				 Lecture->BackColor = Color::Green;
				 Lecture->Text = "Lecture";
				 Image^ image = Image::FromFile("Lecture.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Lecture hall ";
			 }


			 void Lohit_clk()
			 {
				 chk[33] = 1;
				 Lohit->BackColor = Color::Green;
				 Lohit->Text = "Lohit";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Lohit hostel ";
			 }


			 void Ma_clk()
			 {
				 chk[34] = 1;
				 Ma->BackColor = Color::Green;
				 Ma->Text = "Mathematics";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The department of mathematics at the IIT Guwahati was formed in 1995. The department is recognized all over the world for its involvement in excellent research and teaching. The focus of the department has been in developing the state-of-art computational and experimental facilities for teaching and research activities.The Department has excellent laboratories well-stocked with state-of-the-art technical equipment and apparatus. There are 14 different laboratories in the department.The faculty strength of the department is 34 along with 27 supporting staff. Since its inception, the department has awarded 426 B.Tech, 322 M.Tech and 31 PhD degrees ";
			 }


			 void Maingate_clk()
			 {
				 chk[35] = 1;
				 Maingate->BackColor = Color::Green;
				 Maingate->Text = "Maingate";
				 Image^ image = Image::FromFile("Maingate.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "main gate ";
			 }


			 void Manas_clk()
			 {
				 chk[36] = 1;
				 Manas->BackColor = Color::Green;
				 Manas->Text = "Manas";
				 Image^ image = Image::FromFile("Manas.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Manas, is the first hostel of IIT Guwahati and has been the home for some of India's best for the last 15 years. This hostel was previously a co-ed hostel; however it is currently a boys only hostel ";
			 }


			 void Mandir_clk()
			 {
				 chk[37] = 1;
				 Mandir->BackColor = Color::Green;
				 Mandir->Text = "Mandir";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Temple Of college ";
			 }


			 void Mch_clk()
			 {
				 chk[38] = 1;
				 Mch->BackColor = Color::Green;
				 Mch->Text = "Mch";
				 Image^ image = Image::FromFile("Mch.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "Manas community hall ";
			 }


			 void Me_clk()
			 {
				 chk[39] = 1;
				 Me->BackColor = Color::Green;
				 Me->Text = "Me";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "The department of mechanical engineering at the IIT Guwahati was formed in 1995. The department is recognized all over the world for its involvement in excellent research and teaching. The focus of the department has been in developing the state-of-art computational and experimental facilities for teaching and research activities.The Department has excellent laboratories well-stocked with state-of-the-art technical equipment and apparatus. There are 14 different laboratories in the department.The faculty strength of the department is 34 along with 27 supporting staff. Since its inception, the department has awarded 426 B.Tech, 322 M.Tech and 31 PhD degrees ";
			 }


			 void Mscholar_clk()
			 {
				 chk[40] = 1;
				 Mscholar->BackColor = Color::Green;
				 Mscholar->Text = "Mscholar";
				 Image^ image = Image::FromFile("No.jpg");
				 this->pictureBox2->BackgroundImage = image; textBox3->Clear();
				 textBox3->Text = textBox3->Text + "IIT Guwahati provides special Hostels to the Married Scholars of IITG,  which provides 2 rooms and one kitchen for each married scholar ";
			 }

		 

		 //
		 //click event handlers
		 //
private: System::Void Sacext_Click(System::Object^  sender, System::EventArgs^  e) {/*on clicking an object, call make_invisible()
																							 to restore the unselected state and the call
																							 Sacext_clk() to show image,text and color*/
					  make_invisible();
					  Sacext_clk();

		 }
private: System::Void Barak_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Barak_clk();
}
private: System::Void Umiam_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Umiam_clk();

}
private: System::Void Abquarter_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Abquarter_clk();
}
private: System::Void Admin_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Admin_clk();
}
private: System::Void As_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 As_clk();
}
private: System::Void Aseb_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Aseb_clk();
}
private: System::Void Audi_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Audi_clk();
}
private: System::Void Bpark_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Bpark_clk();
}
private: System::Void Brahmaputra_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Brahmaputra_clk();
}
private: System::Void Bt_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Bt_clk();
}
private: System::Void Cc_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Cc_clk();
}
private: System::Void Ce_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Ce_clk();
}
private: System::Void Cet_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Cet_clk();
}
private: System::Void Cfquarter_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Cfquarter_clk();
}
private: System::Void Ch_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Ch_clk();
}
private: System::Void Cl_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Cl_clk();
}
private: System::Void Complex_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Complex_clk();
}
private: System::Void Conf_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Conf_clk();
}
private: System::Void Cricket_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Cricket_clk();
}
private: System::Void Cse_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Cse_clk();
}
private: System::Void Dd_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Dd_clk();
}
private: System::Void Dhanno_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Dhanno_clk();
}
private: System::Void Dibang_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Dibang_clk();
}
private: System::Void Dihing_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Dihing_clk();
}
private: System::Void Dquarter_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Dquarter_clk();
}
private: System::Void Eee_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Eee_clk();
}
private: System::Void Faculty_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Faculty_clk();
}
private: System::Void Fquarter_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Fquarter_clk();
}
private: System::Void Guest_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Guest_clk();
}
private: System::Void Hospital_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Hospital_clk();
}
private: System::Void Hss_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Hss_clk();
}
private: System::Void Kameng_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Kameng_clk();
}
private: System::Void Kapili_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Kapili_clk();
}
private: System::Void Kv_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Kv_clk();
}
private: System::Void Kvgate_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Kvgate_clk();
}
private: System::Void Lecture_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Lecture_clk();
}
private: System::Void Lohit_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Lohit_clk();
}
private: System::Void Ma_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Ma_clk();
}
private: System::Void Maingate_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Maingate_clk();
}
private: System::Void Manas_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Manas_clk();
}
private: System::Void Mandir_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Mandir_clk();
}
private: System::Void Mch_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Mch_clk();
}
private: System::Void Me_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Me_clk();
}
private: System::Void Mscholar_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Mscholar_clk();
}
private: System::Void Newsac_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Newsac_clk();
}
private: System::Void Siang_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Siang_clk();
}
private: System::Void Slake_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Slake_clk();
}
private: System::Void Splant_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Splant_clk();
}
private: System::Void Sport_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Sport_clk();
}
private: System::Void Subbu_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Subbu_clk();
}
private: System::Void swim_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Swim_clk();
}
private: System::Void Tennis_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Tennis_clk();
}
private: System::Void Viewpoint_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Viewpoint_clk();
}
private: System::Void Workshop_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Workshop_clk();
}
private: System::Void Ph_Click(System::Object^  sender, System::EventArgs^  e) {
			 make_invisible();
			 Ph_clk();
}
		 //
		 //
		 //

		 //
		 //Search: this function uses text mining to search for the string s in the strings defined in global array of strings
		 //
		 String ^s;
		 int search_map(int val)
		 {
			
			
			 String^ x;
			 int i;																
			 s = s->ToLower();	//converts string to lower characters
			 int chk = -1, current = 0;
			 for (i = 0; i < 59; i++)
			 {
				 current = 0;
				 x = gcnew String(a[i].c_str());
				 int len = x->Length;
				 for (int j = 0; j < s->Length; j++)
				 {
					 if (x[current] == s[j])
					 {
						 if (current < len - 1)					/*this loop is used to check whether a search query matches
																any of the contents of the places of IIT-G*/
							 current++;
						 else
						 {
							 chk = i;
							 break;
						 }
					 }
					 else
						 current = 0;
				 }
				 if (chk != -1)
					 break;
			 }
			 if (val == 0)
			 {
				 handlecases(i, chk);
				 return 0;
			 }
			 else if (val == 1)
			 {
				 if (chk == -1)
				 {
					 return -1;
				 }
				 else
				 {
					 return i;
				 }
			 }
		 }
		 //
		 //
		 //

		 //
		 //event handler for single node display
		 //
		 void handlecases(int i, int chk)
		 {
			 if (chk == -1)
			 {
				 comboBox1->Text = "Not Results Found";		//No results found if query doesn't match any of the strings in the array
			 }
			 else
			 {
				 if (i == 0)
				 {
					 make_invisible();					//if search query matches a string, call make_invisible and call (string)_clk()
					 Abquarter_clk();
				 }
				 else if (i == 1)
				 {
					 make_invisible();
					 Admin_clk();
				 }
				 else if (i == 2)
				 {
					 make_invisible();
					 As_clk();
				 }
				 else if (i == 3)
				 {
					 make_invisible();
					 Aseb_clk();
				 }
				 else if (i == 4)
				 {
					 make_invisible();
					 Audi_clk();
				 }
				 else if (i == 5)
				 {
					 make_invisible();
					 Barak_clk();
				 }
				 else if (i == 6)
				 {
					 make_invisible();
					 Bpark_clk();
				 }
				 else if (i == 7)
				 {
					 make_invisible();
					 Brahmaputra_clk();
				 }
				 else if (i == 8)
				 {
					 make_invisible();
					 Bt_clk();
				 }
				 else if (i == 9)
				 {
					 make_invisible();
					 Ce_clk();
				 }
				 else if (i == 10)
				 {
					 make_invisible();
					 Cet_clk();
				 }
				 else if (i == 11)
				 {
					 make_invisible();
					 Cfquarter_clk();
				 }
				 else if (i == 12)
				 {
					 make_invisible();
					 Ch_clk();
				 }
				 else if (i == 13)
				 {
					 make_invisible();
					 Ce_clk();
				 }
				 else if (i == 14)
				 {
					 make_invisible();
					 Cfquarter_clk();
				 }
				 else if (i == 15)
				 {
					 make_invisible();
					 Cc_clk();
				 }
				 else if (i == 16)
				 {
					 make_invisible();
					 Complex_clk();
				 }
				 else if (i == 17)
				 {
					 make_invisible();
					 Conf_clk();
				 }
				 else if (i == 18)
				 {
					 make_invisible();
					 Cricket_clk();
				 }
				 else if (i == 19)
				 {
					 make_invisible();
					 Cse_clk();
				 }
				 else if (i == 20)
				 {
					 make_invisible();
					 Dd_clk();
				 }
				 else if (i == 21)
				 {
					 make_invisible();
					 Dhanno_clk();
				 }
				 else if (i == 22)
				 {
					 make_invisible();
					 Dibang_clk();
				 }
				 else if (i == 23)
				 {
					 make_invisible();
					 Dihing_clk();
				 }
				 else if (i == 24)
				 {
					 make_invisible();
					 Dquarter_clk();
				 }
				 else if (i == 25)
				 {
					 make_invisible();
					 Eee_clk();
				 }
				 else if (i == 26)
				 {
					 make_invisible();
					 Faculty_clk();
				 }
				 else if (i == 27)
				 {
					 make_invisible();
					 Fquarter_clk();
				 }
				 else if (i == 28)
				 {
					 make_invisible();
					 Guest_clk();
				 }
				 else if (i == 29)
				 {
					 make_invisible();
					 Hospital_clk();
				 }
				 else if (i == 30)
				 {
					 make_invisible();
					 Hss_clk();
				 }
				 else if (i == 31)
				 {
					 make_invisible();
					 Kameng_clk();
				 }
				 else if (i == 32)
				 {
					 make_invisible();
					 Kapili_clk();
				 }
				 else if (i == 33)
				 {
					 make_invisible();
					 Kv_clk();
				 }
				 else if (i == 34)
				 {
					 make_invisible();
					 Kvgate_clk();
				 }
				 else if (i == 35)
				 {
					 make_invisible();
					 Lecture_clk();
				 }
				 else if (i == 36)
				 {
					 make_invisible();
					 Cc_clk();
				 }
				 else if (i == 37)
				 {
					 make_invisible();
					 Lohit_clk();
				 }
				 else if (i == 38)
				 {
					 make_invisible();
					 Ma_clk();
				 }
				 else if (i == 39)
				 {
					 make_invisible();
					 Maingate_clk();
				 }
				 else if (i == 40)
				 {
					 make_invisible();
					 Manas_clk();
				 }
				 else if (i == 41)
				 {
					 make_invisible();
					 Mandir_clk();
				 }
				 else if (i == 42)
				 {
					 make_invisible();
					 Mch_clk();
				 }
				 else if (i == 43)
				 {
					 make_invisible();
					 Me_clk();
				 }
				 else if (i == 44)
				 {
					 make_invisible();
					 Mscholar_clk();
				 }
				 else if (i == 45)
				 {
					 make_invisible();
					 Newsac_clk();
				 }
				 else if (i == 46)
				 {
					 make_invisible();
					 Ph_clk();
				 }
				 else if (i == 47)
				 {
					 make_invisible();
					 Sacext_clk();
				 }
				 else if (i == 48)
				 {
					 make_invisible();
					 Siang_clk();
				 }
				 else if (i == 49)
				 {
					 make_invisible();
					 Slake_clk();
				 }
				 else if (i == 50)
				 {
					 make_invisible();
					 Splant_clk();
				 }
				 else if (i == 51)
				 {
					 make_invisible();
					 Sport_clk();
				 }
				 else if (i == 52)
				 {
					 make_invisible();
					 Subbu_clk();
				 }
				 else if (i == 53)
				 {
					 make_invisible();
					 Swim_clk();
				 }
				 else if (i == 54)
				 {
					 make_invisible();
					 Tennis_clk();
				 }
				 else if (i == 55)
				 {
					 make_invisible();
					 Umiam_clk();
				 }
				 else if (i == 56)
				 {
					 make_invisible();
					 Viewpoint_clk();
				 }
				 else if (i == 57)
				 {
					 make_invisible();
					 Workshop_clk();
				 }
				 else if (i == 58)
				 {
					 make_invisible();
					 Cl_clk();
				 }

			 }
		 }
		 //
		 //
		 //
///click event of the search button 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->label16->Text == "Search")
			 {

				 s = comboBox1->Text;
				 make_invisible();
				 distancesearch();
			 }
			 else
			 {
				 s = comboBox1->Text;
				 search_map(0);
			 }
}
	
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label52_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 //this function perform the search on the input strings to get the index value of the search 
		 //string from the global array and assign them a particular number for dijkstras algo search 
		 void distancesearch()
		 {
			 String ^a = comboBox2->Text;
			 String ^b = comboBox1->Text;
			 if (a == b)
				 return;
			 s = a;
			 int x = search_map(1),start,end;
			 s = b;
			 int y = search_map(1);
			 if (x == -1)
			 {
				 comboBox2->Text = "String Not Found";
				 return;
			 }
			 else if(x == 23)
			 {
				 start = 0;//dihing
			 }
			 else if(x == 7)
			 {
				 start = 1;//brahma
			 }
			 else if(x == 32)
			 {
				 start = 5;//kapili
			 }
			 else if (x == 22)
			 {
				 start = 5;//Dibang
			 }
			 else if (x == 51)
			 {
				 start = 10;//sports
			 }
			 else if (x == 52)
			 {
				 start = 13;//subbu
			 }
			 else if (x == 27)
			 {
				 start = 14;//fquarters
			 }
			 else if (x == 28)
			 {
				 start = 15;//guest house
			 }
			 else if (x == 4)
			 {
				 start = 19;//audi
			 }
			 else if (x == 17)
			 {
				 start = 19;//conf
			 }
			 else if (x == 15)
			 {
				 start = 27;//CC
			 }
			 else if (x == 1)
			 {
				 start = 25;//admin
			 }
			else if (x == 20)
			 {
				 start = 78;//design
			 }
			else if (x == 43)
			{
				start =	78 ;//me
			}
			else if (x == 38)
			{
				start = 42;//math
			}
			else if (x ==19 )
			{
				start =42 ;//cse
			}
			else if (x ==25 )
			{
				start = 47;//eee
			}
			else if (x == 12)
			{
				start = 47;//chemisry
			}
			else if (x == 30)
			{
				start = 48;//hss
			}
			else if (x == 58)
			{
				start = 49;//chemical
			}
			else if (x == 8)
			{
				start = 66;//bt
			}
			else if (x == 57)
			{
				start = 51;//workshop
			}
			else if (x == 9)
			{
				start = 60;//civil
			}
			else if (x == 46)
			{
				start = 60;//physics
			}
			else if (x == 34)
			{
				start = 75;//kvgate
			}
			else
			{
				comboBox2->Text = "String Not Found";
				return;
			}
			
			 if (y == -1)
			 {
				 comboBox1->Text = "String Not Found";
				 return;
			 }
			 else if (y == 23)
			 {
				 end = 0;//dihing
			 }
			 else if (y == 7)
			 {
				 end = 1;//brahma
			 }
			 else if (y == 22)
			 {
				 start = 5;//Dibang
			 }
			 else if (y == 32)
			 {
				 end = 5;//kapili
			 }
			 else if (y == 51)
			 {
				 end = 10;//sports
			 }
			 else if (y == 52)
			 {
				 end = 13;//subbu
			 }
			 else if (y == 27)
			 {
				 end = 14;//fquarters
			 }
			 else if (y == 28)
			 {
				 end = 15;//guest house
			 }
			 else if (y == 4)
			 {
				 end = 19;//audi
			 }
			 else if (y == 17)
			 {
				 end = 19;//conf
			 }
			 else if (y == 15)
			 {
				 end = 27;//CC
			 }
			 else if (y == 1)
			 {
				 end = 25;//admin
			 }
			 else if (y == 20)
			 {
				 end = 78;//design
			 }
			 else if (y == 43)
			 {
				 end = 78;//me
			 }
			 else if (y == 38)
			 {
				 end = 42;//math
			 }
			 else if (y == 19)
			 {
				 end = 42;//cse
			 }
			 else if (y == 25)
			 {
				 end = 47;//eee
			 }
			 else if (y == 12)
			 {
				 end = 47;//chemisry
			 }
			 else if (y == 30)
			 {
				 end = 48;//hss
			 }
			 else if (y == 58)
			 {
				 end = 49;//chemical
			 }
			 else if (y == 8)
			 {
				 end = 66;//bt
			 }
			 else if (y == 57)
			 {
				 end = 51;//workshop
			 }
			 else if (y == 9)
			 {
				 end = 60;//civil
			 }
			 else if (y == 46)
			 {
				 end = 60;//physics
			 }
			 else if (y == 34)
			 {
				 end = 74;//kvgate
			 }
			 else
			 {
				 comboBox1->Text = "String Not Found";
				 return;
			 }
			 graph_node xyz;
			 struct node2 ret;
			 ret = xyz.dijkstra(start, end);
			 printpath(ret);
		 }

		

		 //display the path between the nodes
		 void printpath(struct node2 ret)
		 {
			 int *parent;
			 parent = ret.parent;
			 int start, end;
			 start = ret.start;
			 end = ret.end;

			 int cur = end;
			 for (int i = 0; i < 78; i++)
			 {
				 
				 if (cur == 0)
					 this->label21->Visible = true;
				 else if (cur == 1)
					 this->label61->Visible = true;
				 else if (cur == 2)
					 this->label59->Visible = true;
				 else if (cur == 3)
					 this->label58->Visible = true;
				 else if (cur == 4)
					 this->label14->Visible = true;
				 else if (cur == 5)
					 this->label13->Visible = true;
				 else if (cur == 6)
					 this->label116->Visible = true;
				 else if (cur == 7)
					 this->label2->Visible = true;
				 else if (cur == 8)
					 this->label3->Visible = true;
				 else if (cur == 9)
					 this->label41->Visible = true;
				 else if (cur == 10)
					 this->label15->Visible = true;
				 else if (cur == 11)
					 this->label10->Visible = true;
				 else if (cur == 12)
					 this->label40->Visible = true;
				 else if (cur == 13)
					 this->label4->Visible = true;
				 else if (cur == 14)
					 this->label5->Visible = true;
				 else if (cur == 15)
					 this->label6->Visible = true;
				 else if (cur == 16)
					 this->label84->Visible = true;
				 else if (cur == 17)
					 this->label86->Visible = true;
				 else if (cur == 18)
					 this->label88->Visible = true;
				 else if (cur == 19)
					 this->label102->Visible = true;
				 else if (cur == 20)
					 this->label93->Visible = true;
				 else if (cur == 21)
					 this->label91->Visible = true;
				 else if (cur == 22)
					 this->label100->Visible = true;
				 else if (cur == 23)
					 this->label106->Visible = true;
				 else if (cur == 24)
					 this->label99->Visible = true;
				 else if (cur == 25)
					 this->label97->Visible = true;
				 else if (cur == 26)
					 this->label96->Visible = true;
				 else if (cur == 27)
					 this->label95->Visible = true;
				 else if (cur == 28)
					 this->label79->Visible = true;
				 else if (cur == 29)
					 this->label81->Visible = true;
				 else if (cur == 30)
					 this->label83->Visible = true;
				 else if (cur == 31)
					 this->label110->Visible = true;
				 else if (cur == 32)
					 this->label112->Visible = true;
				 else if (cur == 33)
					 this->label114->Visible = true;
				 else if (cur == 34)
					 this->label109->Visible = true;
				 else if (cur == 35)
					 this->label107->Visible = true;
				 else if (cur == 36)
					 this->label117->Visible = true;
				 else if (cur == 37)
					 this->label29->Visible = true;
				 else if (cur == 38)
					 this->label119->Visible = true;
				 else if (cur == 39)
					 this->label121->Visible = true;
				 else if (cur == 40)
					 this->label123->Visible = true;
				 else if (cur == 41)
					 this->label124->Visible = true;
				 else if (cur == 42)
					 this->label142->Visible = true;
				 else if (cur == 43)
					 this->label126->Visible = true;
				 else if (cur == 44)
					 this->label127->Visible = true;
				 else if (cur == 45)
					 this->label129->Visible = true;
				 else if (cur == 46)
					 this->label130->Visible = true;
				 else if (cur == 47)
					 this->label23->Visible = true;
				 else if (cur == 48)
					 this->label74->Visible = true;
				 else if (cur == 49)
					 this->label73->Visible = true;
				 else if (cur == 50)
					 this->label24->Visible = true;
				 else if (cur == 51)
					 this->label9->Visible = true;
				 else if (cur == 52)
					 this->label37->Visible = true;
				 else if (cur == 53)
					 this->label39->Visible = true;
				 else if (cur == 54)
					 this->label30->Visible = true;
				 else if (cur == 55)
					 this->label8->Visible = true;
				 else if (cur == 56)
					 this->label72->Visible = true;
				 else if (cur == 57)
					 this->label71->Visible = true;
				 else if (cur == 58)
					 this->label70->Visible = true;
				 else if (cur == 59)
					 this->label60->Visible = true;
				 else if (cur == 60)
					 this->label11->Visible = true;
				 else if (cur == 61)
					 this->label62->Visible = true;
				 else if (cur == 62)
					 this->label69->Visible = true;
				 else if (cur == 63)
					 this->label141->Visible = true;
				 else if (cur == 64)
					 this->label139->Visible = true;
				 else if (cur == 65)
					 this->label137->Visible = true;
				 else if (cur == 66)
					 this->label12->Visible = true;
				 else if (cur == 67)
					 this->label136->Visible = true;
				 else if (cur == 68)
					 this->label134->Visible = true;
				 else if (cur == 69)
					 this->label132->Visible = true;
				 else if (cur == 70)
					 this->label63->Visible = true;
				 else if (cur == 71)
					 this->label64->Visible = true;
				 else if (cur == 72)
					 this->label65->Visible = true;
				 else if (cur == 73)
					 this->label66->Visible = true;
				 else if (cur == 74)
					 this->label67->Visible = true;
				 else if (cur == 75)
					 this->label68->Visible = true;
				 else if (cur == 76)
					 this->label7->Visible = true;
				 else if (cur == 77)
					 this->label104->Visible = true;
				 if (cur == start)
					 return;
				 cur = parent[cur];
			 }
		 }

	

		 ///this is the click event handler for the the label
		 ///that displays the other option different from the one being used currently
		 //path search or place search
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->label16->Text == "Shortest Path")
			 {
				 this->label16->Text = "Search";
				 this->label16->ForeColor = Color::GreenYellow;
				 this->comboBox2->Visible = true;
				 this->comboBox1->Items->Clear();
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
					 L"Administrative Building", L"Auditorium", L"Brahamaputra Hostel", L"Biotechnology Dept", L"Civil Engineering Dept", L"Chemistry Dept", L"Civil Dept",
						 L"Computer Center", L"Conference Room", L"CSE Dept", L"Design Dept", L"Dibang Hostel", L"Dihing Hostel", L"Electrical Dept",
						 L"Faculty Quarters", L"Guest House", L"HSS Dept", L"Kapili", L"Kendriya Vidhalya", L"KV Gate", L"Lecture Rooms", L"Library", L"Math Dept", L"Mechanical Dept", 
						 L"New SAC", L"Physics Dept", L"Sports Complex", L"Subansiri",
						 L"Workshop"
				 });
			 }
			 else if (this->label16->Text == "Search")
			 {
				 this->label16->Text = "Shortest Path";
				 this->label16->ForeColor = Color::Aqua;
				 this->comboBox2->Visible = false;
				 this->comboBox1->Items->Clear();
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
					 L"AB Quarter", L"Administrative Building", L"Akshara School",
						 L"Aseb Gate", L"Auditorium", L"Barak Hostel", L"Biotech Park", L"Brahamaputra Hostel", L"Biotechnology Dept", L"Civil Engineering Dept",
						 L"Center For Education Technology", L"CF quarters", L"Chemistry Dept", L"Civil Dept", L"Cf quarters", L"Computer Center", L"Market Complex",
						 L"Conference Room", L"Cricket Field", L"CSE Dept", L"Design Dept", L"Dhansiri Hostel", L"Dibang Hostel", L"Dihing Hostel", L"D quarters",
						 L"Electrical Dept", L"Faculty Gate", L"Faculty Quarters", L"Guest House", L"Hospital", L"HSS Dept", L"Kameng Hostel", L"Kapili",
						 L"Kendriya Vidhalya", L"KV Gate", L"Lecture Rooms", L"Library", L"Lohit Hostel", L"Math Dept", L"Main Gate", L"Manas Hostel",
						 L"Mandir", L"Manas Community Hall", L"Mechanical Dept", L"Marridied Scholar", L"New SAC", L"Physics Dept", L"Sac Extension",
						 L"Siang Hostel", L"Serpentine Lake", L"Sewage Plant", L"Sports Complex", L"Subansiri", L"Swimming Pool", L"Tennis Court", L"Umiam Hostel",
						 L"Viewpoint", L"Workshop"
				 });
			 }
			 }


		 //enter key press handler
private: System::Void comboBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 if (this->label16->Text == "Search")
				 {

					 s = comboBox1->Text;
					 make_invisible();
					 distancesearch();
				 }
				 else
				 {
					 s = comboBox1->Text;
					 search_map(0);
				 }
			 }
}
private: System::Void comboBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 if (this->label16->Text == "Search")
				 {

					 s = comboBox1->Text;
					 make_invisible();
					 distancesearch();
				 }
				 else
				 {
					 s = comboBox1->Text;
					 search_map(0);
				 }
			 }
}
};

}

