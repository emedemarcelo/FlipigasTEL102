#include <iostream>
#include "MyForm.h"
#include "Repartidor.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project1;

[STAThreadAttribute]

void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
	//Project1::Repartidor repart;
	//Application::Run(%repart);
}