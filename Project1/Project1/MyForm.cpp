#include <iostream>
#include "MyForm.h"
#include "Repartidor.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project1;

[STAThreadAttribute]

void Main() {
	std::cout << "Consola de debug!" << std::endl;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}