#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace gol; //��� �������
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}