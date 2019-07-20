#include "Cverter.h"
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array < String^ > ^ args) {
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::Cverter form;
	Application::Run(%form);
	FreeConsole();
		return 0;
}

