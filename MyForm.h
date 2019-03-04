#pragma once
#include <Windows.h>
#include "Imge.h"
#include<atlstr.h>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		BYTE *Buffer, *Raw_Intensity;
		unsigned int Width, Height;
		long Size;
		int nesne = 0;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::ToolStripMenuItem^  grayImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  binaryImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  histogramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  showHistogramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hideHistogramToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;





			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->binaryImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->histogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showHistogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hideHistogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1016, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->grayImageToolStripMenuItem, this->binaryImageToolStripMenuItem, this->histogramToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// grayImageToolStripMenuItem
			// 
			this->grayImageToolStripMenuItem->Name = L"grayImageToolStripMenuItem";
			this->grayImageToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->grayImageToolStripMenuItem->Text = L"Gray Image";
			this->grayImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayImageToolStripMenuItem_Click);
			// 
			// binaryImageToolStripMenuItem
			// 
			this->binaryImageToolStripMenuItem->Name = L"binaryImageToolStripMenuItem";
			this->binaryImageToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->binaryImageToolStripMenuItem->Text = L"Binary Image";
			this->binaryImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::binaryImageToolStripMenuItem_Click);
			// 
			// histogramToolStripMenuItem
			// 
			this->histogramToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->showHistogramToolStripMenuItem,
					this->hideHistogramToolStripMenuItem
			});
			this->histogramToolStripMenuItem->Name = L"histogramToolStripMenuItem";
			this->histogramToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->histogramToolStripMenuItem->Text = L"Histogram";
			// 
			// showHistogramToolStripMenuItem
			// 
			this->showHistogramToolStripMenuItem->Name = L"showHistogramToolStripMenuItem";
			this->showHistogramToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->showHistogramToolStripMenuItem->Text = L"Show Histogram";
			this->showHistogramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showHistogramToolStripMenuItem_Click);
			// 
			// hideHistogramToolStripMenuItem
			// 
			this->hideHistogramToolStripMenuItem->Name = L"hideHistogramToolStripMenuItem";
			this->hideHistogramToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->hideHistogramToolStripMenuItem->Text = L"Hide Histogram";
			this->hideHistogramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hideHistogramToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(10, 26);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(368, 389);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(171, 10);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(385, 389);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(159, 436);
			this->chart1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(623, 221);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(315, 25);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(406, 389);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(171, 364);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(623, 221);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart1";
			this->chart2->Visible = false;
			this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 596);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		int Width, Height;
		LPCTSTR input;
		CString str;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			str = openFileDialog1->FileName;
			input = (LPCTSTR)str;
			//BMP image okumak
			Buffer = LoadBMP(Width, Height, Size, input);
			Raw_Intensity = ConvertBMPToIntensity(Buffer, Width, Height);
			pictureBox1->Width = Width;
			pictureBox1->Height = Height;


			// GRÝ FORMATA ÇEVÝRME
			this->pictureBox2->Location = System::Drawing::Point(pictureBox1->Left + pictureBox1->Width + 10, 34);

			unsigned int row, column;
			Bitmap^ surface = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);
			pictureBox2->Image = surface;
			Color c;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					//RGB deðerlerini ayný deðer yapýyorum
					c = Color::FromArgb(Raw_Intensity[row*Width + column], Raw_Intensity[row*Width + column], Raw_Intensity[row*Width + column]);
					surface->SetPixel(column, row, c);
				}

			this->pictureBox1->ImageLocation = openFileDialog1->FileName;



			//HÝSTOGRAM
			int dizi[256];
			int n;
			//Piksel sayýlarýnýn atanmasý için oluþturulan dizi sýfýrlandý.
			for (int i = 0; i < 256; i++)
			{
				dizi[i] = 0;
			}

			//Piksel parlaklýk deðeri yeni oluþturulan dizinin o indexinin deðerini 1 artýracak.Tüm piksel deðerleri için bu tekrarlanacak.
			for (int j = 0; j < (Height*Width); j++)
			{
				n = Raw_Intensity[j];
				dizi[n]++;
				n = 0;
			}

			this->chart1->Titles->Clear();//Chart da varsayýlan olarak gelen baþlýklarý temizliyoruz.
			this->chart1->Series->Clear();//Chart da varsayýlan olarak gelen series (Liste) temizliyoruz.
			this->chart1->Series->Add("Histogram");//Histogram baþlýðý eklendi.

												   //GRÝ FORMATTAKÝ RESMÝN HÝSTOGRAM GRAFÝÐÝ
			for (int i = 0; i < 256; i++)
			{
				this->chart1->Series[0]->Points->AddY(dizi[i]);//x parametresi altta yazacak yazýyý belirliyor y ise o yazýnýn deðerini belirliyor.
			}
			//Histogram Sonu

			//KMEANS
			this->pictureBox3->Location = System::Drawing::Point(pictureBox2->Left + pictureBox2->Height + 10, 34);
			Bitmap^ surface1 = gcnew Bitmap(pictureBox3->Width, pictureBox3->Height);
			pictureBox3->Image = surface1;

			double t1 = 50, t2 = 200, tx = 0, ty = 0, t3 = 0; //Random olarak  
			while (t1 != tx && t2 != ty)
			{

				t3 = ((t2 - t1) / 2) + t1;

				double toplam1 = 0, bolü1 = 0;

				double toplam2 = 0, bolü2 = 0;

				for (int i = 0; i < 256; i++)
				{
					if (i < t3)
					{
						toplam1 = toplam1 + dizi[i] * i;
						bolü1 = bolü1 + dizi[i];
					}
					else
					{
						toplam2 = toplam2 + dizi[i] * i;
						bolü2 = bolü2 + dizi[i];
					}
				}

				tx = (toplam1 / bolü1);
				ty = (toplam2 / bolü2);

				if (t1 == tx && t2 == ty)
				{
					break;
				}
				else
				{
					t1 = tx;
					t2 = ty;
					t3 = 0;
					tx = 0;
					ty = 0;
				}
			}

			//Pikseller 255 ve 0 a setle
			//Siyah Beyaz Devamý
			for (int k = 0; k < (Width*Height); k++)
			{
				//Piksel deðeri ortalama bulunan T deðerinden büyükse pikseli 255 e sabitle. 
				if (Raw_Intensity[k] >= t3)
				{
					Raw_Intensity[k] = 255;
				}

				//Piksel deðeri ortalama bulunan T deðerinden küçükse pikseli 0 a sabitle.
				else
				{
					Raw_Intensity[k] = 0;
				}
			}


			//Yeni Siyah Beyaz resmi ekranda göster.
			int k = 0;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					Color n;
					n = Color::FromArgb(Raw_Intensity[k], Raw_Intensity[k], Raw_Intensity[k]);
					k++;
					surface1->SetPixel(column, row, n);
				}

}
		else MessageBox::Show("Dosya acilamadý");
		
	}
			
