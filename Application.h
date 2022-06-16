#pragma once
#include "wx/wx.h"
#include "Screen.h"

class Application : public wxApp
{
	Screen* screen1 = nullptr;

public:
	virtual bool OnInit();

};

