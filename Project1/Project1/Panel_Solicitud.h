#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Panel_Solicitud
	/// </summary>
	public ref class Panel_Solicitud : public System::Windows::Forms::Form
	{
	public:
		Panel_Solicitud(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Panel_Solicitud()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelHeader;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  imgRepartidor;
	private: System::Windows::Forms::Label^  labelNombre;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;


	private: System::Windows::Forms::TextBox^  textBoxNombre;


	private: System::Windows::Forms::Label^  labelDireccion;

	private: System::Windows::Forms::TextBox^  textBoxDireccion;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelDetalle;
	private: System::Windows::Forms::Label^  labelTipo;
	private: System::Windows::Forms::Label^  labelTamano;
	private: System::Windows::Forms::Label^  labelCantidad;
	private: System::Windows::Forms::Label^  labelPrecio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownCilindros;
	private: System::Windows::Forms::Label^  labelNumCilindros;
	private: System::Windows::Forms::Label^  labelTelefono;
	private: System::Windows::Forms::TextBox^  textBoxTelefono;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelHeaderHeader;

	private: System::Windows::Forms::Label^  labelSolicitud;
	private: System::Windows::Forms::Label^  labelNumSolicitud;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelFooter;

	private: System::Windows::Forms::Label^  labelTotal;
	private: System::Windows::Forms::Label^  labelTotalPrecio;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMedios;
	private: System::Windows::Forms::Label^  labelSectorSolicitud;
	private: System::Windows::Forms::ComboBox^  comboBoxCerros;
	private: System::Windows::Forms::Label^  labelMedioDePago;
	private: System::Windows::Forms::ComboBox^  comboBoxMedioDePago;
	private: System::Windows::Forms::Label^  labelTiempoEntrega;
	private: System::Windows::Forms::TextBox^  textBoxTiempoEntrega;
	private: System::Windows::Forms::Button^  buttonIngresarPedido;






	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Panel_Solicitud::typeid));
			this->tableLayoutPanelHeader = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numericUpDownCilindros = (gcnew System::Windows::Forms::NumericUpDown());
			this->imgRepartidor = (gcnew System::Windows::Forms::PictureBox());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->labelNumCilindros = (gcnew System::Windows::Forms::Label());
			this->labelDireccion = (gcnew System::Windows::Forms::Label());
			this->labelTelefono = (gcnew System::Windows::Forms::Label());
			this->textBoxDireccion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanelDetalle = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelTipo = (gcnew System::Windows::Forms::Label());
			this->labelTamano = (gcnew System::Windows::Forms::Label());
			this->labelCantidad = (gcnew System::Windows::Forms::Label());
			this->labelPrecio = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelHeaderHeader = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelSolicitud = (gcnew System::Windows::Forms::Label());
			this->labelNumSolicitud = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelFooter = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->labelTotalPrecio = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelMedios = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelSectorSolicitud = (gcnew System::Windows::Forms::Label());
			this->comboBoxCerros = (gcnew System::Windows::Forms::ComboBox());
			this->labelMedioDePago = (gcnew System::Windows::Forms::Label());
			this->comboBoxMedioDePago = (gcnew System::Windows::Forms::ComboBox());
			this->labelTiempoEntrega = (gcnew System::Windows::Forms::Label());
			this->textBoxTiempoEntrega = (gcnew System::Windows::Forms::TextBox());
			this->buttonIngresarPedido = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanelHeader->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCilindros))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgRepartidor))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->tableLayoutPanelDetalle->SuspendLayout();
			this->tableLayoutPanelHeaderHeader->SuspendLayout();
			this->tableLayoutPanelFooter->SuspendLayout();
			this->tableLayoutPanelMedios->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanelHeader
			// 
			this->tableLayoutPanelHeader->ColumnCount = 5;
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36)));
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				64)));
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				158)));
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				177)));
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				186)));
			this->tableLayoutPanelHeader->Controls->Add(this->numericUpDownCilindros, 2, 1);
			this->tableLayoutPanelHeader->Controls->Add(this->imgRepartidor, 0, 0);
			this->tableLayoutPanelHeader->Controls->Add(this->labelNombre, 1, 0);
			this->tableLayoutPanelHeader->Controls->Add(this->textBoxNombre, 2, 0);
			this->tableLayoutPanelHeader->Controls->Add(this->labelNumCilindros, 1, 1);
			this->tableLayoutPanelHeader->Controls->Add(this->labelDireccion, 3, 0);
			this->tableLayoutPanelHeader->Controls->Add(this->labelTelefono, 3, 1);
			this->tableLayoutPanelHeader->Controls->Add(this->textBoxDireccion, 4, 0);
			this->tableLayoutPanelHeader->Controls->Add(this->textBoxTelefono, 4, 1);
			this->tableLayoutPanelHeader->Location = System::Drawing::Point(12, 44);
			this->tableLayoutPanelHeader->Name = L"tableLayoutPanelHeader";
			this->tableLayoutPanelHeader->RowCount = 2;
			this->tableLayoutPanelHeader->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				57.14286F)));
			this->tableLayoutPanelHeader->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				42.85714F)));
			this->tableLayoutPanelHeader->Size = System::Drawing::Size(760, 105);
			this->tableLayoutPanelHeader->TabIndex = 0;
			// 
			// numericUpDownCilindros
			// 
			this->numericUpDownCilindros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDownCilindros->Location = System::Drawing::Point(241, 72);
			this->numericUpDownCilindros->Name = L"numericUpDownCilindros";
			this->numericUpDownCilindros->Size = System::Drawing::Size(152, 20);
			this->numericUpDownCilindros->TabIndex = 2;
			// 
			// imgRepartidor
			// 
			this->imgRepartidor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->imgRepartidor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgRepartidor.Image")));
			this->imgRepartidor->Location = System::Drawing::Point(3, 3);
			this->imgRepartidor->Name = L"imgRepartidor";
			this->imgRepartidor->Size = System::Drawing::Size(80, 54);
			this->imgRepartidor->TabIndex = 0;
			this->imgRepartidor->TabStop = false;
			// 
			// labelNombre
			// 
			this->labelNombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelNombre->AutoSize = true;
			this->labelNombre->Location = System::Drawing::Point(89, 0);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(146, 60);
			this->labelNombre->TabIndex = 1;
			this->labelNombre->Text = L"Nombre:";
			this->labelNombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelNombre->Click += gcnew System::EventHandler(this, &Panel_Solicitud::label1_Click);
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBoxNombre->Location = System::Drawing::Point(241, 20);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(152, 20);
			this->textBoxNombre->TabIndex = 2;
			// 
			// labelNumCilindros
			// 
			this->labelNumCilindros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelNumCilindros->AutoSize = true;
			this->labelNumCilindros->Location = System::Drawing::Point(89, 60);
			this->labelNumCilindros->Name = L"labelNumCilindros";
			this->labelNumCilindros->Size = System::Drawing::Size(146, 45);
			this->labelNumCilindros->TabIndex = 3;
			this->labelNumCilindros->Text = L"Cilindros Solicitados:";
			this->labelNumCilindros->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelDireccion
			// 
			this->labelDireccion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelDireccion->AutoSize = true;
			this->labelDireccion->Location = System::Drawing::Point(399, 0);
			this->labelDireccion->Name = L"labelDireccion";
			this->labelDireccion->Size = System::Drawing::Size(171, 60);
			this->labelDireccion->TabIndex = 4;
			this->labelDireccion->Text = L"Direccion:";
			this->labelDireccion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTelefono
			// 
			this->labelTelefono->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTelefono->AutoSize = true;
			this->labelTelefono->Location = System::Drawing::Point(399, 60);
			this->labelTelefono->Name = L"labelTelefono";
			this->labelTelefono->Size = System::Drawing::Size(171, 45);
			this->labelTelefono->TabIndex = 5;
			this->labelTelefono->Text = L"Telefono:";
			this->labelTelefono->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxDireccion
			// 
			this->textBoxDireccion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBoxDireccion->Location = System::Drawing::Point(576, 20);
			this->textBoxDireccion->Name = L"textBoxDireccion";
			this->textBoxDireccion->Size = System::Drawing::Size(181, 20);
			this->textBoxDireccion->TabIndex = 6;
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBoxTelefono->Location = System::Drawing::Point(576, 72);
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(181, 20);
			this->textBoxTelefono->TabIndex = 8;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(181, 26);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem1->Text = L"toolStripMenuItem1";
			// 
			// tableLayoutPanelDetalle
			// 
			this->tableLayoutPanelDetalle->ColumnCount = 4;
			this->tableLayoutPanelDetalle->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.60355F)));
			this->tableLayoutPanelDetalle->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.39645F)));
			this->tableLayoutPanelDetalle->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				98)));
			this->tableLayoutPanelDetalle->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				71)));
			this->tableLayoutPanelDetalle->Controls->Add(this->labelTipo, 0, 0);
			this->tableLayoutPanelDetalle->Controls->Add(this->labelTamano, 1, 0);
			this->tableLayoutPanelDetalle->Controls->Add(this->labelCantidad, 2, 0);
			this->tableLayoutPanelDetalle->Controls->Add(this->labelPrecio, 3, 0);
			this->tableLayoutPanelDetalle->Location = System::Drawing::Point(104, 180);
			this->tableLayoutPanelDetalle->Name = L"tableLayoutPanelDetalle";
			this->tableLayoutPanelDetalle->RowCount = 2;
			this->tableLayoutPanelDetalle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelDetalle->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelDetalle->Size = System::Drawing::Size(381, 53);
			this->tableLayoutPanelDetalle->TabIndex = 2;
			// 
			// labelTipo
			// 
			this->labelTipo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTipo->AutoSize = true;
			this->labelTipo->Location = System::Drawing::Point(3, 0);
			this->labelTipo->Name = L"labelTipo";
			this->labelTipo->Size = System::Drawing::Size(84, 26);
			this->labelTipo->TabIndex = 3;
			this->labelTipo->Text = L"Tipo (C-NC)";
			this->labelTipo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTamano
			// 
			this->labelTamano->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTamano->AutoSize = true;
			this->labelTamano->Location = System::Drawing::Point(93, 0);
			this->labelTamano->Name = L"labelTamano";
			this->labelTamano->Size = System::Drawing::Size(115, 26);
			this->labelTamano->TabIndex = 4;
			this->labelTamano->Text = L"Tamaño [kg]";
			this->labelTamano->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCantidad
			// 
			this->labelCantidad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelCantidad->AutoSize = true;
			this->labelCantidad->Location = System::Drawing::Point(214, 0);
			this->labelCantidad->Name = L"labelCantidad";
			this->labelCantidad->Size = System::Drawing::Size(92, 26);
			this->labelCantidad->TabIndex = 5;
			this->labelCantidad->Text = L"Cantidad";
			this->labelCantidad->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelPrecio
			// 
			this->labelPrecio->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelPrecio->AutoSize = true;
			this->labelPrecio->Location = System::Drawing::Point(312, 0);
			this->labelPrecio->Name = L"labelPrecio";
			this->labelPrecio->Size = System::Drawing::Size(66, 26);
			this->labelPrecio->TabIndex = 6;
			this->labelPrecio->Text = L"Precio";
			this->labelPrecio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanelHeaderHeader
			// 
			this->tableLayoutPanelHeaderHeader->ColumnCount = 2;
			this->tableLayoutPanelHeaderHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelHeaderHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelHeaderHeader->Controls->Add(this->labelSolicitud, 0, 0);
			this->tableLayoutPanelHeaderHeader->Controls->Add(this->labelNumSolicitud, 1, 0);
			this->tableLayoutPanelHeaderHeader->Location = System::Drawing::Point(312, 12);
			this->tableLayoutPanelHeaderHeader->Name = L"tableLayoutPanelHeaderHeader";
			this->tableLayoutPanelHeaderHeader->RowCount = 1;
			this->tableLayoutPanelHeaderHeader->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelHeaderHeader->Size = System::Drawing::Size(200, 26);
			this->tableLayoutPanelHeaderHeader->TabIndex = 3;
			// 
			// labelSolicitud
			// 
			this->labelSolicitud->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelSolicitud->AutoSize = true;
			this->labelSolicitud->Location = System::Drawing::Point(3, 0);
			this->labelSolicitud->Name = L"labelSolicitud";
			this->labelSolicitud->Size = System::Drawing::Size(94, 26);
			this->labelSolicitud->TabIndex = 0;
			this->labelSolicitud->Text = L"Solicitud ";
			this->labelSolicitud->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelNumSolicitud
			// 
			this->labelNumSolicitud->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelNumSolicitud->AutoSize = true;
			this->labelNumSolicitud->Location = System::Drawing::Point(103, 0);
			this->labelNumSolicitud->Name = L"labelNumSolicitud";
			this->labelNumSolicitud->Size = System::Drawing::Size(94, 26);
			this->labelNumSolicitud->TabIndex = 1;
			this->labelNumSolicitud->Text = L"N° 1";
			this->labelNumSolicitud->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanelFooter
			// 
			this->tableLayoutPanelFooter->ColumnCount = 2;
			this->tableLayoutPanelFooter->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelFooter->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelFooter->Controls->Add(this->labelTotal, 0, 0);
			this->tableLayoutPanelFooter->Controls->Add(this->labelTotalPrecio, 1, 0);
			this->tableLayoutPanelFooter->Location = System::Drawing::Point(285, 414);
			this->tableLayoutPanelFooter->Name = L"tableLayoutPanelFooter";
			this->tableLayoutPanelFooter->RowCount = 1;
			this->tableLayoutPanelFooter->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelFooter->Size = System::Drawing::Size(200, 23);
			this->tableLayoutPanelFooter->TabIndex = 4;
			// 
			// labelTotal
			// 
			this->labelTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTotal->AutoSize = true;
			this->labelTotal->Location = System::Drawing::Point(3, 0);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(94, 23);
			this->labelTotal->TabIndex = 0;
			this->labelTotal->Text = L"Total";
			this->labelTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTotalPrecio
			// 
			this->labelTotalPrecio->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTotalPrecio->AutoSize = true;
			this->labelTotalPrecio->Location = System::Drawing::Point(103, 0);
			this->labelTotalPrecio->Name = L"labelTotalPrecio";
			this->labelTotalPrecio->Size = System::Drawing::Size(94, 23);
			this->labelTotalPrecio->TabIndex = 1;
			this->labelTotalPrecio->Text = L"$ 9.990";
			this->labelTotalPrecio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanelMedios
			// 
			this->tableLayoutPanelMedios->ColumnCount = 2;
			this->tableLayoutPanelMedios->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelMedios->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelMedios->Controls->Add(this->comboBoxCerros, 1, 0);
			this->tableLayoutPanelMedios->Controls->Add(this->labelSectorSolicitud, 0, 0);
			this->tableLayoutPanelMedios->Controls->Add(this->labelMedioDePago, 0, 1);
			this->tableLayoutPanelMedios->Controls->Add(this->comboBoxMedioDePago, 1, 1);
			this->tableLayoutPanelMedios->Controls->Add(this->labelTiempoEntrega, 0, 2);
			this->tableLayoutPanelMedios->Controls->Add(this->textBoxTiempoEntrega, 1, 2);
			this->tableLayoutPanelMedios->Controls->Add(this->buttonIngresarPedido, 1, 4);
			this->tableLayoutPanelMedios->Location = System::Drawing::Point(509, 196);
			this->tableLayoutPanelMedios->Name = L"tableLayoutPanelMedios";
			this->tableLayoutPanelMedios->RowCount = 5;
			this->tableLayoutPanelMedios->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				39.53489F)));
			this->tableLayoutPanelMedios->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				60.46511F)));
			this->tableLayoutPanelMedios->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				53)));
			this->tableLayoutPanelMedios->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				34)));
			this->tableLayoutPanelMedios->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				29)));
			this->tableLayoutPanelMedios->Size = System::Drawing::Size(269, 215);
			this->tableLayoutPanelMedios->TabIndex = 5;
			// 
			// labelSectorSolicitud
			// 
			this->labelSectorSolicitud->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelSectorSolicitud->AutoSize = true;
			this->labelSectorSolicitud->Location = System::Drawing::Point(3, 0);
			this->labelSectorSolicitud->Name = L"labelSectorSolicitud";
			this->labelSectorSolicitud->Size = System::Drawing::Size(128, 39);
			this->labelSectorSolicitud->TabIndex = 0;
			this->labelSectorSolicitud->Text = L"Sector que solicita";
			this->labelSectorSolicitud->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxCerros
			// 
			this->comboBoxCerros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxCerros->FormattingEnabled = true;
			this->comboBoxCerros->Location = System::Drawing::Point(137, 9);
			this->comboBoxCerros->Name = L"comboBoxCerros";
			this->comboBoxCerros->Size = System::Drawing::Size(129, 21);
			this->comboBoxCerros->TabIndex = 6;
			this->comboBoxCerros->Text = L"Seleccionar...";
			// 
			// labelMedioDePago
			// 
			this->labelMedioDePago->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelMedioDePago->AutoSize = true;
			this->labelMedioDePago->Location = System::Drawing::Point(3, 62);
			this->labelMedioDePago->Name = L"labelMedioDePago";
			this->labelMedioDePago->Size = System::Drawing::Size(128, 13);
			this->labelMedioDePago->TabIndex = 7;
			this->labelMedioDePago->Text = L"Medio de Pago";
			this->labelMedioDePago->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxMedioDePago
			// 
			this->comboBoxMedioDePago->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxMedioDePago->FormattingEnabled = true;
			this->comboBoxMedioDePago->Location = System::Drawing::Point(137, 58);
			this->comboBoxMedioDePago->Name = L"comboBoxMedioDePago";
			this->comboBoxMedioDePago->Size = System::Drawing::Size(129, 21);
			this->comboBoxMedioDePago->TabIndex = 8;
			this->comboBoxMedioDePago->Text = L"Seleccionar...";
			// 
			// labelTiempoEntrega
			// 
			this->labelTiempoEntrega->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTiempoEntrega->AutoSize = true;
			this->labelTiempoEntrega->Location = System::Drawing::Point(3, 98);
			this->labelTiempoEntrega->Name = L"labelTiempoEntrega";
			this->labelTiempoEntrega->Size = System::Drawing::Size(128, 53);
			this->labelTiempoEntrega->TabIndex = 9;
			this->labelTiempoEntrega->Text = L"Tiempo de entrega (estimado)";
			this->labelTiempoEntrega->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTiempoEntrega
			// 
			this->textBoxTiempoEntrega->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBoxTiempoEntrega->Location = System::Drawing::Point(137, 114);
			this->textBoxTiempoEntrega->Name = L"textBoxTiempoEntrega";
			this->textBoxTiempoEntrega->Size = System::Drawing::Size(129, 20);
			this->textBoxTiempoEntrega->TabIndex = 10;
			// 
			// buttonIngresarPedido
			// 
			this->buttonIngresarPedido->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonIngresarPedido->Location = System::Drawing::Point(137, 188);
			this->buttonIngresarPedido->Name = L"buttonIngresarPedido";
			this->buttonIngresarPedido->Size = System::Drawing::Size(129, 24);
			this->buttonIngresarPedido->TabIndex = 11;
			this->buttonIngresarPedido->Text = L"Ingresar Pedido";
			this->buttonIngresarPedido->UseVisualStyleBackColor = true;
			// 
			// Panel_Solicitud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 468);
			this->Controls->Add(this->tableLayoutPanelMedios);
			this->Controls->Add(this->tableLayoutPanelFooter);
			this->Controls->Add(this->tableLayoutPanelHeaderHeader);
			this->Controls->Add(this->tableLayoutPanelDetalle);
			this->Controls->Add(this->tableLayoutPanelHeader);
			this->Name = L"Panel_Solicitud";
			this->Text = L"Panel_Solicitud";
			this->tableLayoutPanelHeader->ResumeLayout(false);
			this->tableLayoutPanelHeader->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCilindros))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgRepartidor))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->tableLayoutPanelDetalle->ResumeLayout(false);
			this->tableLayoutPanelDetalle->PerformLayout();
			this->tableLayoutPanelHeaderHeader->ResumeLayout(false);
			this->tableLayoutPanelHeaderHeader->PerformLayout();
			this->tableLayoutPanelFooter->ResumeLayout(false);
			this->tableLayoutPanelFooter->PerformLayout();
			this->tableLayoutPanelMedios->ResumeLayout(false);
			this->tableLayoutPanelMedios->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
