#include "Gui.h"
using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ClippyGui::MyForm form;
	Application::Run(%form);
}