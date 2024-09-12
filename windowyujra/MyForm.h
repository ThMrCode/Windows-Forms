#pragma once
#include "utils.h"
#include "MainForm.h"

namespace windowyujra {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Administrator^ admin): counter_Error(0)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			windowyujra::CustomerUI::ApplyStyle(this);
			// Usar en TABLAYOUTPANEL PERCENT
			// Tamaño Form 318 304
			this->software = admin;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ operation;
	protected:
	private: System::Windows::Forms::Label^ operationLabel;
	private: System::Windows::Forms::TableLayoutPanel^ operationContent;
	private: System::Windows::Forms::Button^ operationContentButton1;
	private: System::Windows::Forms::Button^ operationContentButton2;
	private: System::Windows::Forms::Button^ operationContentButton3;
	private: System::Windows::Forms::TableLayoutPanel^ acces;
	private: System::Windows::Forms::Label^ accesLabel;
	private: System::Windows::Forms::TableLayoutPanel^ accesContent;
	private: System::Windows::Forms::Label^ accesContentPasswordLabel;
	private: System::Windows::Forms::TextBox^ accesContentPasswordText;
	private: System::Windows::Forms::TextBox^ accesContentUserText;

	private: System::Windows::Forms::Label^ accesContentUserLabel;
	private: System::Windows::Forms::TableLayoutPanel^ container;

	protected:







































	protected:


	protected:

	protected:

	protected:





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
		Administrator^ software;
		int counter_Error;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->operation = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->operationLabel = (gcnew System::Windows::Forms::Label());
			this->operationContent = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->operationContentButton1 = (gcnew System::Windows::Forms::Button());
			this->operationContentButton2 = (gcnew System::Windows::Forms::Button());
			this->operationContentButton3 = (gcnew System::Windows::Forms::Button());
			this->acces = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->accesLabel = (gcnew System::Windows::Forms::Label());
			this->accesContent = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->accesContentPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->accesContentPasswordText = (gcnew System::Windows::Forms::TextBox());
			this->accesContentUserText = (gcnew System::Windows::Forms::TextBox());
			this->accesContentUserLabel = (gcnew System::Windows::Forms::Label());
			this->container = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->operation->SuspendLayout();
			this->operationContent->SuspendLayout();
			this->acces->SuspendLayout();
			this->accesContent->SuspendLayout();
			this->container->SuspendLayout();
			this->SuspendLayout();
			// 
			// operation
			// 
			this->operation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->operation->ColumnCount = 1;
			this->operation->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->operation->Controls->Add(this->operationLabel, 0, 0);
			this->operation->Controls->Add(this->operationContent, 0, 1);
			this->operation->Location = System::Drawing::Point(20, 191);
			this->operation->Margin = System::Windows::Forms::Padding(20);
			this->operation->Name = L"operation";
			this->operation->RowCount = 2;
			this->operation->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->operation->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->operation->Size = System::Drawing::Size(295, 74);
			this->operation->TabIndex = 1;
			// 
			// operationLabel
			// 
			this->operationLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->operationLabel->AutoSize = true;
			this->operationLabel->Location = System::Drawing::Point(3, 6);
			this->operationLabel->Name = L"operationLabel";
			this->operationLabel->Size = System::Drawing::Size(84, 13);
			this->operationLabel->TabIndex = 0;
			this->operationLabel->Text = L"OPERACIONES";
			// 
			// operationContent
			// 
			this->operationContent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->operationContent->ColumnCount = 3;
			this->operationContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->operationContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->operationContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->operationContent->Controls->Add(this->operationContentButton1, 0, 0);
			this->operationContent->Controls->Add(this->operationContentButton2, 1, 0);
			this->operationContent->Controls->Add(this->operationContentButton3, 2, 0);
			this->operationContent->Location = System::Drawing::Point(3, 28);
			this->operationContent->Name = L"operationContent";
			this->operationContent->RowCount = 1;
			this->operationContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->operationContent->Size = System::Drawing::Size(289, 43);
			this->operationContent->TabIndex = 1;
			// 
			// operationContentButton1
			// 
			this->operationContentButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->operationContentButton1->Location = System::Drawing::Point(10, 5);
			this->operationContentButton1->Margin = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->operationContentButton1->Name = L"operationContentButton1";
			this->operationContentButton1->Size = System::Drawing::Size(76, 33);
			this->operationContentButton1->TabIndex = 0;
			this->operationContentButton1->Text = L"ACEPTAR";
			this->operationContentButton1->UseVisualStyleBackColor = true;
			this->operationContentButton1->Click += gcnew System::EventHandler(this, &MyForm::aceptar_Click);
			// 
			// operationContentButton2
			// 
			this->operationContentButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->operationContentButton2->Location = System::Drawing::Point(106, 5);
			this->operationContentButton2->Margin = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->operationContentButton2->Name = L"operationContentButton2";
			this->operationContentButton2->Size = System::Drawing::Size(76, 33);
			this->operationContentButton2->TabIndex = 1;
			this->operationContentButton2->Text = L"LIMPIAR";
			this->operationContentButton2->UseVisualStyleBackColor = true;
			this->operationContentButton2->Click += gcnew System::EventHandler(this, &MyForm::limpiar_Click);
			// 
			// operationContentButton3
			// 
			this->operationContentButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->operationContentButton3->Location = System::Drawing::Point(202, 5);
			this->operationContentButton3->Margin = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->operationContentButton3->Name = L"operationContentButton3";
			this->operationContentButton3->Size = System::Drawing::Size(77, 33);
			this->operationContentButton3->TabIndex = 2;
			this->operationContentButton3->Text = L"SALIR";
			this->operationContentButton3->UseVisualStyleBackColor = true;
			this->operationContentButton3->Click += gcnew System::EventHandler(this, &MyForm::salir_Click);
			// 
			// acces
			// 
			this->acces->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->acces->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->acces->ColumnCount = 1;
			this->acces->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->acces->Controls->Add(this->accesLabel, 0, 0);
			this->acces->Controls->Add(this->accesContent, 0, 1);
			this->acces->Location = System::Drawing::Point(20, 20);
			this->acces->Margin = System::Windows::Forms::Padding(20);
			this->acces->Name = L"acces";
			this->acces->RowCount = 2;
			this->acces->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->acces->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->acces->Size = System::Drawing::Size(295, 131);
			this->acces->TabIndex = 0;
			// 
			// accesLabel
			// 
			this->accesLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->accesLabel->AutoSize = true;
			this->accesLabel->Location = System::Drawing::Point(4, 7);
			this->accesLabel->Name = L"accesLabel";
			this->accesLabel->Size = System::Drawing::Size(50, 13);
			this->accesLabel->TabIndex = 0;
			this->accesLabel->Text = L"ACCESO";
			// 
			// accesContent
			// 
			this->accesContent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->accesContent->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->accesContent->ColumnCount = 2;
			this->accesContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->accesContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 65)));
			this->accesContent->Controls->Add(this->accesContentPasswordLabel, 0, 1);
			this->accesContent->Controls->Add(this->accesContentPasswordText, 1, 1);
			this->accesContent->Controls->Add(this->accesContentUserText, 1, 0);
			this->accesContent->Controls->Add(this->accesContentUserLabel, 0, 0);
			this->accesContent->Location = System::Drawing::Point(4, 30);
			this->accesContent->Name = L"accesContent";
			this->accesContent->RowCount = 2;
			this->accesContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->accesContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->accesContent->Size = System::Drawing::Size(287, 97);
			this->accesContent->TabIndex = 1;
			// 
			// accesContentPasswordLabel
			// 
			this->accesContentPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->accesContentPasswordLabel->AutoSize = true;
			this->accesContentPasswordLabel->Location = System::Drawing::Point(30, 66);
			this->accesContentPasswordLabel->Name = L"accesContentPasswordLabel";
			this->accesContentPasswordLabel->Size = System::Drawing::Size(41, 13);
			this->accesContentPasswordLabel->TabIndex = 1;
			this->accesContentPasswordLabel->Text = L"CLAVE";
			// 
			// accesContentPasswordText
			// 
			this->accesContentPasswordText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->accesContentPasswordText->Location = System::Drawing::Point(111, 62);
			this->accesContentPasswordText->Margin = System::Windows::Forms::Padding(10, 3, 10, 3);
			this->accesContentPasswordText->Name = L"accesContentPasswordText";
			this->accesContentPasswordText->Size = System::Drawing::Size(165, 20);
			this->accesContentPasswordText->TabIndex = 3;
			// 
			// accesContentUserText
			// 
			this->accesContentUserText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->accesContentUserText->Location = System::Drawing::Point(111, 14);
			this->accesContentUserText->Margin = System::Windows::Forms::Padding(10, 3, 10, 3);
			this->accesContentUserText->Name = L"accesContentUserText";
			this->accesContentUserText->Size = System::Drawing::Size(165, 20);
			this->accesContentUserText->TabIndex = 4;
			// 
			// accesContentUserLabel
			// 
			this->accesContentUserLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->accesContentUserLabel->AutoSize = true;
			this->accesContentUserLabel->Location = System::Drawing::Point(22, 18);
			this->accesContentUserLabel->Name = L"accesContentUserLabel";
			this->accesContentUserLabel->Size = System::Drawing::Size(56, 13);
			this->accesContentUserLabel->TabIndex = 0;
			this->accesContentUserLabel->Text = L"USUARIO";
			// 
			// container
			// 
			this->container->ColumnCount = 1;
			this->container->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->container->Controls->Add(this->operation, 0, 1);
			this->container->Controls->Add(this->acces, 0, 0);
			this->container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container->Location = System::Drawing::Point(0, 0);
			this->container->MinimumSize = System::Drawing::Size(302, 265);
			this->container->Name = L"container";
			this->container->RowCount = 2;
			this->container->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->container->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->container->Size = System::Drawing::Size(335, 285);
			this->container->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 285);
			this->Controls->Add(this->container);
			this->Name = L"MyForm";
			this->Text = L"SISTEMA";
			this->operation->ResumeLayout(false);
			this->operation->PerformLayout();
			this->operationContent->ResumeLayout(false);
			this->acces->ResumeLayout(false);
			this->acces->PerformLayout();
			this->accesContent->ResumeLayout(false);
			this->accesContent->PerformLayout();
			this->container->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		bool value = this->software->verify(this->accesContentUserText->Text, this->accesContentPasswordText->Text);
		if (value) {
			// Prosigo con el programa
			MainForm^ mForm = gcnew MainForm();
			mForm->Show();
		}
		else this->counter_Error++;
		if (this->counter_Error >= 3) this->Close();
	}
	private: System::Void limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->accesContentUserText->Text = L"";
		this->accesContentPasswordText->Text = L"";
	}
	private: System::Void salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
};
}
