#pragma once
#include "utils.h"

namespace windowyujra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			windowyujra::CustomerUI::ApplyStyle(this);
			this->panelSeries->Enabled = false;
			this->panelSeries->Visible = false;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ container;
	private: System::Windows::Forms::TableLayoutPanel^ Menu;
	private: System::Windows::Forms::Label^ MenuLabel;
	private: System::Windows::Forms::Button^ MenuButtonFiguras;
	private: System::Windows::Forms::Button^ MenuButtonIsometricos;
	private: System::Windows::Forms::Button^ MenuButtonInversas;
	private: System::Windows::Forms::Button^ MenuButtonSeries;
	private: System::Windows::Forms::Button^ MenuButtonPolares;
	private: System::Windows::Forms::Button^ MenuButtonListas;
	private: System::Windows::Forms::Button^ MenuButtonLibre;
	private: System::Windows::Forms::TableLayoutPanel^ panel;
	private: System::Windows::Forms::TableLayoutPanel^ panelSeries;
	private: System::Windows::Forms::Label^ panelSeriesLabelPi;
	private: System::Windows::Forms::Label^ panelSeriesLabelAckerman;
	private: System::Windows::Forms::Label^ panelSeriesLabelSeno;
	private: System::Windows::Forms::Label^ panelSeriesLabelCoseno;
	private: System::Windows::Forms::Label^ panelSeriesLabelFibonacci;
	private: System::Windows::Forms::TextBox^ panelSeriesTextPi;
	private: System::Windows::Forms::TextBox^ panelSeriesTextAckerman;
	private: System::Windows::Forms::TextBox^ panelSeriesTextSeno;
	private: System::Windows::Forms::TextBox^ panelSeriesTextCoseno;
	private: System::Windows::Forms::TextBox^ panelSeriesTextFibonacci;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ panelListas;
	private: System::Windows::Forms::TableLayoutPanel^ panelListasA;
	private: System::Windows::Forms::Label^ panelListasALabel;

	private: System::Windows::Forms::TableLayoutPanel^ panelListasB;
	private: System::Windows::Forms::Label^ panelListasBLabel;

	private: System::Windows::Forms::TableLayoutPanel^ panelListasSeno;
	private: System::Windows::Forms::Label^ panelListasSenoLabel;

	private: System::Windows::Forms::TableLayoutPanel^ panelListasSecante;
	private: System::Windows::Forms::Label^ panelListasSecanteLabel;
	private: System::Windows::Forms::ListView^ panelListasAList;
	private: System::Windows::Forms::ListView^ panelListasBList;
	private: System::Windows::Forms::ListView^ panelListasSenoList;
	private: System::Windows::Forms::ListView^ panelListasSecanteList;
	private: System::Windows::Forms::Button^ MenuButtonAyuda;
	private: System::Windows::Forms::Button^ MenuButtonAcercaDe;














	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->container = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Menu = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->MenuLabel = (gcnew System::Windows::Forms::Label());
			this->MenuButtonFiguras = (gcnew System::Windows::Forms::Button());
			this->MenuButtonIsometricos = (gcnew System::Windows::Forms::Button());
			this->MenuButtonInversas = (gcnew System::Windows::Forms::Button());
			this->MenuButtonSeries = (gcnew System::Windows::Forms::Button());
			this->MenuButtonPolares = (gcnew System::Windows::Forms::Button());
			this->MenuButtonListas = (gcnew System::Windows::Forms::Button());
			this->MenuButtonLibre = (gcnew System::Windows::Forms::Button());
			this->MenuButtonAyuda = (gcnew System::Windows::Forms::Button());
			this->MenuButtonAcercaDe = (gcnew System::Windows::Forms::Button());
			this->panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelListas = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelListasA = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelListasALabel = (gcnew System::Windows::Forms::Label());
			this->panelListasAList = (gcnew System::Windows::Forms::ListView());
			this->panelListasB = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelListasBLabel = (gcnew System::Windows::Forms::Label());
			this->panelListasBList = (gcnew System::Windows::Forms::ListView());
			this->panelListasSeno = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelListasSenoLabel = (gcnew System::Windows::Forms::Label());
			this->panelListasSenoList = (gcnew System::Windows::Forms::ListView());
			this->panelListasSecante = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelListasSecanteLabel = (gcnew System::Windows::Forms::Label());
			this->panelListasSecanteList = (gcnew System::Windows::Forms::ListView());
			this->panelSeries = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelSeriesLabelPi = (gcnew System::Windows::Forms::Label());
			this->panelSeriesLabelAckerman = (gcnew System::Windows::Forms::Label());
			this->panelSeriesLabelSeno = (gcnew System::Windows::Forms::Label());
			this->panelSeriesLabelCoseno = (gcnew System::Windows::Forms::Label());
			this->panelSeriesLabelFibonacci = (gcnew System::Windows::Forms::Label());
			this->panelSeriesTextPi = (gcnew System::Windows::Forms::TextBox());
			this->panelSeriesTextAckerman = (gcnew System::Windows::Forms::TextBox());
			this->panelSeriesTextSeno = (gcnew System::Windows::Forms::TextBox());
			this->panelSeriesTextCoseno = (gcnew System::Windows::Forms::TextBox());
			this->panelSeriesTextFibonacci = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->container->SuspendLayout();
			this->Menu->SuspendLayout();
			this->panel->SuspendLayout();
			this->panelListas->SuspendLayout();
			this->panelListasA->SuspendLayout();
			this->panelListasB->SuspendLayout();
			this->panelListasSeno->SuspendLayout();
			this->panelListasSecante->SuspendLayout();
			this->panelSeries->SuspendLayout();
			this->SuspendLayout();
			// 
			// container
			// 
			this->container->ColumnCount = 2;
			this->container->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->container->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 75)));
			this->container->Controls->Add(this->Menu, 0, 0);
			this->container->Controls->Add(this->panel, 1, 0);
			this->container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container->Location = System::Drawing::Point(0, 0);
			this->container->Name = L"container";
			this->container->RowCount = 1;
			this->container->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->container->Size = System::Drawing::Size(615, 349);
			this->container->TabIndex = 0;
			// 
			// Menu
			// 
			this->Menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Menu->ColumnCount = 1;
			this->Menu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->Menu->Controls->Add(this->MenuLabel, 0, 0);
			this->Menu->Controls->Add(this->MenuButtonFiguras, 0, 1);
			this->Menu->Controls->Add(this->MenuButtonIsometricos, 0, 2);
			this->Menu->Controls->Add(this->MenuButtonInversas, 0, 3);
			this->Menu->Controls->Add(this->MenuButtonSeries, 0, 4);
			this->Menu->Controls->Add(this->MenuButtonPolares, 0, 5);
			this->Menu->Controls->Add(this->MenuButtonListas, 0, 6);
			this->Menu->Controls->Add(this->MenuButtonLibre, 0, 7);
			this->Menu->Controls->Add(this->MenuButtonAyuda, 0, 8);
			this->Menu->Controls->Add(this->MenuButtonAcercaDe, 0, 9);
			this->Menu->Location = System::Drawing::Point(3, 3);
			this->Menu->Name = L"Menu";
			this->Menu->RowCount = 10;
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12)));
			this->Menu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->Menu->Size = System::Drawing::Size(147, 343);
			this->Menu->TabIndex = 0;
			// 
			// MenuLabel
			// 
			this->MenuLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MenuLabel->AutoSize = true;
			this->MenuLabel->Location = System::Drawing::Point(54, 6);
			this->MenuLabel->Name = L"MenuLabel";
			this->MenuLabel->Size = System::Drawing::Size(39, 13);
			this->MenuLabel->TabIndex = 0;
			this->MenuLabel->Text = L"MENU";
			// 
			// MenuButtonFiguras
			// 
			this->MenuButtonFiguras->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonFiguras->Location = System::Drawing::Point(3, 28);
			this->MenuButtonFiguras->Name = L"MenuButtonFiguras";
			this->MenuButtonFiguras->Size = System::Drawing::Size(141, 28);
			this->MenuButtonFiguras->TabIndex = 1;
			this->MenuButtonFiguras->Text = L"FIGURAS";
			this->MenuButtonFiguras->UseVisualStyleBackColor = true;
			this->MenuButtonFiguras->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonFiguras_Click);
			// 
			// MenuButtonIsometricos
			// 
			this->MenuButtonIsometricos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonIsometricos->Location = System::Drawing::Point(3, 62);
			this->MenuButtonIsometricos->Name = L"MenuButtonIsometricos";
			this->MenuButtonIsometricos->Size = System::Drawing::Size(141, 28);
			this->MenuButtonIsometricos->TabIndex = 2;
			this->MenuButtonIsometricos->Text = L"ISOMETRICOS";
			this->MenuButtonIsometricos->UseVisualStyleBackColor = true;
			this->MenuButtonIsometricos->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonIsometricos_Click);
			// 
			// MenuButtonInversas
			// 
			this->MenuButtonInversas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonInversas->Location = System::Drawing::Point(3, 96);
			this->MenuButtonInversas->Name = L"MenuButtonInversas";
			this->MenuButtonInversas->Size = System::Drawing::Size(141, 28);
			this->MenuButtonInversas->TabIndex = 3;
			this->MenuButtonInversas->Text = L"INVERSAS";
			this->MenuButtonInversas->UseVisualStyleBackColor = true;
			this->MenuButtonInversas->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonInversas_Click);
			// 
			// MenuButtonSeries
			// 
			this->MenuButtonSeries->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonSeries->Location = System::Drawing::Point(3, 130);
			this->MenuButtonSeries->Name = L"MenuButtonSeries";
			this->MenuButtonSeries->Size = System::Drawing::Size(141, 28);
			this->MenuButtonSeries->TabIndex = 4;
			this->MenuButtonSeries->Text = L"SERIES";
			this->MenuButtonSeries->UseVisualStyleBackColor = true;
			this->MenuButtonSeries->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonSeries_Click);
			// 
			// MenuButtonPolares
			// 
			this->MenuButtonPolares->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonPolares->Location = System::Drawing::Point(3, 164);
			this->MenuButtonPolares->Name = L"MenuButtonPolares";
			this->MenuButtonPolares->Size = System::Drawing::Size(141, 28);
			this->MenuButtonPolares->TabIndex = 5;
			this->MenuButtonPolares->Text = L"POLARES";
			this->MenuButtonPolares->UseVisualStyleBackColor = true;
			this->MenuButtonPolares->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonPolares_Click);
			// 
			// MenuButtonListas
			// 
			this->MenuButtonListas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonListas->Location = System::Drawing::Point(3, 198);
			this->MenuButtonListas->Name = L"MenuButtonListas";
			this->MenuButtonListas->Size = System::Drawing::Size(141, 28);
			this->MenuButtonListas->TabIndex = 6;
			this->MenuButtonListas->Text = L"LISTAS";
			this->MenuButtonListas->UseVisualStyleBackColor = true;
			this->MenuButtonListas->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonListas_Click);
			// 
			// MenuButtonLibre
			// 
			this->MenuButtonLibre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonLibre->Location = System::Drawing::Point(3, 232);
			this->MenuButtonLibre->Name = L"MenuButtonLibre";
			this->MenuButtonLibre->Size = System::Drawing::Size(141, 28);
			this->MenuButtonLibre->TabIndex = 7;
			this->MenuButtonLibre->Text = L"LIBRE (HAPPY FACE)";
			this->MenuButtonLibre->UseVisualStyleBackColor = true;
			this->MenuButtonLibre->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonLibre_Click);
			// 
			// MenuButtonAyuda
			// 
			this->MenuButtonAyuda->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonAyuda->Location = System::Drawing::Point(3, 266);
			this->MenuButtonAyuda->Name = L"MenuButtonAyuda";
			this->MenuButtonAyuda->Size = System::Drawing::Size(141, 28);
			this->MenuButtonAyuda->TabIndex = 8;
			this->MenuButtonAyuda->Text = L"AYUDA";
			this->MenuButtonAyuda->UseVisualStyleBackColor = true;
			this->MenuButtonAyuda->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonAyuda_Click);
			// 
			// MenuButtonAcercaDe
			// 
			this->MenuButtonAcercaDe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MenuButtonAcercaDe->Location = System::Drawing::Point(3, 300);
			this->MenuButtonAcercaDe->Name = L"MenuButtonAcercaDe";
			this->MenuButtonAcercaDe->Size = System::Drawing::Size(141, 40);
			this->MenuButtonAcercaDe->TabIndex = 9;
			this->MenuButtonAcercaDe->Text = L"ACERCA DE";
			this->MenuButtonAcercaDe->UseVisualStyleBackColor = true;
			this->MenuButtonAcercaDe->Click += gcnew System::EventHandler(this, &MainForm::MenuButtonAcercaDe_Click);
			// 
			// panel
			// 
			this->panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel->ColumnCount = 1;
			this->panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panel->Controls->Add(this->panelListas, 0, 1);
			this->panel->Controls->Add(this->panelSeries, 0, 0);
			this->panel->Location = System::Drawing::Point(156, 3);
			this->panel->Name = L"panel";
			this->panel->RowCount = 2;
			this->panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 97.37609F)));
			this->panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 2.623907F)));
			this->panel->Size = System::Drawing::Size(456, 343);
			this->panel->TabIndex = 1;
			// 
			// panelListas
			// 
			this->panelListas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListas->ColumnCount = 2;
			this->panelListas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->panelListas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->panelListas->Controls->Add(this->panelListasA, 0, 0);
			this->panelListas->Controls->Add(this->panelListasB, 1, 0);
			this->panelListas->Controls->Add(this->panelListasSeno, 0, 1);
			this->panelListas->Controls->Add(this->panelListasSecante, 1, 1);
			this->panelListas->Location = System::Drawing::Point(50, 384);
			this->panelListas->Margin = System::Windows::Forms::Padding(50);
			this->panelListas->Name = L"panelListas";
			this->panelListas->RowCount = 2;
			this->panelListas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->panelListas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->panelListas->Size = System::Drawing::Size(356, 1);
			this->panelListas->TabIndex = 1;
			// 
			// panelListasA
			// 
			this->panelListasA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasA->ColumnCount = 1;
			this->panelListasA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelListasA->Controls->Add(this->panelListasALabel, 0, 0);
			this->panelListasA->Controls->Add(this->panelListasAList, 0, 1);
			this->panelListasA->Location = System::Drawing::Point(3, 3);
			this->panelListasA->Name = L"panelListasA";
			this->panelListasA->RowCount = 2;
			this->panelListasA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->panelListasA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelListasA->Size = System::Drawing::Size(172, 1);
			this->panelListasA->TabIndex = 0;
			// 
			// panelListasALabel
			// 
			this->panelListasALabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelListasALabel->AutoSize = true;
			this->panelListasALabel->Location = System::Drawing::Point(62, 6);
			this->panelListasALabel->Name = L"panelListasALabel";
			this->panelListasALabel->Size = System::Drawing::Size(47, 13);
			this->panelListasALabel->TabIndex = 0;
			this->panelListasALabel->Text = L"LISTA A";
			// 
			// panelListasAList
			// 
			this->panelListasAList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasAList->HideSelection = false;
			this->panelListasAList->Location = System::Drawing::Point(10, 35);
			this->panelListasAList->Margin = System::Windows::Forms::Padding(10);
			this->panelListasAList->Name = L"panelListasAList";
			this->panelListasAList->Size = System::Drawing::Size(152, 1);
			this->panelListasAList->TabIndex = 1;
			this->panelListasAList->UseCompatibleStateImageBehavior = false;
			// 
			// panelListasB
			// 
			this->panelListasB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasB->ColumnCount = 1;
			this->panelListasB->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelListasB->Controls->Add(this->panelListasBLabel, 0, 0);
			this->panelListasB->Controls->Add(this->panelListasBList, 0, 1);
			this->panelListasB->Location = System::Drawing::Point(181, 3);
			this->panelListasB->Name = L"panelListasB";
			this->panelListasB->RowCount = 2;
			this->panelListasB->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->panelListasB->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelListasB->Size = System::Drawing::Size(172, 1);
			this->panelListasB->TabIndex = 1;
			// 
			// panelListasBLabel
			// 
			this->panelListasBLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelListasBLabel->AutoSize = true;
			this->panelListasBLabel->Location = System::Drawing::Point(62, 6);
			this->panelListasBLabel->Name = L"panelListasBLabel";
			this->panelListasBLabel->Size = System::Drawing::Size(47, 13);
			this->panelListasBLabel->TabIndex = 0;
			this->panelListasBLabel->Text = L"LISTA B";
			// 
			// panelListasBList
			// 
			this->panelListasBList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasBList->HideSelection = false;
			this->panelListasBList->Location = System::Drawing::Point(10, 35);
			this->panelListasBList->Margin = System::Windows::Forms::Padding(10);
			this->panelListasBList->Name = L"panelListasBList";
			this->panelListasBList->Size = System::Drawing::Size(152, 1);
			this->panelListasBList->TabIndex = 1;
			this->panelListasBList->UseCompatibleStateImageBehavior = false;
			// 
			// panelListasSeno
			// 
			this->panelListasSeno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasSeno->ColumnCount = 1;
			this->panelListasSeno->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->panelListasSeno->Controls->Add(this->panelListasSenoLabel, 0, 0);
			this->panelListasSeno->Controls->Add(this->panelListasSenoList, 0, 1);
			this->panelListasSeno->Location = System::Drawing::Point(3, 3);
			this->panelListasSeno->Name = L"panelListasSeno";
			this->panelListasSeno->RowCount = 2;
			this->panelListasSeno->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->panelListasSeno->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelListasSeno->Size = System::Drawing::Size(172, 1);
			this->panelListasSeno->TabIndex = 2;
			// 
			// panelListasSenoLabel
			// 
			this->panelListasSenoLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelListasSenoLabel->AutoSize = true;
			this->panelListasSenoLabel->Location = System::Drawing::Point(51, 6);
			this->panelListasSenoLabel->Name = L"panelListasSenoLabel";
			this->panelListasSenoLabel->Size = System::Drawing::Size(70, 13);
			this->panelListasSenoLabel->TabIndex = 0;
			this->panelListasSenoLabel->Text = L"LISTA SENO";
			// 
			// panelListasSenoList
			// 
			this->panelListasSenoList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasSenoList->HideSelection = false;
			this->panelListasSenoList->Location = System::Drawing::Point(10, 35);
			this->panelListasSenoList->Margin = System::Windows::Forms::Padding(10);
			this->panelListasSenoList->Name = L"panelListasSenoList";
			this->panelListasSenoList->Size = System::Drawing::Size(152, 1);
			this->panelListasSenoList->TabIndex = 1;
			this->panelListasSenoList->UseCompatibleStateImageBehavior = false;
			// 
			// panelListasSecante
			// 
			this->panelListasSecante->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasSecante->ColumnCount = 1;
			this->panelListasSecante->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->panelListasSecante->Controls->Add(this->panelListasSecanteLabel, 0, 0);
			this->panelListasSecante->Controls->Add(this->panelListasSecanteList, 0, 1);
			this->panelListasSecante->Location = System::Drawing::Point(181, 3);
			this->panelListasSecante->Name = L"panelListasSecante";
			this->panelListasSecante->RowCount = 2;
			this->panelListasSecante->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				25)));
			this->panelListasSecante->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelListasSecante->Size = System::Drawing::Size(172, 1);
			this->panelListasSecante->TabIndex = 3;
			// 
			// panelListasSecanteLabel
			// 
			this->panelListasSecanteLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelListasSecanteLabel->AutoSize = true;
			this->panelListasSecanteLabel->Location = System::Drawing::Point(41, 6);
			this->panelListasSecanteLabel->Name = L"panelListasSecanteLabel";
			this->panelListasSecanteLabel->Size = System::Drawing::Size(90, 13);
			this->panelListasSecanteLabel->TabIndex = 0;
			this->panelListasSecanteLabel->Text = L"LISTA SECANTE";
			// 
			// panelListasSecanteList
			// 
			this->panelListasSecanteList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelListasSecanteList->HideSelection = false;
			this->panelListasSecanteList->Location = System::Drawing::Point(10, 35);
			this->panelListasSecanteList->Margin = System::Windows::Forms::Padding(10);
			this->panelListasSecanteList->Name = L"panelListasSecanteList";
			this->panelListasSecanteList->Size = System::Drawing::Size(152, 1);
			this->panelListasSecanteList->TabIndex = 1;
			this->panelListasSecanteList->UseCompatibleStateImageBehavior = false;
			// 
			// panelSeries
			// 
			this->panelSeries->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeries->ColumnCount = 2;
			this->panelSeries->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->panelSeries->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 70)));
			this->panelSeries->Controls->Add(this->panelSeriesLabelPi, 0, 1);
			this->panelSeries->Controls->Add(this->panelSeriesLabelAckerman, 0, 2);
			this->panelSeries->Controls->Add(this->panelSeriesLabelSeno, 0, 3);
			this->panelSeries->Controls->Add(this->panelSeriesLabelCoseno, 0, 4);
			this->panelSeries->Controls->Add(this->panelSeriesLabelFibonacci, 0, 5);
			this->panelSeries->Controls->Add(this->panelSeriesTextPi, 1, 1);
			this->panelSeries->Controls->Add(this->panelSeriesTextAckerman, 1, 2);
			this->panelSeries->Controls->Add(this->panelSeriesTextSeno, 1, 3);
			this->panelSeries->Controls->Add(this->panelSeriesTextCoseno, 1, 4);
			this->panelSeries->Controls->Add(this->panelSeriesTextFibonacci, 1, 5);
			this->panelSeries->Controls->Add(this->label2, 1, 0);
			this->panelSeries->Controls->Add(this->label1, 0, 0);
			this->panelSeries->Location = System::Drawing::Point(50, 161);
			this->panelSeries->Margin = System::Windows::Forms::Padding(50, 40, 50, 50);
			this->panelSeries->Name = L"panelSeries";
			this->panelSeries->RowCount = 6;
			this->panelSeries->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->panelSeries->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->panelSeries->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->panelSeries->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->panelSeries->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->panelSeries->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->panelSeries->Size = System::Drawing::Size(356, 1);
			this->panelSeries->TabIndex = 0;
			// 
			// panelSeriesLabelPi
			// 
			this->panelSeriesLabelPi->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeriesLabelPi->AutoSize = true;
			this->panelSeriesLabelPi->Location = System::Drawing::Point(44, 36);
			this->panelSeriesLabelPi->Name = L"panelSeriesLabelPi";
			this->panelSeriesLabelPi->Size = System::Drawing::Size(17, 13);
			this->panelSeriesLabelPi->TabIndex = 0;
			this->panelSeriesLabelPi->Text = L"PI";
			// 
			// panelSeriesLabelAckerman
			// 
			this->panelSeriesLabelAckerman->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeriesLabelAckerman->AutoSize = true;
			this->panelSeriesLabelAckerman->Location = System::Drawing::Point(5, 71);
			this->panelSeriesLabelAckerman->Name = L"panelSeriesLabelAckerman";
			this->panelSeriesLabelAckerman->Size = System::Drawing::Size(96, 13);
			this->panelSeriesLabelAckerman->TabIndex = 1;
			this->panelSeriesLabelAckerman->Text = L"ACKERMAN (m=0)";
			// 
			// panelSeriesLabelSeno
			// 
			this->panelSeriesLabelSeno->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeriesLabelSeno->AutoSize = true;
			this->panelSeriesLabelSeno->Location = System::Drawing::Point(34, 106);
			this->panelSeriesLabelSeno->Name = L"panelSeriesLabelSeno";
			this->panelSeriesLabelSeno->Size = System::Drawing::Size(37, 13);
			this->panelSeriesLabelSeno->TabIndex = 2;
			this->panelSeriesLabelSeno->Text = L"SENO";
			// 
			// panelSeriesLabelCoseno
			// 
			this->panelSeriesLabelCoseno->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeriesLabelCoseno->AutoSize = true;
			this->panelSeriesLabelCoseno->Location = System::Drawing::Point(27, 141);
			this->panelSeriesLabelCoseno->Name = L"panelSeriesLabelCoseno";
			this->panelSeriesLabelCoseno->Size = System::Drawing::Size(52, 13);
			this->panelSeriesLabelCoseno->TabIndex = 3;
			this->panelSeriesLabelCoseno->Text = L"COSENO";
			// 
			// panelSeriesLabelFibonacci
			// 
			this->panelSeriesLabelFibonacci->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeriesLabelFibonacci->AutoSize = true;
			this->panelSeriesLabelFibonacci->Location = System::Drawing::Point(21, 176);
			this->panelSeriesLabelFibonacci->Name = L"panelSeriesLabelFibonacci";
			this->panelSeriesLabelFibonacci->Size = System::Drawing::Size(63, 13);
			this->panelSeriesLabelFibonacci->TabIndex = 4;
			this->panelSeriesLabelFibonacci->Text = L"FIBONACCI";
			// 
			// panelSeriesTextPi
			// 
			this->panelSeriesTextPi->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panelSeriesTextPi->Location = System::Drawing::Point(126, 32);
			this->panelSeriesTextPi->Margin = System::Windows::Forms::Padding(20, 3, 20, 3);
			this->panelSeriesTextPi->Name = L"panelSeriesTextPi";
			this->panelSeriesTextPi->Size = System::Drawing::Size(210, 20);
			this->panelSeriesTextPi->TabIndex = 5;
			// 
			// panelSeriesTextAckerman
			// 
			this->panelSeriesTextAckerman->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panelSeriesTextAckerman->Location = System::Drawing::Point(126, 67);
			this->panelSeriesTextAckerman->Margin = System::Windows::Forms::Padding(20, 3, 20, 3);
			this->panelSeriesTextAckerman->Name = L"panelSeriesTextAckerman";
			this->panelSeriesTextAckerman->Size = System::Drawing::Size(210, 20);
			this->panelSeriesTextAckerman->TabIndex = 6;
			// 
			// panelSeriesTextSeno
			// 
			this->panelSeriesTextSeno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panelSeriesTextSeno->Location = System::Drawing::Point(126, 102);
			this->panelSeriesTextSeno->Margin = System::Windows::Forms::Padding(20, 3, 20, 3);
			this->panelSeriesTextSeno->Name = L"panelSeriesTextSeno";
			this->panelSeriesTextSeno->Size = System::Drawing::Size(210, 20);
			this->panelSeriesTextSeno->TabIndex = 7;
			// 
			// panelSeriesTextCoseno
			// 
			this->panelSeriesTextCoseno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panelSeriesTextCoseno->Location = System::Drawing::Point(126, 137);
			this->panelSeriesTextCoseno->Margin = System::Windows::Forms::Padding(20, 3, 20, 3);
			this->panelSeriesTextCoseno->Name = L"panelSeriesTextCoseno";
			this->panelSeriesTextCoseno->Size = System::Drawing::Size(210, 20);
			this->panelSeriesTextCoseno->TabIndex = 8;
			// 
			// panelSeriesTextFibonacci
			// 
			this->panelSeriesTextFibonacci->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panelSeriesTextFibonacci->Location = System::Drawing::Point(126, 172);
			this->panelSeriesTextFibonacci->Margin = System::Windows::Forms::Padding(20, 3, 20, 3);
			this->panelSeriesTextFibonacci->Name = L"panelSeriesTextFibonacci";
			this->panelSeriesTextFibonacci->Size = System::Drawing::Size(210, 20);
			this->panelSeriesTextFibonacci->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(154, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"COEFICIENTES O SUCESION";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"SERIES";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 349);
			this->Controls->Add(this->container);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->container->ResumeLayout(false);
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
			this->panel->ResumeLayout(false);
			this->panelListas->ResumeLayout(false);
			this->panelListasA->ResumeLayout(false);
			this->panelListasA->PerformLayout();
			this->panelListasB->ResumeLayout(false);
			this->panelListasB->PerformLayout();
			this->panelListasSeno->ResumeLayout(false);
			this->panelListasSeno->PerformLayout();
			this->panelListasSecante->ResumeLayout(false);
			this->panelListasSecante->PerformLayout();
			this->panelSeries->ResumeLayout(false);
			this->panelSeries->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void clear() {
		this->panelSeries->Visible = false;
		this->panelListas->Visible = false;
		this->panelSeriesTextPi->Text = "";
		this->panelSeriesTextAckerman->Text = "";
		this->panelSeriesTextSeno->Text = "";
		this->panelSeriesTextCoseno->Text = "";
		this->panelSeriesTextFibonacci->Text = "";
		this->panel->RowStyles[0]->Height = 100.0f;
		this->panel->RowStyles[1]->Height = 0.0f;
		this->panel->CreateGraphics()->Clear(ColorPalet::backgroundColor);
		this->panel->PerformLayout();
		this->panel->Refresh();
	}
	private: System::Void pi(int n) {
		this->panelSeriesTextPi->Text = "4*(";
		for (int i = 0; i < n; i++)
		{
			int num = (2 * i + 1);
			if (i % 2 == 1) num *= -1;
			this->panelSeriesTextPi->Text = this->panelSeriesTextPi->Text + "1/(" + num.ToString() + ") + ";
		}
		this->panelSeriesTextPi->Text = this->panelSeriesTextPi->Text + ")";

	}
	private: System::Void seno(int n) {
		this->panelSeriesTextSeno->Text = "";
		// Seno
		for (int i = 0; i < n; i++)
		{
			int coef = this->factorial(2 * i + 1);
			if (i % 2 == 1) coef *= -1;
			this->panelSeriesTextSeno->Text = this->panelSeriesTextSeno->Text + "(x ^ " + (2 * i + 1).ToString() + ")/(" + coef.ToString() + ") + ";
		}
	}
	private: System::Void coseno(int n) {
		this->panelSeriesTextCoseno->Text = "";
		// Seno
		for (int i = 0; i < n; i++)
		{
			int coef = this->factorial(2 * i);
			if (i % 2 == 1) coef *= -1;
			this->panelSeriesTextCoseno->Text = this->panelSeriesTextCoseno->Text + "(x ^ " + (2 * i).ToString() + ")/(" + coef.ToString() + ") + ";
		}
	}
	private: System::Void fibo(int n) {
		this->panelSeriesTextFibonacci->Text = "";
		int a = 1; int b = 1;
		for (int i = 0; i < n; i++)
		{
			if (i > 1) {
				int aux = b;
				b = b + a;
				a = aux;
			}
			this->panelSeriesTextFibonacci->Text = this->panelSeriesTextFibonacci->Text + b.ToString() + ", ";
		}
	}
	private: System::Void ackerman(int n) {
		this->panelSeriesTextAckerman->Text = "";
		for (int i = 0; i < n; i++)
		{
			this->panelSeriesTextAckerman->Text = this->panelSeriesTextAckerman->Text + (i + 1).ToString() + ", ";
		}
	}
	private: double factorial(int a) {
		double fact = 1;
		for (int i = 1; i <= a; i++)
		{
			fact *= i;
		}
		return fact;
	}
	private: System::String^ rounded(System::String^ s) {
		System::String^ s_return = "";
		int counter = -1;
		for (int i = 0; i < s->Length; i++)
		{
			if (s[i] == '.') counter = 4;
			if (counter == -1) s_return = s_return + s[i];
			else {
				s_return = s_return + s[i];
				counter--;
				if (counter == 0) break;
			}
		}
		return s_return;
	}
	private: System::Void list_1() {
		this->panelListasAList->Items->Clear();
		this->panelListasBList->Items->Clear();
		int n = 1 + rand() % 20;
		for (int i = 0; i < n; i++)
		{
			double numa = 1 + rand() % 100;
			double numb = 1.0 / numa;
			this->panelListasAList->Items->Add(numa.ToString());
			this->panelListasBList->Items->Add(numb.ToString());
		}
	}
	private: System::Void list_2() {
		this->panelListasSenoList->Items->Clear();
		this->panelListasSecanteList->Items->Clear();
		// Cantidad randoms
		int cant = 1 + rand() % 10;
		for (int i = 0; i < cant; i++)
		{
			// presicion del taylor
			int n = 10;
			double teta = (rand() % 321);
			this->panelListasSenoList->Items->Add("Angulo: " + teta.ToString());
			this->panelListasSecanteList->Items->Add("Angulo: " + teta.ToString());
			teta *= (Math::PI / 180);
			double sen_taylor = 0;
			for (int i = 0; i < n; i++)
			{
				double num_sen = 1 / this->factorial(2 * i + 1);
				if (i % 2 == 1) num_sen *= -1;
				num_sen *= pow(teta, (2 * i + 1));
				sen_taylor += num_sen;
			}
			this->panelListasSenoList->Items->Add("Seno: " + this->rounded(sen_taylor.ToString()));
			if (Math::Cos(teta) != 0) {
				double sec = 1 / Math::Cos(teta);
				this->panelListasSecanteList->Items->Add("Secante: " + this->rounded(sec.ToString()));
			}
			else this->panelListasSecanteList->Items->Add("Secante: INFINITO");
		}
	}

	private: System::Void MenuButtonFiguras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->clear();
		Graphics^ canvas = this->panel->CreateGraphics();
		Graphics3D::Sphere(50, 50, 100, canvas);
		Graphics3D::Cylinder(200, 50, 100, 75, canvas);
		Graphics3D::Cone(325, 50, 100, 75, canvas);
		Graphics3D::Cube(150, 275, 50, canvas);
		Graphics3D::Paralepiped(300, 275, 35,65,55, canvas);
	}
	private: System::Void MenuButtonIsometricos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->clear();
		Graphics^ canvas = this->panel->CreateGraphics();
		Graphics3D::Isometric_1(130,250,85,canvas);
		Graphics3D::Isometric_2(310, 250, 85, canvas);
	}
	private: System::Void MenuButtonInversas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->clear();
		Graphics^ canvas = this->panel->CreateGraphics();
		GraphicsFuntion::DrawFunction1(Point(150,230),canvas);
	}
	private: System::Void MenuButtonLibre_Click(System::Object^ sender, System::EventArgs^ e) {
		this->clear();
		Graphics^ canvas = this->panel->CreateGraphics();
		Graphics3D::DrawHappyFace(Point(120, 160), canvas);
		Graphics3D::DrawHappyFace(Point(300, 160), canvas);
	}
	private: System::Void MenuButtonSeries_Click(System::Object^ sender, System::EventArgs^ e) {
		this->clear();
		this->panelSeries->Visible = true;
		this->panelSeries->Width = 356;
		this->panelSeries->Height = 205;
		this->panel->PerformLayout();
		this->panel->Refresh();
		int n = 5;
		this->pi(n);
		this->ackerman(n);
		this->seno(n);
		this->coseno(n);
		this->fibo(n);
	}

private: System::Void MenuButtonListas_Click(System::Object^ sender, System::EventArgs^ e) {
	this->clear();
	this->panelListas->Visible = true;
	this->panel->RowStyles[0]->Height = 0.0f;
	this->panel->RowStyles[1]->Height = 100.0f;
	this->panelListas->Width = 356;
	this->panelListas->Height = 226;
	this->list_1();
	this->list_2();
	this->panel->PerformLayout();
	this->panel->Refresh();
}
private: System::Void MenuButtonAyuda_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("LEE LOS BOTONES PAPU --- AYUDANDO --- AYUDANDO", "MENSAJE DE AYUDA");
}
private: System::Void MenuButtonAcercaDe_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("PONDERADOR DE POO", "ACERCA DE");
}
private: System::Void MenuButtonPolares_Click(System::Object^ sender, System::EventArgs^ e) {
	this->clear();
	Graphics^ canvas = this->panel->CreateGraphics();
	GraphicsPolar::DrawFunction1(Point(85, 100), canvas);
}
};
}
