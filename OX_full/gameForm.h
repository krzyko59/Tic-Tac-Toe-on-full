#pragma once

namespace OXfull 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class gameForm : public System::Windows::Forms::Form
	{
		bool turaX = false;
		int xWynik = 0;
		int oWynik = 0;
		bool isWin = false;
	public:
		//konstruktor
		gameForm(void)
		{
			InitializeComponent();
			CreateMap();
		}

	protected:
		//destruktor
		~gameForm()
		{
			if (components)
			{
				delete components;
			}
			delete[] buttons;
		}
	private: 
		System::Windows::Forms::SplitContainer^ splitContainer1;
	array<System::Windows::Forms::Button^, 2>^ buttons = gcnew array<System::Windows::Forms::Button^, 2>(37, 25);
	System::Windows::Forms::ImageList^ ListOX;
	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::Button^ buttonWyczyscPlansze;
	System::Windows::Forms::Button^ buttonNowaGra;
	System::Windows::Forms::Label^ XWynik;
	System::Windows::Forms::Label^ OWynik;
	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::PictureBox^ PictureTura;
	System::Windows::Forms::ImageList^ ListOX_medium;
	System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gameForm::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonWyczyscPlansze = (gcnew System::Windows::Forms::Button());
			this->buttonNowaGra = (gcnew System::Windows::Forms::Button());
			this->XWynik = (gcnew System::Windows::Forms::Label());
			this->OWynik = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PictureTura = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ListOX = (gcnew System::Windows::Forms::ImageList(this->components));
			this->ListOX_medium = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureTura))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::SkyBlue;
			this->splitContainer1->Panel1->Controls->Add(this->buttonWyczyscPlansze);
			this->splitContainer1->Panel1->Controls->Add(this->buttonNowaGra);
			this->splitContainer1->Panel1->Controls->Add(this->XWynik);
			this->splitContainer1->Panel1->Controls->Add(this->OWynik);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->PictureTura);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &gameForm::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(1008, 601);
			this->splitContainer1->SplitterDistance = 115;
			this->splitContainer1->TabIndex = 0;
			// 
			// buttonWyczyscPlansze
			// 
			this->buttonWyczyscPlansze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonWyczyscPlansze->Location = System::Drawing::Point(3, 514);
			this->buttonWyczyscPlansze->Name = L"buttonWyczyscPlansze";
			this->buttonWyczyscPlansze->Size = System::Drawing::Size(109, 39);
			this->buttonWyczyscPlansze->TabIndex = 8;
			this->buttonWyczyscPlansze->Text = L"Clear Map";
			this->buttonWyczyscPlansze->UseVisualStyleBackColor = true;
			this->buttonWyczyscPlansze->Click += gcnew System::EventHandler(this, &gameForm::clearMap);
			// 
			// buttonNowaGra
			// 
			this->buttonNowaGra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonNowaGra->Location = System::Drawing::Point(3, 559);
			this->buttonNowaGra->Name = L"buttonNowaGra";
			this->buttonNowaGra->Size = System::Drawing::Size(109, 39);
			this->buttonNowaGra->TabIndex = 7;
			this->buttonNowaGra->Text = L"New Game";
			this->buttonNowaGra->UseVisualStyleBackColor = true;
			this->buttonNowaGra->Click += gcnew System::EventHandler(this, &gameForm::buttonNowaGra_Click);
			// 
			// XWynik
			// 
			this->XWynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->XWynik->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"XWynik.Image")));
			this->XWynik->Location = System::Drawing::Point(56, 192);
			this->XWynik->Name = L"XWynik";
			this->XWynik->Size = System::Drawing::Size(56, 56);
			this->XWynik->TabIndex = 6;
			this->XWynik->Text = L"0";
			this->XWynik->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OWynik
			// 
			this->OWynik->BackColor = System::Drawing::Color::Transparent;
			this->OWynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->OWynik->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OWynik.Image")));
			this->OWynik->Location = System::Drawing::Point(0, 192);
			this->OWynik->Name = L"OWynik";
			this->OWynik->Size = System::Drawing::Size(56, 56);
			this->OWynik->TabIndex = 5;
			this->OWynik->Text = L"0";
			this->OWynik->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(3, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Scoreboard:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PictureTura
			// 
			this->PictureTura->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureTura.Image")));
			this->PictureTura->Location = System::Drawing::Point(0, 37);
			this->PictureTura->Name = L"PictureTura";
			this->PictureTura->Size = System::Drawing::Size(112, 112);
			this->PictureTura->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PictureTura->TabIndex = 1;
			this->PictureTura->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Turn:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ListOX
			// 
			this->ListOX->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListOX.ImageStream")));
			this->ListOX->TransparentColor = System::Drawing::Color::Transparent;
			this->ListOX->Images->SetKeyName(0, L"imageNULL.png");
			this->ListOX->Images->SetKeyName(1, L"imageO.png");
			this->ListOX->Images->SetKeyName(2, L"imageX.png");
			// 
			// ListOX_medium
			// 
			this->ListOX_medium->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListOX_medium.ImageStream")));
			this->ListOX_medium->TransparentColor = System::Drawing::Color::Transparent;
			this->ListOX_medium->Images->SetKeyName(0, L"imageO_medium.png");
			this->ListOX_medium->Images->SetKeyName(1, L"imageX_medium.png");
			// 
			// gameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"gameForm";
			this->Text = L"Tic Tac Toe on full";
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureTura))->EndInit();
			this->ResumeLayout(false);

		}
		void CreateMap()
		{
			for (int i = 0; i < 37; ++i)
			{
				for (int j = 0; j < 25; ++j)
				{
					this->buttons[i,j] = (gcnew System::Windows::Forms::Button());
					this->splitContainer1->Panel2->Controls->Add(this->buttons[i, j]);

					this->buttons[i, j]->Image = ListOX->Images[0];
					this->buttons[i, j]->Tag = L"";
					this->buttons[i, j]->Location = System::Drawing::Point(i * 24, j * 24);
					this->buttons[i, j]->Margin = System::Windows::Forms::Padding(0);
					this->buttons[i, j]->Size = System::Drawing::Size(26, 26);
					this->buttons[i, j]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					this->buttons[i, j]->TabIndex = 0;
					this->buttons[i, j]->UseVisualStyleBackColor = true;
					this->buttons[i, j]->Click += gcnew System::EventHandler(this, &gameForm::button_Click);
					this->buttons[i, j]->Click += gcnew System::EventHandler(this, &gameForm::doMove);
				}
			}
		}
