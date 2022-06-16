#pragma once
#include "wx/wx.h"

class Screen : public wxFrame
{
private:
	wxButton* one;
	wxButton* two;
	wxButton* three;
	wxButton* four;
	wxButton* five;
	wxButton* six;
	wxButton* seven;
	wxButton* eight;
	wxButton* nine;
	wxButton* plus;
	wxButton* minus;
	wxButton* star;
	wxButton* divide;
	wxButton* equal;
	wxButton* mod;
	wxButton* binary;
	wxButton* hex;
	wxButton* decimal;
	wxButton* negative;
	wxButton* text;

public:
	Screen();
};

