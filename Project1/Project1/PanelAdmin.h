#pragma once

namespace PanelAdmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PanelAdmin
	/// </summary>
	public ref class PanelAdmin : public System::Windows::Forms::Form
	{
	public:
		PanelAdmin(void)
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
		~PanelAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBoxAdminHome;
	protected:

	private: System::Windows::Forms::TabControl^  tabControl1;


	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  labelInfoGeneral;
	private: System::Windows::Forms::Label^  labelCenterTiempoEstimadoEntrega;
	private: System::Windows::Forms::Label^  labelCenterTiempoDisponibilidadCamion;



	private: System::Windows::Forms::Label^  labelCenterCantidadSolicitudAtendida;

	private: System::Windows::Forms::Label^  labelCenterCantidadSolicitudesActuales;
	private: System::Windows::Forms::PictureBox^  pictureBoxAdminFlechaHome1;
	private: System::Windows::Forms::PictureBox^  pictureBoxAdminFlechaHome4;



	private: System::Windows::Forms::PictureBox^  pictureBoxAdminFlechaHome3;

	private: System::Windows::Forms::PictureBox^  pictureBoxAdminFlechaHome2;

	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelCamionReparto;

	private: System::Windows::Forms::PictureBox^  pictureBoxAdminCamiones;
	private: System::Windows::Forms::ComboBox^  comboBoxTipoCamion;



	private: System::Windows::Forms::Label^  labelFiltrarPor;
	private: System::Windows::Forms::ComboBox^  comboBoxOrdenarPor;


	private: System::Windows::Forms::Label^  labelOrdenarPor;

	private: System::Windows::Forms::Label^  labelTiempoEstimadoEntrega;
	private: System::Windows::Forms::Label^  labelCantidadSolicitudRestante;
	private: System::Windows::Forms::Label^  labelCantidadSolicitudAtendida;
	private: System::Windows::Forms::Label^  labelTiempoDisponibilidadCamion;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelFiltroCamionReparto;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelCamionRepartoHeader;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelCamionReparto;
	private: System::Windows::Forms::Label^  labelNumCamion;
	private: System::Windows::Forms::Label^  labelCilindroRestante;
	private: System::Windows::Forms::Label^  labelSolicitudRestante;
	private: System::Windows::Forms::Label^  labelSolicitudAtendida;
	private: System::Windows::Forms::Label^  labelTiempoEstimadoDisponibilidad;
	private: System::Windows::Forms::Label^  labelTiempoAtencionCamion;





	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PanelAdmin::typeid));
			this->pictureBoxAdminHome = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->labelInfoGeneral = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBoxAdminFlechaHome4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAdminFlechaHome3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAdminFlechaHome2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAdminFlechaHome1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelCenterTiempoEstimadoEntrega = (gcnew System::Windows::Forms::Label());
			this->labelCenterCantidadSolicitudAtendida = (gcnew System::Windows::Forms::Label());
			this->labelCenterTiempoDisponibilidadCamion = (gcnew System::Windows::Forms::Label());
			this->labelCenterCantidadSolicitudesActuales = (gcnew System::Windows::Forms::Label());
			this->labelTiempoEstimadoEntrega = (gcnew System::Windows::Forms::Label());
			this->labelCantidadSolicitudRestante = (gcnew System::Windows::Forms::Label());
			this->labelCantidadSolicitudAtendida = (gcnew System::Windows::Forms::Label());
			this->labelTiempoDisponibilidadCamion = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanelCamionReparto = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelNumCamion = (gcnew System::Windows::Forms::Label());
			this->labelCilindroRestante = (gcnew System::Windows::Forms::Label());
			this->labelSolicitudRestante = (gcnew System::Windows::Forms::Label());
			this->labelSolicitudAtendida = (gcnew System::Windows::Forms::Label());
			this->labelTiempoEstimadoDisponibilidad = (gcnew System::Windows::Forms::Label());
			this->labelTiempoAtencionCamion = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelFiltroCamionReparto = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelFiltrarPor = (gcnew System::Windows::Forms::Label());
			this->comboBoxTipoCamion = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxOrdenarPor = (gcnew System::Windows::Forms::ComboBox());
			this->labelOrdenarPor = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelCamionRepartoHeader = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBoxAdminCamiones = (gcnew System::Windows::Forms::PictureBox());
			this->labelCamionReparto = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminHome))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanelCamionReparto->SuspendLayout();
			this->tableLayoutPanelFiltroCamionReparto->SuspendLayout();
			this->tableLayoutPanelCamionRepartoHeader->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminCamiones))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBoxAdminHome
			// 
			//this->pictureBoxAdminHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxAdminHome.Image")));
			this->pictureBoxAdminHome->Location = System::Drawing::Point(80, 30);
			this->pictureBoxAdminHome->Name = L"pictureBoxAdminHome";
			this->pictureBoxAdminHome->Size = System::Drawing::Size(68, 65);
			this->pictureBoxAdminHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdminHome->TabIndex = 0;
			this->pictureBoxAdminHome->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(747, 414);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->labelInfoGeneral);
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Controls->Add(this->pictureBoxAdminHome);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(739, 388);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Información";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &PanelAdmin::tabPage1_Click);
			// 
			// labelInfoGeneral
			// 
			this->labelInfoGeneral->AutoSize = true;
			this->labelInfoGeneral->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInfoGeneral->Location = System::Drawing::Point(175, 40);
			this->labelInfoGeneral->Name = L"labelInfoGeneral";
			this->labelInfoGeneral->Size = System::Drawing::Size(301, 40);
			this->labelInfoGeneral->TabIndex = 0;
			this->labelInfoGeneral->Text = L"Información General";
			this->labelInfoGeneral->Click += gcnew System::EventHandler(this, &PanelAdmin::label1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBoxAdminFlechaHome4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBoxAdminFlechaHome3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBoxAdminFlechaHome2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBoxAdminFlechaHome1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelCenterTiempoEstimadoEntrega, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelCenterCantidadSolicitudAtendida, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelCenterTiempoDisponibilidadCamion, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelCenterCantidadSolicitudesActuales, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelTiempoEstimadoEntrega, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelCantidadSolicitudRestante, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelCantidadSolicitudAtendida, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelTiempoDisponibilidadCamion, 2, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(97, 123);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.31461F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.68539F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(549, 152);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// pictureBoxAdminFlechaHome4
			// 
			this->pictureBoxAdminFlechaHome4->Location = System::Drawing::Point(3, 120);
			this->pictureBoxAdminFlechaHome4->Name = L"pictureBoxAdminFlechaHome4";
			this->pictureBoxAdminFlechaHome4->Size = System::Drawing::Size(14, 18);
			this->pictureBoxAdminFlechaHome4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdminFlechaHome4->TabIndex = 6;
			this->pictureBoxAdminFlechaHome4->TabStop = false;
			// 
			// pictureBoxAdminFlechaHome3
			// 
			this->pictureBoxAdminFlechaHome3->Location = System::Drawing::Point(3, 81);
			this->pictureBoxAdminFlechaHome3->Name = L"pictureBoxAdminFlechaHome3";
			this->pictureBoxAdminFlechaHome3->Size = System::Drawing::Size(14, 18);
			this->pictureBoxAdminFlechaHome3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdminFlechaHome3->TabIndex = 5;
			this->pictureBoxAdminFlechaHome3->TabStop = false;
			// 
			// pictureBoxAdminFlechaHome2
			// 
			this->pictureBoxAdminFlechaHome2->Location = System::Drawing::Point(3, 41);
			this->pictureBoxAdminFlechaHome2->Name = L"pictureBoxAdminFlechaHome2";
			this->pictureBoxAdminFlechaHome2->Size = System::Drawing::Size(14, 18);
			this->pictureBoxAdminFlechaHome2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdminFlechaHome2->TabIndex = 4;
			this->pictureBoxAdminFlechaHome2->TabStop = false;
			// 
			// pictureBoxAdminFlechaHome1
			// 
			this->pictureBoxAdminFlechaHome1->Location = System::Drawing::Point(3, 3);
			this->pictureBoxAdminFlechaHome1->Name = L"pictureBoxAdminFlechaHome1";
			this->pictureBoxAdminFlechaHome1->Size = System::Drawing::Size(14, 18);
			this->pictureBoxAdminFlechaHome1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdminFlechaHome1->TabIndex = 2;
			this->pictureBoxAdminFlechaHome1->TabStop = false;
			// 
			// labelCenterTiempoEstimadoEntrega
			// 
			this->labelCenterTiempoEstimadoEntrega->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCenterTiempoEstimadoEntrega->AutoSize = true;
			this->labelCenterTiempoEstimadoEntrega->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCenterTiempoEstimadoEntrega->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelCenterTiempoEstimadoEntrega->Location = System::Drawing::Point(43, 8);
			this->labelCenterTiempoEstimadoEntrega->Name = L"labelCenterTiempoEstimadoEntrega";
			this->labelCenterTiempoEstimadoEntrega->Size = System::Drawing::Size(453, 21);
			this->labelCenterTiempoEstimadoEntrega->TabIndex = 0;
			this->labelCenterTiempoEstimadoEntrega->Text = L"Tiempo estimado de entrega (minutos): ";
			this->labelCenterTiempoEstimadoEntrega->Click += gcnew System::EventHandler(this, &PanelAdmin::label2_Click);
			// 
			// labelCenterCantidadSolicitudAtendida
			// 
			this->labelCenterCantidadSolicitudAtendida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCenterCantidadSolicitudAtendida->AutoSize = true;
			this->labelCenterCantidadSolicitudAtendida->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCenterCantidadSolicitudAtendida->Location = System::Drawing::Point(43, 87);
			this->labelCenterCantidadSolicitudAtendida->Name = L"labelCenterCantidadSolicitudAtendida";
			this->labelCenterCantidadSolicitudAtendida->Size = System::Drawing::Size(453, 21);
			this->labelCenterCantidadSolicitudAtendida->TabIndex = 2;
			this->labelCenterCantidadSolicitudAtendida->Text = L"Cantidad de solicitudes atendidas:";
			this->labelCenterCantidadSolicitudAtendida->Click += gcnew System::EventHandler(this, &PanelAdmin::label4_Click);
			// 
			// labelCenterTiempoDisponibilidadCamion
			// 
			this->labelCenterTiempoDisponibilidadCamion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCenterTiempoDisponibilidadCamion->AutoSize = true;
			this->labelCenterTiempoDisponibilidadCamion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCenterTiempoDisponibilidadCamion->Location = System::Drawing::Point(43, 124);
			this->labelCenterTiempoDisponibilidadCamion->Name = L"labelCenterTiempoDisponibilidadCamion";
			this->labelCenterTiempoDisponibilidadCamion->Size = System::Drawing::Size(453, 21);
			this->labelCenterTiempoDisponibilidadCamion->TabIndex = 3;
			this->labelCenterTiempoDisponibilidadCamion->Text = L"Tiempo de disponibilidad del siguiente camión (minutos):";
			// 
			// labelCenterCantidadSolicitudesActuales
			// 
			this->labelCenterCantidadSolicitudesActuales->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCenterCantidadSolicitudesActuales->AutoSize = true;
			this->labelCenterCantidadSolicitudesActuales->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCenterCantidadSolicitudesActuales->Location = System::Drawing::Point(43, 47);
			this->labelCenterCantidadSolicitudesActuales->Name = L"labelCenterCantidadSolicitudesActuales";
			this->labelCenterCantidadSolicitudesActuales->Size = System::Drawing::Size(453, 21);
			this->labelCenterCantidadSolicitudesActuales->TabIndex = 1;
			this->labelCenterCantidadSolicitudesActuales->Text = L"Cantidad de solicitudes actuales:";
			// 
			// labelTiempoEstimadoEntrega
			// 
			this->labelTiempoEstimadoEntrega->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelTiempoEstimadoEntrega->AutoSize = true;
			this->labelTiempoEstimadoEntrega->Location = System::Drawing::Point(502, 12);
			this->labelTiempoEstimadoEntrega->Name = L"labelTiempoEstimadoEntrega";
			this->labelTiempoEstimadoEntrega->Size = System::Drawing::Size(44, 13);
			this->labelTiempoEstimadoEntrega->TabIndex = 7;
			this->labelTiempoEstimadoEntrega->Text = L"10";
			this->labelTiempoEstimadoEntrega->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCantidadSolicitudRestante
			// 
			this->labelCantidadSolicitudRestante->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCantidadSolicitudRestante->AutoSize = true;
			this->labelCantidadSolicitudRestante->Location = System::Drawing::Point(502, 51);
			this->labelCantidadSolicitudRestante->Name = L"labelCantidadSolicitudRestante";
			this->labelCantidadSolicitudRestante->Size = System::Drawing::Size(44, 13);
			this->labelCantidadSolicitudRestante->TabIndex = 8;
			this->labelCantidadSolicitudRestante->Text = L"5";
			this->labelCantidadSolicitudRestante->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCantidadSolicitudAtendida
			// 
			this->labelCantidadSolicitudAtendida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCantidadSolicitudAtendida->AutoSize = true;
			this->labelCantidadSolicitudAtendida->Location = System::Drawing::Point(502, 91);
			this->labelCantidadSolicitudAtendida->Name = L"labelCantidadSolicitudAtendida";
			this->labelCantidadSolicitudAtendida->Size = System::Drawing::Size(44, 13);
			this->labelCantidadSolicitudAtendida->TabIndex = 9;
			this->labelCantidadSolicitudAtendida->Text = L"10";
			this->labelCantidadSolicitudAtendida->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTiempoDisponibilidadCamion
			// 
			this->labelTiempoDisponibilidadCamion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelTiempoDisponibilidadCamion->AutoSize = true;
			this->labelTiempoDisponibilidadCamion->Location = System::Drawing::Point(502, 128);
			this->labelTiempoDisponibilidadCamion->Name = L"labelTiempoDisponibilidadCamion";
			this->labelTiempoDisponibilidadCamion->Size = System::Drawing::Size(44, 13);
			this->labelTiempoDisponibilidadCamion->TabIndex = 10;
			this->labelTiempoDisponibilidadCamion->Text = L"2";
			this->labelTiempoDisponibilidadCamion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanelCamionReparto);
			this->tabPage2->Controls->Add(this->tableLayoutPanelFiltroCamionReparto);
			this->tabPage2->Controls->Add(this->tableLayoutPanelCamionRepartoHeader);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(739, 388);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Reparto";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanelCamionReparto
			// 
			this->tableLayoutPanelCamionReparto->ColumnCount = 6;
			this->tableLayoutPanelCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				136)));
			this->tableLayoutPanelCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanelCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanelCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				129)));
			this->tableLayoutPanelCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				119)));
			this->tableLayoutPanelCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				111)));
			this->tableLayoutPanelCamionReparto->Controls->Add(this->labelNumCamion, 0, 0);
			this->tableLayoutPanelCamionReparto->Controls->Add(this->labelCilindroRestante, 1, 0);
			this->tableLayoutPanelCamionReparto->Controls->Add(this->labelSolicitudRestante, 2, 0);
			this->tableLayoutPanelCamionReparto->Controls->Add(this->labelSolicitudAtendida, 3, 0);
			this->tableLayoutPanelCamionReparto->Controls->Add(this->labelTiempoEstimadoDisponibilidad, 4, 0);
			this->tableLayoutPanelCamionReparto->Controls->Add(this->labelTiempoAtencionCamion, 5, 0);
			this->tableLayoutPanelCamionReparto->Location = System::Drawing::Point(11, 159);
			this->tableLayoutPanelCamionReparto->Name = L"tableLayoutPanelCamionReparto";
			this->tableLayoutPanelCamionReparto->RowCount = 2;
			this->tableLayoutPanelCamionReparto->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelCamionReparto->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelCamionReparto->Size = System::Drawing::Size(720, 100);
			this->tableLayoutPanelCamionReparto->TabIndex = 25;
			// 
			// labelNumCamion
			// 
			this->labelNumCamion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelNumCamion->AutoSize = true;
			this->labelNumCamion->Location = System::Drawing::Point(3, 18);
			this->labelNumCamion->Name = L"labelNumCamion";
			this->labelNumCamion->Size = System::Drawing::Size(130, 13);
			this->labelNumCamion->TabIndex = 0;
			this->labelNumCamion->Text = L"Número de Camión";
			this->labelNumCamion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCilindroRestante
			// 
			this->labelCilindroRestante->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCilindroRestante->AutoSize = true;
			this->labelCilindroRestante->Location = System::Drawing::Point(139, 18);
			this->labelCilindroRestante->Name = L"labelCilindroRestante";
			this->labelCilindroRestante->Size = System::Drawing::Size(119, 13);
			this->labelCilindroRestante->TabIndex = 1;
			this->labelCilindroRestante->Text = L"Cilindros Restantes";
			this->labelCilindroRestante->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSolicitudRestante
			// 
			this->labelSolicitudRestante->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelSolicitudRestante->AutoSize = true;
			this->labelSolicitudRestante->Location = System::Drawing::Point(264, 12);
			this->labelSolicitudRestante->Name = L"labelSolicitudRestante";
			this->labelSolicitudRestante->Size = System::Drawing::Size(94, 26);
			this->labelSolicitudRestante->TabIndex = 2;
			this->labelSolicitudRestante->Text = L"Solicitudes Restantes";
			this->labelSolicitudRestante->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSolicitudAtendida
			// 
			this->labelSolicitudAtendida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelSolicitudAtendida->AutoSize = true;
			this->labelSolicitudAtendida->Location = System::Drawing::Point(364, 18);
			this->labelSolicitudAtendida->Name = L"labelSolicitudAtendida";
			this->labelSolicitudAtendida->Size = System::Drawing::Size(123, 13);
			this->labelSolicitudAtendida->TabIndex = 3;
			this->labelSolicitudAtendida->Text = L"Solicitudes Atendidas";
			this->labelSolicitudAtendida->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTiempoEstimadoDisponibilidad
			// 
			this->labelTiempoEstimadoDisponibilidad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelTiempoEstimadoDisponibilidad->AutoSize = true;
			this->labelTiempoEstimadoDisponibilidad->Location = System::Drawing::Point(493, 12);
			this->labelTiempoEstimadoDisponibilidad->Name = L"labelTiempoEstimadoDisponibilidad";
			this->labelTiempoEstimadoDisponibilidad->Size = System::Drawing::Size(113, 26);
			this->labelTiempoEstimadoDisponibilidad->TabIndex = 4;
			this->labelTiempoEstimadoDisponibilidad->Text = L"Tiempo Estimado de Disponibilidad";
			this->labelTiempoEstimadoDisponibilidad->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTiempoAtencionCamion
			// 
			this->labelTiempoAtencionCamion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelTiempoAtencionCamion->AutoSize = true;
			this->labelTiempoAtencionCamion->Location = System::Drawing::Point(612, 18);
			this->labelTiempoAtencionCamion->Name = L"labelTiempoAtencionCamion";
			this->labelTiempoAtencionCamion->Size = System::Drawing::Size(105, 13);
			this->labelTiempoAtencionCamion->TabIndex = 5;
			this->labelTiempoAtencionCamion->Text = L"Tiempo de Atención";
			this->labelTiempoAtencionCamion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanelFiltroCamionReparto
			// 
			this->tableLayoutPanelFiltroCamionReparto->ColumnCount = 4;
			this->tableLayoutPanelFiltroCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.51253F)));
			this->tableLayoutPanelFiltroCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.48747F)));
			this->tableLayoutPanelFiltroCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				183)));
			this->tableLayoutPanelFiltroCamionReparto->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				180)));
			this->tableLayoutPanelFiltroCamionReparto->Controls->Add(this->labelFiltrarPor, 0, 0);
			this->tableLayoutPanelFiltroCamionReparto->Controls->Add(this->comboBoxTipoCamion, 1, 0);
			this->tableLayoutPanelFiltroCamionReparto->Controls->Add(this->comboBoxOrdenarPor, 3, 0);
			this->tableLayoutPanelFiltroCamionReparto->Controls->Add(this->labelOrdenarPor, 2, 0);
			this->tableLayoutPanelFiltroCamionReparto->Location = System::Drawing::Point(11, 96);
			this->tableLayoutPanelFiltroCamionReparto->Name = L"tableLayoutPanelFiltroCamionReparto";
			this->tableLayoutPanelFiltroCamionReparto->RowCount = 1;
			this->tableLayoutPanelFiltroCamionReparto->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelFiltroCamionReparto->Size = System::Drawing::Size(720, 35);
			this->tableLayoutPanelFiltroCamionReparto->TabIndex = 24;
			// 
			// labelFiltrarPor
			// 
			this->labelFiltrarPor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelFiltrarPor->AutoSize = true;
			this->labelFiltrarPor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFiltrarPor->Location = System::Drawing::Point(3, 7);
			this->labelFiltrarPor->Name = L"labelFiltrarPor";
			this->labelFiltrarPor->Size = System::Drawing::Size(85, 21);
			this->labelFiltrarPor->TabIndex = 19;
			this->labelFiltrarPor->Text = L"Filtrar por:";
			this->labelFiltrarPor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelFiltrarPor->Click += gcnew System::EventHandler(this, &PanelAdmin::label16_Click);
			// 
			// comboBoxTipoCamion
			// 
			this->comboBoxTipoCamion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxTipoCamion->FormattingEnabled = true;
			this->comboBoxTipoCamion->Location = System::Drawing::Point(94, 7);
			this->comboBoxTipoCamion->Name = L"comboBoxTipoCamion";
			this->comboBoxTipoCamion->Size = System::Drawing::Size(259, 21);
			this->comboBoxTipoCamion->TabIndex = 20;
			this->comboBoxTipoCamion->Text = L"Tipo de camión...";
			this->comboBoxTipoCamion->SelectedIndexChanged += gcnew System::EventHandler(this, &PanelAdmin::comboBox2_SelectedIndexChanged);
			// 
			// comboBoxOrdenarPor
			// 
			this->comboBoxOrdenarPor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxOrdenarPor->FormattingEnabled = true;
			this->comboBoxOrdenarPor->Location = System::Drawing::Point(542, 7);
			this->comboBoxOrdenarPor->Name = L"comboBoxOrdenarPor";
			this->comboBoxOrdenarPor->Size = System::Drawing::Size(175, 21);
			this->comboBoxOrdenarPor->TabIndex = 22;
			this->comboBoxOrdenarPor->Text = L"Seleccionar...";
			// 
			// labelOrdenarPor
			// 
			this->labelOrdenarPor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelOrdenarPor->AutoSize = true;
			this->labelOrdenarPor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelOrdenarPor->Location = System::Drawing::Point(359, 7);
			this->labelOrdenarPor->Name = L"labelOrdenarPor";
			this->labelOrdenarPor->Size = System::Drawing::Size(177, 21);
			this->labelOrdenarPor->TabIndex = 21;
			this->labelOrdenarPor->Text = L"Ordenar por:";
			this->labelOrdenarPor->Click += gcnew System::EventHandler(this, &PanelAdmin::labelOrdenarPor_Click);
			// 
			// tableLayoutPanelCamionRepartoHeader
			// 
			this->tableLayoutPanelCamionRepartoHeader->ColumnCount = 2;
			this->tableLayoutPanelCamionRepartoHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15.81395F)));
			this->tableLayoutPanelCamionRepartoHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				84.18604F)));
			this->tableLayoutPanelCamionRepartoHeader->Controls->Add(this->pictureBoxAdminCamiones, 0, 0);
			this->tableLayoutPanelCamionRepartoHeader->Controls->Add(this->labelCamionReparto, 1, 0);
			this->tableLayoutPanelCamionRepartoHeader->Location = System::Drawing::Point(8, 6);
			this->tableLayoutPanelCamionRepartoHeader->Name = L"tableLayoutPanelCamionRepartoHeader";
			this->tableLayoutPanelCamionRepartoHeader->RowCount = 1;
			this->tableLayoutPanelCamionRepartoHeader->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				48.21429F)));
			this->tableLayoutPanelCamionRepartoHeader->Size = System::Drawing::Size(429, 71);
			this->tableLayoutPanelCamionRepartoHeader->TabIndex = 23;
			// 
			// pictureBoxAdminCamiones
			// 
			this->pictureBoxAdminCamiones->Location = System::Drawing::Point(3, 3);
			this->pictureBoxAdminCamiones->Name = L"pictureBoxAdminCamiones";
			this->pictureBoxAdminCamiones->Size = System::Drawing::Size(61, 62);
			this->pictureBoxAdminCamiones->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdminCamiones->TabIndex = 0;
			this->pictureBoxAdminCamiones->TabStop = false;
			// 
			// labelCamionReparto
			// 
			this->labelCamionReparto->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelCamionReparto->AutoSize = true;
			this->labelCamionReparto->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCamionReparto->Location = System::Drawing::Point(70, 15);
			this->labelCamionReparto->Name = L"labelCamionReparto";
			this->labelCamionReparto->Size = System::Drawing::Size(356, 40);
			this->labelCamionReparto->TabIndex = 1;
			this->labelCamionReparto->Text = L"Camiones en reparto";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->pictureBox8);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Controls->Add(this->radioButton7);
			this->tabPage3->Controls->Add(this->radioButton6);
			this->tabPage3->Controls->Add(this->radioButton5);
			this->tabPage3->Controls->Add(this->radioButton4);
			this->tabPage3->Controls->Add(this->radioButton3);
			this->tabPage3->Controls->Add(this->radioButton2);
			this->tabPage3->Controls->Add(this->radioButton1);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->pictureBox7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->pictureBox6);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(739, 388);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ventas y Bodega";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &PanelAdmin::tabPage3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(495, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 45);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Solicitar Reposición";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(491, 142);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(142, 21);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Cilindros restantes:";
			this->label14->Click += gcnew System::EventHandler(this, &PanelAdmin::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(490, 114);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 25);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Bodega";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(469, 114);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(24, 25);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 19;
			this->pictureBox8->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(141, 177);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 21);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->Text = L"Escoja cerro...";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(349, 246);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(37, 17);
			this->radioButton7->TabIndex = 17;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"20";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(306, 246);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(37, 17);
			this->radioButton6->TabIndex = 16;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"15";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(263, 246);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(37, 17);
			this->radioButton5->TabIndex = 15;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"10";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(226, 246);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(31, 17);
			this->radioButton4->TabIndex = 14;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"5";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &PanelAdmin::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(308, 213);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(60, 17);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ambos";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &PanelAdmin::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(211, 213);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"No Catalítico";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &PanelAdmin::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(132, 213);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 17);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Catalítico";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &PanelAdmin::radioButton1_CheckedChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(193, 280);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 21);
			this->label12->TabIndex = 10;
			this->label12->Text = L"TOTAL:";
			this->label12->Click += gcnew System::EventHandler(this, &PanelAdmin::label12_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calcular Ventas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PanelAdmin::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(83, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 21);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Tamaño (en litros):";
			this->label11->Click += gcnew System::EventHandler(this, &PanelAdmin::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(83, 209);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 21);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Tipo:";
			this->label10->Click += gcnew System::EventHandler(this, &PanelAdmin::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(83, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 21);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Cerro:";
			this->label9->Click += gcnew System::EventHandler(this, &PanelAdmin::label9_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(71, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 21);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Clasificar por:";
			this->label8->Click += gcnew System::EventHandler(this, &PanelAdmin::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Ventas";
			this->label7->Click += gcnew System::EventHandler(this, &PanelAdmin::label7_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(49, 114);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(24, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &PanelAdmin::pictureBox7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(116, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(385, 32);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Información de ventas y bodega";
			this->label6->Click += gcnew System::EventHandler(this, &PanelAdmin::label6_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(45, 27);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(65, 66);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &PanelAdmin::backgroundWorker1_DoWork);
			// 
			// PanelAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 371);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PanelAdmin";
			this->Text = L"PanelAdmin";
			this->Load += gcnew System::EventHandler(this, &PanelAdmin::PanelAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminHome))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminFlechaHome1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanelCamionReparto->ResumeLayout(false);
			this->tableLayoutPanelCamionReparto->PerformLayout();
			this->tableLayoutPanelFiltroCamionReparto->ResumeLayout(false);
			this->tableLayoutPanelFiltroCamionReparto->PerformLayout();
			this->tableLayoutPanelCamionRepartoHeader->ResumeLayout(false);
			this->tableLayoutPanelCamionRepartoHeader->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminCamiones))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void PanelAdmin_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tableLayoutPanel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label9_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	}
private: System::Void labelOrdenarPor_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