#pragma endregion
		System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		System::Void doMove(System::Object^ sender, System::EventArgs^ e)
		{
			if (isWin)
			{
				clearMap(sender,e);
				return;
			}
			Button^ object = (Button^)sender;
			if (object->Tag != "") return;
			object->Image = ListOX->Images[turaX ? 2 : 1];
			object->Tag = (turaX ? L"x" : L"o");
			PictureTura->Image = ListOX_medium->Images[turaX ? 0 : 1];
			sprawdz(object);
			turaX = !turaX;
		}
		System::Void clearMap(System::Object^ sender, System::EventArgs^ e)
		{
			for (int i = 0; i < 37; ++i)
			{
				for (int j = 0; j < 25; ++j)
				{
					this->buttons[i, j]->Tag = L"";
					this->buttons[i, j]->Image = ListOX->Images[0];
					this->buttons[i, j]->BackColor = System::Drawing::Color::Transparent;
				}
			}
			isWin = false;
		}
		void win()
		{
			isWin = true;
			if (turaX)
			{
				++xWynik;
				this->XWynik->Text = Convert::ToString(xWynik);
			}
			else
			{
				++oWynik;
				this->OWynik->Text = Convert::ToString(oWynik);
			}
		}
		void sprawdz(Button^ object)
		{
			//pobieranie wspolrzednych 
			int x = object->Location.X / 24;
			int y = object->Location.Y / 24;
			int _x;
			int _y;
			int ciag = 0;
			int j, k;
			//parametr do porowniania bloku
			String^ symbolTury = L"o";
			if (turaX) symbolTury = L"x";
			
			//4 kierunki sprawdzania czy jest wygrana
			for (int i=0; i <= 3; ++i)
			{ 
				//9 pol do wprawdzenia czy jest ciag 5 symboli
				for (j = 0; j < 9; ++j)
				{
					//ustalanie wspolrzednych kolejnych pol do sprawdzenia
					switch (i)
					{
					case 0:
						_x = x - 4 + j;
						_y = y;
						break;
					case 1:
						_x = x;
						_y = y - 4 + j;
						break;
					case 2:
						_x = x - 4 + j;
						_y = y - 4 + j;
						break;
					case 3:
						_x = x - 4 + j;
						_y = y + 4 - j;
						break;
					}
					//wyjscie poza zakres tablicy
					if (_x < 0 || _x >= 37 || _y < 0 || _y >= 25) continue;
					//poprawny symbol
					if (buttons[_x, _y]->Tag == symbolTury) ++ciag;
					else //nie poprawny symbol - zerwanie ciagu
						ciag = 0;
					//ciag 5 symboli - wygrana
					if (ciag == 5)
					{
						int _x2, _y2;
						// 5 pol do kolorowania
						for (k = 0; k < 5; ++k)
						{
							//wspolrzenie zaleznosci od kierunku sprawdzania wygranej
							switch (i)
							{
							case 0:
								_x2 = _x -k;
								_y2 = _y;
								break;
							case 1:
								_x2 = _x;
								_y2 = _y - k;
								break;
							case 2:
								_x2 = _x - k;
								_y2 = _y - k;
								break;
							case 3:
								_x2 = _x - k;
								_y2 = _y + k;
								break;
							}
							//wyjscie poza zakres tablicy
							if (_x2 < 0 || _x2 >= 37 || _y2 < 0 || _y2 >= 25) continue;
							buttons[_x2, _y2]->BackColor = turaX ? System::Drawing::Color::Red : System::Drawing::Color::Blue;
						}	
						win();
						return;
					}
				}
			}
		}
		System::Void buttonNowaGra_Click(System::Object^ sender, System::EventArgs^ e)
		{
			clearMap(sender, e);
			bool turaX = false;
			int xWynik = 0;
			this->XWynik->Text = Convert::ToString(xWynik);
			int oWynik = 0;
			this->OWynik->Text = Convert::ToString(oWynik);
			bool isWin = false;
		}
};
}
