#pragma once
#include "Task.h"
#include <Windows.h>

namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		array<int,2> ^ Balls;
		Random ^ rnd;
		Color col, colnow;
		Task ^ T;
		int Rand, noc, tt;
		double a, b1;
		int xnow, ynow, time;
		System::Drawing::BufferedGraphicsContext ^context;
		System::Drawing::BufferedGraphics ^buffer;
		bool isMouseDown;
		int xOffset, yOffset;
		System::Drawing::Point ^mouseOffset;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button4;
	private: System::ComponentModel::IContainer^  components;


		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(-1, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(403, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Новая игра";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(-1, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(403, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Стрелять             .";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(108, 493);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(24, 23);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(242, 496);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 170, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 90000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 3;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::OrangeRed;
			this->button4->Location = System::Drawing::Point(-1, -2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(20, 21);
			this->button4->TabIndex = 4;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(400, 520);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::No;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 button1->Visible=false;
				 button3->Visible=true;
				 numericUpDown1->Visible=true;
				 button2->Visible=true;
				 timer1->Enabled=true;
				 //рандом цвета шарика для запуска, отображение в кнопке 3 в виде фонового цвета
				 Rand=rnd->Next(1,T->NumOfColors+1);
				 if (Rand == 1) button3->BackColor = Color::Magenta;
				 if (Rand == 2) button3->BackColor = Color::Green;
				 if (Rand == 3) button3->BackColor = Color::DodgerBlue;
				 if (Rand == 4) button3->BackColor = Color::Aquamarine;
				 if (Rand == 5) button3->BackColor = Color::Yellow;
				 if (Rand == 6) button3->BackColor = Color::Orange;

				 //выделение памяти под массив шариков
				 Balls= gcnew array<int, 2>(T->N, T->M);

				 //сначала заполняем поле пустыми шарами
				 for (int i =  0; i < T->N; i++)
				 {
					 for (int j = 0; j < T->M; j++)
					 {
						 Balls[i, j] = 0;
					 }
				 }

				 //далее для каждого шарика не на боковых границах задаем наличие/отсутствие правого нижнего шара и при наличии рандомим цвет
				 for (int i = 1; i < T->N - 1; i++)
				 {
					 for (int j = 0; j < T->M - 1; j++)
					 {
						 Balls[i, j + 1] = rnd->Next(0, 2);
						 if (Balls[i, j + 1] == 1) Balls[i, j + 1] = rnd->Next(1, T->NumOfColors + 1);
					 }
				 }

				 //определяем особый цвет для граничных шариков и еще один особый цвет для верхней границы, к которой можно прикреплять шарики
				 for (int i = 0; i < T->N; i++)
				 {
					 Balls[i, 0] = T->NumOfColors + 2;
					 Balls[i, T->M-1] = T->NumOfColors + 1;
				 }
				 for (int i = 0; i < T->M; i++)
				 {
					 Balls[0, i] = T->NumOfColors + 1;
					 Balls[T->N-1, i] = T->NumOfColors + 1;
				 }

				 //СРЕЗАЕМ ЛИШНЮЮ ЧАСТЬ ПОЛЯ
				 //если шарик за границей окна, обозначить его как граничный
				 for (int i =  1; i < T->N - 1; i++)
				 {
					 for (int j = 1; j < T->M - 1; j++)
					 {
						 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<0 || (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>ClientSize.Width-40) Balls[i, j] = T->NumOfColors+1;
						 if (T->M - 14 < j) Balls[i, j] = 0; //вначале игры сделаем нижние 8 строк пустыми
					 }
				 }
				 //удаляем незакрепленные шарики
				 for (int i = 1; i < T->N - 1; i++)
				 {
					 for (int j = 1; j < T->M - 1; j++)
					 {
						 T->Check(Balls, i, j); //находим незакрепленные шары
						 T->F = 0;
						 T->Destroy(Balls); //уничтожаем их
						 if (T->final1 == 0)
						 {
							 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
							 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
							 MessageBox::Show("Вы победили, но это ничего не значит.");
							 numericUpDown1->Visible = false;
							 button2->Visible = false;
							 button3->Visible = false;
							 button1->Visible = true;
							 this->Close();
						 }
					 }
				 }
				 
				 //помещаем в буфер фоновую картинку
				 buffer->Graphics->Clear(Color::OrangeRed);
				 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
				 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
				 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
				 //прорисовываем каждый шарик соответствующим цветом
				 for (int i =  1; i < T->N - 1; i++)
				 {
					 for (int j = 1; j < T->M - 1; j++)
					 {
						 if (Balls[i, j] == 0) continue;//col = Color::Gray;
						 if (Balls[i, j] == 1) col = Color::Magenta;
						 if (Balls[i, j] == 2) col = Color::Green;
						 if (Balls[i, j] == 3) col = Color::DodgerBlue;
						 if (Balls[i, j] == 4) col = Color::Aquamarine;
						 if (Balls[i, j] == 5) col = Color::Yellow;
						 if (Balls[i, j] == 6) col = Color::Orange;
						 SolidBrush ^b = gcnew SolidBrush(col);
						 //если шарик влезает в поле, нарисовать
						 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
							 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2, 40, 40);
						 
					 }
				 }
				 buffer->Render(this->CreateGraphics());
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 T = gcnew Task(20, 15);
				 T->Level=0;
				 T->NumOfColors = 6;
				 context=System::Drawing::BufferedGraphicsManager::Current;
				 buffer=context->Allocate(this->CreateGraphics(),this->DisplayRectangle);
				 rnd = gcnew Random();
				 

			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 T->Level++;
				 //помещаем в буфер фоновую картинку
				 buffer->Graphics->Clear(Color::OrangeRed);
				 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
				 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);

				 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
				 //прорисовываем каждый шарик соответствующим цветом
				 for (int i =  1; i < T->N - 1; i++)
				 {
					 for (int j = 1; j < T->M - 1; j++)
					 {
						 if (Balls[i, j] == 0) continue;//col = Color::Gray;
						 if (Balls[i, j] == 1) col = Color::Magenta;
						 if (Balls[i, j] == 2) col = Color::Green;
						 if (Balls[i, j] == 3) col = Color::DodgerBlue;
						 if (Balls[i, j] == 4) col = Color::Aquamarine;
						 if (Balls[i, j] == 5) col = Color::Yellow;
						 if (Balls[i, j] == 6) col = Color::Orange;
						 SolidBrush ^b = gcnew SolidBrush(col);
						 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
						 {
							 
							 col = Color::OrangeRed;
							 SolidBrush ^b = gcnew SolidBrush(col);
							 //помещаем в буфер фоновую картинку
							 buffer->Graphics->Clear(Color::OrangeRed);
							 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
							 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
							 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
							 for (int i =  1; i < T->N - 1; i++)
							 {
								 for (int j = 1; j < T->M - 1; j++)
								 {
									 if (Balls[i, j] == 0) continue;
									 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
										 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
								 }
							 }
							 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
							 
							 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
							 timer1->Enabled=false;
							 this->Close();
						 }
						 //если шарик влезает в поле, нарисовать
						 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
							 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
					 }
				 }
				 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (timer2->Enabled == false)
			 {
				 xnow=ClientSize.Width/2;
				 ynow=ClientSize.Height-20;
				 if (Convert::ToDouble(numericUpDown1->Value) == 90)
				 {
					 a=0;
					 b1=0;
				 }
				 else	 
				 {
					 a=Math::Tan(Math::PI*(180.-Convert::ToDouble(numericUpDown1->Value))/180.);
					 b1=ynow-a*xnow;
				 }
				 colnow=button3->BackColor;
				 if (colnow == Color::Magenta) noc=1;
				 else if (colnow == Color::Green) noc=2;
				 else if (colnow == Color::DodgerBlue) noc=3;
				 else if (colnow == Color::Aquamarine) noc=4;
				 else if (colnow == Color::Yellow) noc=5;
				 else if (colnow == Color::Orange) noc=6;
				 SolidBrush ^b = gcnew SolidBrush(colnow);

				 //помещаем в буфер фоновую картинку
				 buffer->Graphics->Clear(Color::OrangeRed);
				 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
				 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
				 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
				 buffer->Graphics->FillEllipse(b, xnow-20, ynow-20, 40, 40);
				 //прорисовываем каждый шарик соответствующим цветом
				 for (int i =  1; i < T->N - 1; i++)
				 {
					 for (int j = 1; j < T->M - 1; j++)
					 {
						 if (Balls[i, j] == 0) continue;//col = Color::Gray;
						 if (Balls[i, j] == 1) col = Color::Magenta;
						 if (Balls[i, j] == 2) col = Color::Green;
						 if (Balls[i, j] == 3) col = Color::DodgerBlue;
						 if (Balls[i, j] == 4) col = Color::Aquamarine;
						 if (Balls[i, j] == 5) col = Color::Yellow;
						 if (Balls[i, j] == 6) col = Color::Orange;
						 SolidBrush ^b = gcnew SolidBrush(col);
						 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
						 {
							 
							 col = Color::OrangeRed;
							 SolidBrush ^b = gcnew SolidBrush(col);
							 //помещаем в буфер фоновую картинку
							 buffer->Graphics->Clear(Color::OrangeRed);
							 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
							 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
							 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
							 for (int i =  1; i < T->N - 1; i++)
							 {
								 for (int j = 1; j < T->M - 1; j++)
								 {
									 if (Balls[i, j] == 0) continue;
									 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
										 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
								 }
							 }
							 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
							 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
							 timer1->Enabled=false;
							 this->Close();
						 }
						 //если шарик влезает в поле, нарисовать
						 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
							 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
					 }
				 }
				 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
				 timer2->Enabled = true;
				 do{
					 Rand=rnd->Next(1,T->NumOfColors+1);
					 if (Rand == 1) button3->BackColor = Color::Magenta;
					 if (Rand == 2) button3->BackColor = Color::Green;
					 if (Rand == 3) button3->BackColor = Color::DodgerBlue;
					 if (Rand == 4) button3->BackColor = Color::Aquamarine;
					 if (Rand == 5) button3->BackColor = Color::Yellow;
					 if (Rand == 6) button3->BackColor = Color::Orange;
				 } while (T->CheckColor2(Balls, Rand) == 0);
			 }
		 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if (ynow < 0) 
				 {
					 timer2->Enabled = false;
					 MessageBox::Show("Вы запустили злобный шар-призрак.");
					 //помещаем в буфер фоновую картинку
					 buffer->Graphics->Clear(Color::OrangeRed);
					 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
					 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);

					 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
					 //прорисовываем каждый шарик соответствующим цветом
					 for (int i =  1; i < T->N - 1; i++)
					 {
						 for (int j = 1; j < T->M - 1; j++)
						 {
							 if (Balls[i, j] == 0) continue;//col = Color::Gray;
							 if (Balls[i, j] == 1) col = Color::Magenta;
							 if (Balls[i, j] == 2) col = Color::Green;
							 if (Balls[i, j] == 3) col = Color::DodgerBlue;
							 if (Balls[i, j] == 4) col = Color::Aquamarine;
							 if (Balls[i, j] == 5) col = Color::Yellow;
							 if (Balls[i, j] == 6) col = Color::Orange;
							 SolidBrush ^b = gcnew SolidBrush(col);
							 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
							 {
							 
								 col = Color::OrangeRed;
								 SolidBrush ^b = gcnew SolidBrush(col);
								 //помещаем в буфер фоновую картинку
								 buffer->Graphics->Clear(Color::OrangeRed);
								 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
								 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
								 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
								 for (int i =  1; i < T->N - 1; i++)
								 {
									 for (int j = 1; j < T->M - 1; j++)
									 {
										 if (Balls[i, j] == 0) continue;
										 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
											 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
									 }
								 }
								 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
							 
								 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
								 timer1->Enabled=false;
								 this->Close();
							 }
							 //если шарик влезает в поле, нарисовать
							 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
								 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
						 }
					 }
					 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
				 }
				 else
				 {
					 if (a == 0) ynow-=2;
					 else
					 {
						 if (a < 0) 
						 {
							 xnow++;
							 if (xnow == ClientSize.Width-20)
							 {
								 ynow=a*xnow+b1;
								 a=-a;
								 b1=ynow-a*xnow;
							 }
						 }
						 else 
						 {
							 xnow--;
							 if (xnow == 20)
							 {
								 ynow=a*xnow+b1;
								 a=-a;
								 b1=ynow-a*xnow;
							 }
						 }
						 ynow=a*xnow+b1;

					 }
					 tt = 1;
					 for (int i =  1; i < T->N - 1; i++)
					 {
						 if (tt == 1)
						 {
							 for (int j = 1; j < T->M - 1; j++)
							 {
								 if ((xnow >= (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40) 
									 && (xnow <= (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40+40) 
									 && (ynow >= 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level) 
									 && (ynow <= 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level+40)) 
								 {
									 if (T->Check2(Balls, i, j) == true && Balls[i, j] == 0)
									 {
										 Balls[i, j] = noc;
										 timer2->Enabled=false;
										 T->CheckColor(Balls, i, j, noc);
										 if (T->CN<3)
										 {
											 for (int i = 0; i < T->N; i++)
											 {
												 for (int j = 0; j < T->M; j++)
												 {
													 T->B[i, j] = 0;
												 }
											 }
											 T->CN = 0;
										 }
										 T->Destroy(Balls);
										 if (T->final1 == 0)
										 {
											 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
											 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
											 MessageBox::Show("Вы победили, но это ничего не значит.");
											 numericUpDown1->Visible = false;
											 button2->Visible = false;
											 button3->Visible = false;
											 button1->Visible = true;
											 this->Close();
										 }
										 //удаляем незакрепленные шарики
										 for (int i = 1; i < T->N - 1; i++)
										 {
											 for (int j = 1; j < T->M - 1; j++)
											 {
												 T->Check(Balls, i, j); //находим незакрепленные шары
												 T->F = 0;
												 T->Destroy(Balls); //уничтожаем их
												 if (T->final1 == 0)
												 {
													 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
													 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
													 MessageBox::Show("Вы победили, но это ничего не значит.");
													 numericUpDown1->Visible = false;
													 button2->Visible = false;
													 button3->Visible = false;
													 button1->Visible = true;
													 this->Close();
												 }
											 }
										 }
										 SolidBrush ^b = gcnew SolidBrush(colnow);

										 //помещаем в буфер фоновую картинку
										 buffer->Graphics->Clear(Color::OrangeRed);
										 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
										 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
										 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
								 
										 //прорисовываем каждый шарик соответствующим цветом
										 for (int i =  1; i < T->N - 1; i++)
										 {
											 for (int j = 1; j < T->M - 1; j++)
											 {
												 if (Balls[i, j] == 0) continue;//col = Color::Gray;
												 if (Balls[i, j] == 1) col = Color::Magenta;
												 if (Balls[i, j] == 2) col = Color::Green;
												 if (Balls[i, j] == 3) col = Color::DodgerBlue;
												 if (Balls[i, j] == 4) col = Color::Aquamarine;
												 if (Balls[i, j] == 5) col = Color::Yellow;
												 if (Balls[i, j] == 6) col = Color::Orange;
												 SolidBrush ^b = gcnew SolidBrush(col);
												 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
												 {
							 
													 col = Color::OrangeRed;
													 SolidBrush ^b = gcnew SolidBrush(col);
													 //помещаем в буфер фоновую картинку
													 buffer->Graphics->Clear(Color::OrangeRed);
													 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
													 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
													 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
													 for (int i =  1; i < T->N - 1; i++)
													 {
														 for (int j = 1; j < T->M - 1; j++)
														 {
															 if (Balls[i, j] == 0) continue;
															 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
																 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
														 }
													 }
													 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
													 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
													 timer1->Enabled=false;
													 this->Close();
												 }
												 //если шарик влезает в поле, нарисовать
												 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
													 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
											 }
										 }
										 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
										 tt = 0;
										 break;
									 }
									 else if (Balls[i, j] != 0)
									 {
										 if (Balls[i, j - 1] == 0)
										 {
											 Balls[i, j - 1] = noc;
											 timer2->Enabled=false;
											 T->CheckColor(Balls, i, j - 1, noc);
											 if (T->CN<3)
											 {
												 for (int i = 0; i < T->N; i++)
												 {
													 for (int j = 0; j < T->M; j++)
													 {
														 T->B[i, j] = 0;
													 }
												 }
												 T->CN = 0;
											 }
											 T->Destroy(Balls);
											 if (T->final1 == 0)
											 {
												 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
												 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
												 MessageBox::Show("Вы победили, но это ничего не значит.");
												 numericUpDown1->Visible = false;
												 button2->Visible = false;
												 button3->Visible = false;
												 button1->Visible = true;
												 this->Close();
											 }
											 //удаляем незакрепленные шарики
											 for (int i = 1; i < T->N - 1; i++)
											 {
												 for (int j = 1; j < T->M - 1; j++)
												 {
													 T->Check(Balls, i, j); //находим незакрепленные шары
													 T->F = 0;
													 T->Destroy(Balls); //уничтожаем их
													 if (T->final1 == 0)
													 {
														 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
														 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
														 MessageBox::Show("Вы победили, но это ничего не значит.");
														 numericUpDown1->Visible = false;
														 button2->Visible = false;
														 button3->Visible = false;
														 button1->Visible = true;
														 this->Close();
													 }
												 }
											 }
											 SolidBrush ^b = gcnew SolidBrush(colnow);

											 //помещаем в буфер фоновую картинку
											 buffer->Graphics->Clear(Color::OrangeRed);
											 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
											 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
											 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
								 
											 //прорисовываем каждый шарик соответствующим цветом
											 for (int i =  1; i < T->N - 1; i++)
											 {
												 for (int j = 1; j < T->M - 1; j++)
												 {
													 if (Balls[i, j] == 0) continue;//col = Color::Gray;
													 if (Balls[i, j] == 1) col = Color::Magenta;
													 if (Balls[i, j] == 2) col = Color::Green;
													 if (Balls[i, j] == 3) col = Color::DodgerBlue;
													 if (Balls[i, j] == 4) col = Color::Aquamarine;
													 if (Balls[i, j] == 5) col = Color::Yellow;
													 if (Balls[i, j] == 6) col = Color::Orange;
													 SolidBrush ^b = gcnew SolidBrush(col);
													 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
													 {
							 
														 col = Color::OrangeRed;
														 SolidBrush ^b = gcnew SolidBrush(col);
														 //помещаем в буфер фоновую картинку
														 buffer->Graphics->Clear(Color::OrangeRed);
														 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
														 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
														 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
														 for (int i =  1; i < T->N - 1; i++)
														 {
															 for (int j = 1; j < T->M - 1; j++)
															 {
																 if (Balls[i, j] == 0) continue;
																 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
																	 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
															 }
														 }
														 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
														 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
														 timer1->Enabled=false;
														 this->Close();
													 }
													 //если шарик влезает в поле, нарисовать
													 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
														 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
												 }
											 }
											 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
											 tt = 0;
											 break;
									 
										 } else
										 {
											 Balls[i - 1, j - 1] = noc;
											 timer2->Enabled=false;
											 T->CheckColor(Balls, i - 1, j - 1, noc);
											 if (T->CN<3)
											 {
												 for (int i = 0; i < T->N; i++)
												 {
													 for (int j = 0; j < T->M; j++)
													 {
														 T->B[i, j] = 0;
													 }
												 }
												 T->CN = 0;
											 }
											 T->Destroy(Balls);
											 if (T->final1 == 0)
											 {
												 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
												 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
												 MessageBox::Show("Вы победили, но это ничего не значит.");
												 numericUpDown1->Visible = false;
												 button2->Visible = false;
												 button3->Visible = false;
												 button1->Visible = true;
												 this->Close();
											 }
											 //удаляем незакрепленные шарики
											 for (int i = 1; i < T->N - 1; i++)
											 {
												 for (int j = 1; j < T->M - 1; j++)
												 {
													 T->Check(Balls, i, j); //находим незакрепленные шары
													 T->F = 0;
													 T->Destroy(Balls); //уничтожаем их
													 if (T->final1 == 0)
													 {
														 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\einsteinyeni.jpg"), 0, 0);
														 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
														 MessageBox::Show("Вы победили, но это ничего не значит.");
														 numericUpDown1->Visible = false;
														 button2->Visible = false;
														 button3->Visible = false;
														 button1->Visible = true;
														 this->Close();
													 }
												 }
											 }
											 SolidBrush ^b = gcnew SolidBrush(colnow);

											 //помещаем в буфер фоновую картинку
											 buffer->Graphics->Clear(Color::OrangeRed);
											 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
											 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
											 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
								 
											 //прорисовываем каждый шарик соответствующим цветом
											 for (int i =  1; i < T->N - 1; i++)
											 {
												 for (int j = 1; j < T->M - 1; j++)
												 {
													 if (Balls[i, j] == 0) continue;//col = Color::Gray;
													 if (Balls[i, j] == 1) col = Color::Magenta;
													 if (Balls[i, j] == 2) col = Color::Green;
													 if (Balls[i, j] == 3) col = Color::DodgerBlue;
													 if (Balls[i, j] == 4) col = Color::Aquamarine;
													 if (Balls[i, j] == 5) col = Color::Yellow;
													 if (Balls[i, j] == 6) col = Color::Orange;
													 SolidBrush ^b = gcnew SolidBrush(col);
													 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
													 {
							 
														 col = Color::OrangeRed;
														 SolidBrush ^b = gcnew SolidBrush(col);
														 //помещаем в буфер фоновую картинку
														 buffer->Graphics->Clear(Color::OrangeRed);
														 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
														 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
														 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
														 for (int i =  1; i < T->N - 1; i++)
														 {
															 for (int j = 1; j < T->M - 1; j++)
															 {
																 if (Balls[i, j] == 0) continue;
																 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
																	 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
															 }
														 }
														 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
														 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
														 timer1->Enabled=false;
														 this->Close();
													 }
													 //если шарик влезает в поле, нарисовать
													 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
														 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
												 }
											 }
											 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
											 tt = 0;
											 break;
										 }

									 }
								}
							}
						}
					 }

					 time++;
					 if (time%5 == 0)
					 {
						 SolidBrush ^b = gcnew SolidBrush(colnow);

						 //помещаем в буфер фоновую картинку
						 buffer->Graphics->Clear(Color::OrangeRed);
						 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
						 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
						 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
						 if (timer2->Enabled == true) buffer->Graphics->FillEllipse(b, xnow-20, ynow-20, 40, 40);
						 //прорисовываем каждый шарик соответствующим цветом
						 for (int i =  1; i < T->N - 1; i++)
						 {
							 for (int j = 1; j < T->M - 1; j++)
							 {
								 if (Balls[i, j] == 0) continue;//col = Color::Gray;
								 if (Balls[i, j] == 1) col = Color::Magenta;
								 if (Balls[i, j] == 2) col = Color::Green;
								 if (Balls[i, j] == 3) col = Color::DodgerBlue;
								 if (Balls[i, j] == 4) col = Color::Aquamarine;
								 if (Balls[i, j] == 5) col = Color::Yellow;
								 if (Balls[i, j] == 6) col = Color::Orange;
								 SolidBrush ^b = gcnew SolidBrush(col);
								 if (40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level>=ClientSize.Height-button2->Size.Height-60)
								 {
							 
									 col = Color::OrangeRed;
									 SolidBrush ^b = gcnew SolidBrush(col);
									 //помещаем в буфер фоновую картинку
									 buffer->Graphics->Clear(Color::OrangeRed);
									 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\42122.jpg"), 0, 0);
									 buffer->Graphics->DrawImage(gcnew System::Drawing::Bitmap(System::Windows::Forms::Application::StartupPath+"\\dark-noise-1.png"), 0, 40*T->Level);
									 buffer->Graphics->DrawLine(Pens::Red, 0, ClientSize.Height-button2->Size.Height-20, ClientSize.Width, ClientSize.Height-button2->Size.Height-20);
									 for (int i =  1; i < T->N - 1; i++)
									 {
										 for (int j = 1; j < T->M - 1; j++)
										 {
											 if (Balls[i, j] == 0) continue;
											 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-50) 
												 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
										 }
									 }
									 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
									 if (timer1->Enabled == true) MessageBox::Show("Это конец. Вы проиграли.");
									 timer1->Enabled=false;
									 this->Close();
								 }
								 //если шарик влезает в поле, нарисовать
								 if ((Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40>=0 && (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40<=ClientSize.Width-40) 
									 buffer->Graphics->FillEllipse(b, (Convert::ToDouble(i-1)-Convert::ToDouble(j-1)/2)*40, 40*Math::Sqrt(3.)*Convert::ToDouble(j-1)/2+40*T->Level, 40, 40);
						 
							 }
						 }
						 if (timer1->Enabled == true) buffer->Render(this->CreateGraphics());
					 }
				}
			}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
		 
		 //Перемещение игрового поля
private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (e->Button == Windows::Forms::MouseButtons::Left) 
			 {
				 xOffset = - e->X - SystemInformation::FrameBorderSize.Width;
				 yOffset = - e->Y - SystemInformation::FrameBorderSize.Height;
				 mouseOffset = System::Drawing::Point(xOffset, yOffset);
				 isMouseDown = true;
			 }    
		 }
private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {   
			 if (isMouseDown) 
			 {
				 Point mousePos = Control::MousePosition;
				 mousePos.Offset(mouseOffset->X, mouseOffset->Y);
				 Location = mousePos;
			 }
		 }
private: System::Void Form1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (e->Button == Windows::Forms::MouseButtons::Left) 
			 {
				 isMouseDown = false;
			 }
		 }
};
}