private: System::Void chart1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//int dizi[256];
	//int n;
	//LPCTSTR input;
	//int Width, Height;
	//long Size;
	//CString str;
	//str = pictureBox1->ImageLocation; //Picturebox taki resmin yolunu alýp açýyoruz, bunu yapmazsak resmi bulamaz raw intensity olmaz.
	//input = (LPCTSTR)str;
	//Buffer = LoadBMP(Width, Height, Size, input);
	//Raw_Intensity = ConvertBMPToIntensity(Buffer, Width, Height);
	//for (int i = 0; i < 256; i++) {
	//	dizi[i] = 0; //her parlaklýk deðeri için piksel sayýsýný sýfýra setledik
	//}
	////resmin tüm pikselleri için parlaklýk deðerlerini sayýyoruz
	//for (int j = 0; j < (Width*Height); j++) {
	//	dizi[Raw_Intensity[j]]++;
	//}
	//	
	//	
	//

	//this->chart1->Titles->Clear();//Chart da varsayýlan olarak gelen baþlýklarý temizliyoruz.
	//this->chart1->Series->Clear();//Chart da varsayýlan olarak gelen series (Liste) temizliyoruz.
	//this->chart1->Series->Add("piksel sayýsý");

	//for (int i = 0; i < 256; i++)//Piksel parlaklýk deðerleri gri formatta 0-256 arasýnda olduðu için
	//{
	//	this->chart1->Series[0]->Points->AddXY(i,dizi[i]);//x parametresi altta yazacak yazýyý belirliyor y ise o yazýnýn deðerini belirliyor.

	//}

}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void grayImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox2->Visible = true;
}
private: System::Void binaryImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox3->Visible = true;
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void showHistogramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->chart1->Visible = true;
}
private: System::Void hideHistogramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->chart1->Visible = false;
}
};
}