#pragma once
#include <iostream> 
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>
namespace ND1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	#include<math.h>
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::ImageList^  imageList3;
	private: System::Windows::Forms::ImageList^  imageList4;
	private: System::Windows::Forms::Label^  label1;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList6 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList4 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(70, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 44);
			this->button2->TabIndex = 2;
			this->button1->Text = L"Vykdyti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList2
			// 
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(16, 16);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList3
			// 
			this->imageList3->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList3->ImageSize = System::Drawing::Size(16, 16);
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList4
			// 
			this->imageList4->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList4->ImageSize = System::Drawing::Size(16, 16);
			this->imageList4->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(87, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Paspauskite mygtuka";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(2, 2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1)
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Name = L"MyForm";
			this->Text = L"Skaiciavimas";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
int Nuskaitoma(ofstream& YF, int masx[1000], int masy[1000])
{
    int kiekis_x=0, kiekis_y=0,kiekis;
    ifstream IsX("FailasX.txt");
    ifstream IsY("FailasY.txt");
    YF << "MASYVAS Y" << endl;
    while (IsX >> masx[kiekis_x])
    {
        YF << masx[kiekis_x] << endl;
        kiekis_x++;
    }
    YF << "MASYVAS X" << endl;
    while (IsY >> masy[kiekis_y])
    {
        YF << masy[kiekis_y] << endl
        kiekis_y++;
    }
    if (kiekis_x>kiekis_y)
        kiekis=kiekis_y;
        else if (kiekis_x<kiekis_y)
            kiekis=kiekis_x;
            else kiekis=kiekis_x;
    return kiekis;
}
//-------------------------------------------------------------//
void Skaiciavimas(ofstream& YF, int masx[1000], int masy[1000], int kiekis)
{
    double Krastine_1=0, Krastine_2=0, Krastine_3=0, p, PagrindX, PagrindY, plotas,a;
    a=kiekis++;
    for (int i=60; i<kiekis; i++){
    PagrindX=masx[i];
    PagrindY=masy[i];
        for (int j=i+1; j<a; j++)
        {
            Krastine_1=sqrt(((PagrindX-masx[j]),2)+pow((PagrindY-masy[j]),2));
            Krastine_2=sqrt(pow(PagrindX,2)+pow(PagrindY,2));
            Krastine_3=sqrt(pow(masx[j],2)+pow(masy[j],2))
            //Herono formule
            //p=(a+b+c)/2
            //S=Sqrt(p*(p-a)*(b-p)*(p-c)
            p=(Krastine_3+Krastine_3+Krastine_2)/2;
            plotas = sqrt(p*(p-Krastine_1)*(p-Krastine_2)*(p-Krastine_3));
            YF << i+1 <<"-o trikampo plotas = " << plotas << endl;
        }
    }
}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int masx[1000], masy[1000];
	int kiekis;
	ofstream YF("Rezultatas.txt");
    kiekis=Nuskaitoma(YF, masx, masy);
    Skaiciavimas(YF, masx, masy, kiekis);
		
	this->label1->Text = "Programa Neveikia";
	}
};
}
