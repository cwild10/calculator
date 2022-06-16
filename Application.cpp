#include "Application.h"

wxIMPLEMENT_APP(Application);

bool Application::OnInit()
{
	screen1 = new Screen();
	screen1->Show();
	return true;
}
