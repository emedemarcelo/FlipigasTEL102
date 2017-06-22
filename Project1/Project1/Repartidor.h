#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Repartidor
	/// </summary>
	public ref class Repartidor : public System::Windows::Forms::Form
	{
	public:
		Repartidor(void)
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
		~Repartidor()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  fotoRepartidor;
	private: System::Windows::Forms::Label^  labelRepartidor;
	private: System::Windows::Forms::TableLayoutPanel^  infoRepartidor;
	private: System::Windows::Forms::TableLayoutPanel^  infoRepartos;
	private: System::Windows::Forms::Label^  camionAsignado;
	private: System::Windows::Forms::Label^  tiempoLlegada;
	private: System::Windows::Forms::Label^  tiempoEstimadoLlegada;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^  tipoCamion;

	private: System::Windows::Forms::Label^  repartidorOperativo;
	private: System::Windows::Forms::Label^  cerroOperacion;
	private: System::Windows::Forms::TableLayoutPanel^  panelBotones;
	private: System::Windows::Forms::Button^  botonActualizarSolicitud;
	private: System::Windows::Forms::Button^  botonFinalizarEntrega;
	private: System::Windows::Forms::TableLayoutPanel^  panelRepartos;


	private: System::Windows::Forms::Label^  nombreRepartidor;

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
			this->fotoRepartidor = (gcnew System::Windows::Forms::PictureBox());
			this->labelRepartidor = (gcnew System::Windows::Forms::Label());
			this->infoRepartidor = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->nombreRepartidor = (gcnew System::Windows::Forms::Label());
			this->infoRepartos = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->camionAsignado = (gcnew System::Windows::Forms::Label());
			this->tiempoLlegada = (gcnew System::Windows::Forms::Label());
			this->tiempoEstimadoLlegada = (gcnew System::Windows::Forms::Label());
			this->tipoCamion = (gcnew System::Windows::Forms::Label());
			this->repartidorOperativo = (gcnew System::Windows::Forms::Label());
			this->cerroOperacion = (gcnew System::Windows::Forms::Label());
			this->panelBotones = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->botonActualizarSolicitud = (gcnew System::Windows::Forms::Button());
			this->botonFinalizarEntrega = (gcnew System::Windows::Forms::Button());
			this->panelRepartos = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoRepartidor))->BeginInit();
			this->infoRepartidor->SuspendLayout();
			this->infoRepartos->SuspendLayout();
			this->panelBotones->SuspendLayout();
			this->SuspendLayout();
			// 
			// fotoRepartidor
			// 
			this->fotoRepartidor->Location = System::Drawing::Point(4, 4);
			this->fotoRepartidor->Margin = System::Windows::Forms::Padding(4);
			this->fotoRepartidor->Name = L"fotoRepartidor";
			this->fotoRepartidor->Size = System::Drawing::Size(61, 63);
			this->fotoRepartidor->TabIndex = 4;
			this->fotoRepartidor->TabStop = false;
			// 
			// labelRepartidor
			// 
			this->labelRepartidor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelRepartidor->AutoSize = true;
			this->labelRepartidor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRepartidor->Location = System::Drawing::Point(73, 0);
			this->labelRepartidor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRepartidor->Name = L"labelRepartidor";
			this->labelRepartidor->Size = System::Drawing::Size(188, 71);
			this->labelRepartidor->TabIndex = 5;
			this->labelRepartidor->Text = L"Repartidor";
			this->labelRepartidor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// infoRepartidor
			// 
			this->infoRepartidor->ColumnCount = 3;
			this->infoRepartidor->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				26.19926F)));
			this->infoRepartidor->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				73.80074F)));
			this->infoRepartidor->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				166)));
			this->infoRepartidor->Controls->Add(this->fotoRepartidor, 0, 0);
			this->infoRepartidor->Controls->Add(this->labelRepartidor, 1, 0);
			this->infoRepartidor->Controls->Add(this->nombreRepartidor, 2, 0);
			this->infoRepartidor->Location = System::Drawing::Point(16, 14);
			this->infoRepartidor->Margin = System::Windows::Forms::Padding(4);
			this->infoRepartidor->Name = L"infoRepartidor";
			this->infoRepartidor->RowCount = 1;
			this->infoRepartidor->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->infoRepartidor->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 71)));
			this->infoRepartidor->Size = System::Drawing::Size(432, 71);
			this->infoRepartidor->TabIndex = 6;
			// 
			// nombreRepartidor
			// 
			this->nombreRepartidor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nombreRepartidor->AutoSize = true;
			this->nombreRepartidor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreRepartidor->Location = System::Drawing::Point(268, 0);
			this->nombreRepartidor->Name = L"nombreRepartidor";
			this->nombreRepartidor->Size = System::Drawing::Size(161, 71);
			this->nombreRepartidor->TabIndex = 6;
			this->nombreRepartidor->Text = L"José Gallardo Parancán";
			this->nombreRepartidor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// infoRepartos
			// 
			this->infoRepartos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->infoRepartos->ColumnCount = 2;
			this->infoRepartos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->infoRepartos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->infoRepartos->Controls->Add(this->camionAsignado, 0, 0);
			this->infoRepartos->Controls->Add(this->tiempoLlegada, 0, 1);
			this->infoRepartos->Controls->Add(this->tiempoEstimadoLlegada, 1, 1);
			this->infoRepartos->Controls->Add(this->tipoCamion, 1, 0);
			this->infoRepartos->Controls->Add(this->repartidorOperativo, 0, 2);
			this->infoRepartos->Controls->Add(this->cerroOperacion, 1, 2);
			this->infoRepartos->Location = System::Drawing::Point(488, 14);
			this->infoRepartos->Margin = System::Windows::Forms::Padding(4);
			this->infoRepartos->Name = L"infoRepartos";
			this->infoRepartos->RowCount = 3;
			this->infoRepartos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->infoRepartos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->infoRepartos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->infoRepartos->Size = System::Drawing::Size(357, 92);
			this->infoRepartos->TabIndex = 7;
			// 
			// camionAsignado
			// 
			this->camionAsignado->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->camionAsignado->AutoSize = true;
			this->camionAsignado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->camionAsignado->Location = System::Drawing::Point(4, 0);
			this->camionAsignado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->camionAsignado->Name = L"camionAsignado";
			this->camionAsignado->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->camionAsignado->Size = System::Drawing::Size(170, 30);
			this->camionAsignado->TabIndex = 0;
			this->camionAsignado->Text = L"Camión Asignado";
			this->camionAsignado->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tiempoLlegada
			// 
			this->tiempoLlegada->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tiempoLlegada->AutoSize = true;
			this->tiempoLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiempoLlegada->Location = System::Drawing::Point(4, 30);
			this->tiempoLlegada->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->tiempoLlegada->Name = L"tiempoLlegada";
			this->tiempoLlegada->Size = System::Drawing::Size(170, 30);
			this->tiempoLlegada->TabIndex = 1;
			this->tiempoLlegada->Text = L"Tiempo de llegada a destino (minutos)";
			this->tiempoLlegada->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tiempoEstimadoLlegada
			// 
			this->tiempoEstimadoLlegada->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tiempoEstimadoLlegada->AutoSize = true;
			this->tiempoEstimadoLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tiempoEstimadoLlegada->Location = System::Drawing::Point(181, 30);
			this->tiempoEstimadoLlegada->Name = L"tiempoEstimadoLlegada";
			this->tiempoEstimadoLlegada->Size = System::Drawing::Size(173, 30);
			this->tiempoEstimadoLlegada->TabIndex = 3;
			this->tiempoEstimadoLlegada->Text = L"10";
			this->tiempoEstimadoLlegada->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tipoCamion
			// 
			this->tipoCamion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tipoCamion->AutoSize = true;
			this->tipoCamion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tipoCamion->Location = System::Drawing::Point(181, 0);
			this->tipoCamion->Name = L"tipoCamion";
			this->tipoCamion->Size = System::Drawing::Size(173, 30);
			this->tipoCamion->TabIndex = 4;
			this->tipoCamion->Text = L"A";
			this->tipoCamion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// repartidorOperativo
			// 
			this->repartidorOperativo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->repartidorOperativo->AutoSize = true;
			this->repartidorOperativo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->repartidorOperativo->Location = System::Drawing::Point(3, 60);
			this->repartidorOperativo->Name = L"repartidorOperativo";
			this->repartidorOperativo->Size = System::Drawing::Size(172, 32);
			this->repartidorOperativo->TabIndex = 5;
			this->repartidorOperativo->Text = L"Repartidor operativo en";
			this->repartidorOperativo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cerroOperacion
			// 
			this->cerroOperacion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cerroOperacion->AutoSize = true;
			this->cerroOperacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cerroOperacion->Location = System::Drawing::Point(181, 60);
			this->cerroOperacion->Name = L"cerroOperacion";
			this->cerroOperacion->Size = System::Drawing::Size(173, 32);
			this->cerroOperacion->TabIndex = 6;
			this->cerroOperacion->Text = L"Cerro Los Placeres";
			this->cerroOperacion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelBotones
			// 
			this->panelBotones->ColumnCount = 1;
			this->panelBotones->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelBotones->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->panelBotones->Controls->Add(this->botonActualizarSolicitud, 0, 0);
			this->panelBotones->Controls->Add(this->botonFinalizarEntrega, 0, 1);
			this->panelBotones->Location = System::Drawing::Point(523, 195);
			this->panelBotones->Name = L"panelBotones";
			this->panelBotones->RowCount = 2;
			this->panelBotones->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.78049F)));
			this->panelBotones->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.21951F)));
			this->panelBotones->Size = System::Drawing::Size(258, 148);
			this->panelBotones->TabIndex = 8;
			// 
			// botonActualizarSolicitud
			// 
			this->botonActualizarSolicitud->Location = System::Drawing::Point(3, 3);
			this->botonActualizarSolicitud->Name = L"botonActualizarSolicitud";
			this->botonActualizarSolicitud->Size = System::Drawing::Size(252, 66);
			this->botonActualizarSolicitud->TabIndex = 0;
			this->botonActualizarSolicitud->Text = L"Actualizar solicitudes en sector";
			this->botonActualizarSolicitud->UseVisualStyleBackColor = true;
			this->botonActualizarSolicitud->Click += gcnew System::EventHandler(this, &Repartidor::botonActualizarSolicitud_Click);
			// 
			// botonFinalizarEntrega
			// 
			this->botonFinalizarEntrega->Location = System::Drawing::Point(3, 75);
			this->botonFinalizarEntrega->Name = L"botonFinalizarEntrega";
			this->botonFinalizarEntrega->Size = System::Drawing::Size(252, 70);
			this->botonFinalizarEntrega->TabIndex = 1;
			this->botonFinalizarEntrega->Text = L"Finalizar entrega";
			this->botonFinalizarEntrega->UseVisualStyleBackColor = true;
			// 
			// panelRepartos
			// 
			this->panelRepartos->ColumnCount = 4;
			this->panelRepartos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				44.80874F)));
			this->panelRepartos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				55.19126F)));
			this->panelRepartos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				127)));
			this->panelRepartos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				98)));
			this->panelRepartos->Location = System::Drawing::Point(20, 164);
			this->panelRepartos->Name = L"panelRepartos";
			this->panelRepartos->RowCount = 3;
			this->panelRepartos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->panelRepartos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->panelRepartos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->panelRepartos->Size = System::Drawing::Size(402, 120);
			this->panelRepartos->TabIndex = 9;
			// 
			// Repartidor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 444);
			this->Controls->Add(this->panelRepartos);
			this->Controls->Add(this->panelBotones);
			this->Controls->Add(this->infoRepartos);
			this->Controls->Add(this->infoRepartidor);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Repartidor";
			this->Text = L"Flipigas - Interfaz Repartidor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoRepartidor))->EndInit();
			this->infoRepartidor->ResumeLayout(false);
			this->infoRepartidor->PerformLayout();
			this->infoRepartos->ResumeLayout(false);
			this->infoRepartos->PerformLayout();
			this->panelBotones->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonActualizarSolicitud_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
