#include "Screen.h"

Screen::Screen() : wxFrame(nullptr, wxID_ANY, "Calculator Screen", wxPoint(400,200), wxSize(320,360))
{
	one = new wxButton(this, wxID_ANY, "1", wxPoint(10, 160), wxSize(70, 50));
	two = new wxButton(this, wxID_ANY, "2", wxPoint(80, 160), wxSize(70, 50));
	three = new wxButton(this, wxID_ANY, "3", wxPoint(150, 160), wxSize(70, 50));
	four = new wxButton(this, wxID_ANY, "4", wxPoint(220, 160), wxSize(70, 50));
	five = new wxButton(this, wxID_ANY, "5", wxPoint(10, 210), wxSize(70, 50));
	six = new wxButton(this, wxID_ANY, "6", wxPoint(80, 210), wxSize(70, 50));
	seven = new wxButton(this, wxID_ANY, "7", wxPoint(150, 210), wxSize(70, 50));
	eight = new wxButton(this, wxID_ANY, "8", wxPoint(220, 210), wxSize(70, 50));
	nine = new wxButton(this, wxID_ANY, "9", wxPoint(10, 260), wxSize(70, 50));
	equal = new wxButton(this, wxID_ANY, "Enter", wxPoint(80, 260), wxSize(150, 50));
	plus = new wxButton(this, wxID_ANY, "+", wxPoint(10, 60), wxSize(70, 50));
	minus= new wxButton(this, wxID_ANY, "-", wxPoint(80, 60), wxSize(70, 50));
	star = new wxButton(this, wxID_ANY, "*", wxPoint(150, 60), wxSize(70, 50));
	divide = new wxButton(this, wxID_ANY, "/", wxPoint(220, 60), wxSize(70, 50));
	mod = new wxButton(this, wxID_ANY, "mod", wxPoint(10, 110), wxSize(70, 50));
	binary = new wxButton(this, wxID_ANY, "bin", wxPoint(80, 110), wxSize(70, 50));
	hex = new wxButton(this, wxID_ANY, "hex", wxPoint(150, 110), wxSize(70, 50));
	decimal = new wxButton(this, wxID_ANY, "deci", wxPoint(220, 110), wxSize(70, 50));
	negative = new wxButton(this, wxID_ANY, "(-)", wxPoint(230, 260), wxSize(60, 50));
	text = new wxButton(this, wxID_ANY, "", wxPoint(10, 10), wxSize(280, 50));
}

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
