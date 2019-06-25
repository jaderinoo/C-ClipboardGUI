#include "Gui.h"
#include "Main.h"
using namespace System;
using namespace System::Windows::Forms;

[System::STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ClippyGui::MyForm form;
	Application::Run(%form);
}

