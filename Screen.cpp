#include "Screen.h"
#include "wx/event.h"


enum
{
	BUTTON_1 = 1,
	BUTTON_2 = 2,
	BUTTON_3 = 3,
	BUTTON_4 = 4,
	BUTTON_5 = 5,
	BUTTON_6 = 6,
	BUTTON_7 = 7,
	BUTTON_8 = 8,
	BUTTON_9 = 9,
	BUTTON_Equal = 10,
	BUTTON_ADD = 11,
	BUTTON_MINUS = 12,
	BUTTON_STAR = 13,
	BUTTON_DIVIDE = 14,
	BUTTON_MOD = 15,
	BUTTON_BINARY = 16,
	BUTTON_HEX = 17,
	BUTTON_DECI = 18,
	BUTTON_NEG = 19,
	BUTTON_TEXT = 20,
	BUTTON_ENTER = 21,
	BUTTON_NEG = 22,
};

wxBEGIN_EVENT_TABLE(Screen, wxFrame)
EVT_BUTTON(BUTTON_1, Screen::OnButton1)
EVT_BUTTON(BUTTON_2, Screen::OnButton2)
EVT_BUTTON(BUTTON_3, Screen::OnButton3)
EVT_BUTTON(BUTTON_4, Screen::OnButton4)
EVT_BUTTON(BUTTON_5, Screen::OnButton5)
EVT_BUTTON(BUTTON_6, Screen::OnButton6)
EVT_BUTTON(BUTTON_7, Screen::OnButton7)
EVT_BUTTON(BUTTON_8, Screen::OnButton8)
EVT_BUTTON(BUTTON_9, Screen::OnButton9)
EVT_BUTTON(BUTTON_DECI, Screen::OnDecm)
EVT_BUTTON(BUTTON_ADD, Screen::OnAdd)
EVT_BUTTON(BUTTON_MINUS, Screen::OnSub)
EVT_BUTTON(BUTTON_STAR, Screen::OnMul)
EVT_BUTTON(BUTTON_DIVIDE, Screen::OnDiv)
EVT_BUTTON(BUTTON_ENTER, Screen::OnEnter)
EVT_BUTTON(BUTTON_NEG, Screen::OnNeg)
EVT_BUTTON(BUTTON_MOD, Screen::OnMod)
EVT_BUTTON(BUTTON_BINARY, Screen::OnBinary)
EVT_BUTTON(BUTTON_HEX, Screen::OnHex)
wxEND_EVENT_TABLE() 

Screen::Screen() : wxFrame(nullptr, wxID_ANY, "Calculator Screen", wxPoint(400,200), wxSize(320,360))
{
	one = new wxButton(this, BUTTON_1, "1", wxPoint(10, 160), wxSize(70, 50));
	two = new wxButton(this, BUTTON_2, "2", wxPoint(80, 160), wxSize(70, 50));
	three = new wxButton(this, BUTTON_3, "3", wxPoint(150, 160), wxSize(70, 50));
	four = new wxButton(this, BUTTON_4, "4", wxPoint(220, 160), wxSize(70, 50));
	five = new wxButton(this, BUTTON_5, "5", wxPoint(10, 210), wxSize(70, 50));
	six = new wxButton(this, BUTTON_6, "6", wxPoint(80, 210), wxSize(70, 50));
	seven = new wxButton(this, BUTTON_7, "7", wxPoint(150, 210), wxSize(70, 50));
	eight = new wxButton(this, BUTTON_8, "8", wxPoint(220, 210), wxSize(70, 50));
	nine = new wxButton(this, BUTTON_9, "9", wxPoint(10, 260), wxSize(70, 50));
	equal = new wxButton(this, BUTTON_ENTER, "Enter", wxPoint(80, 260), wxSize(150, 50));
	plus = new wxButton(this, BUTTON_ADD, "+", wxPoint(10, 60), wxSize(70, 50));
	minus= new wxButton(this, BUTTON_MINUS, "-", wxPoint(80, 60), wxSize(70, 50));
	star = new wxButton(this, BUTTON_STAR, "*", wxPoint(150, 60), wxSize(70, 50));
	divide = new wxButton(this, BUTTON_DIVIDE, "/", wxPoint(220, 60), wxSize(70, 50));
	mod = new wxButton(this, BUTTON_MOD, "mod", wxPoint(10, 110), wxSize(70, 50));
	binary = new wxButton(this, BUTTON_BINARY, "bin", wxPoint(80, 110), wxSize(70, 50));
	hex = new wxButton(this, BUTTON_HEX, "hex", wxPoint(150, 110), wxSize(70, 50));
	decimal = new wxButton(this, BUTTON_DECI, "deci", wxPoint(220, 110), wxSize(70, 50));
	negative = new wxButton(this, BUTTON_NEG, "(-)", wxPoint(230, 260), wxSize(60, 50));
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
