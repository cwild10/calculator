#pragma once
#include "wx/wx.h"

class Screen : public wxFrame
{
	wxDECLARE_EVENT_TABLE();

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

	void OnAdd(wxCommandEvent& event);
	void OnSub(wxCommandEvent& event);
	void OnDiv(wxCommandEvent& event);
	void OnMul(wxCommandEvent& event);
	void OnDecm(wxCommandEvent& event);
	void OnNeg(wxCommandEvent& event);
	void OnMod(wxCommandEvent& event);
	void OnBinary(wxCommandEvent& event);
	void OnHex(wxCommandEvent& event);
	void OnEnter(wxCommandEvent& event);
	void OnButton0(wxCommandEvent& event);
	void OnButton1(wxCommandEvent& event);
	void OnButton2(wxCommandEvent& event);
	void OnButton3(wxCommandEvent& event);
	void OnButton4(wxCommandEvent& event);
	void OnButton5(wxCommandEvent& event);
	void OnButton6(wxCommandEvent& event);
	void OnButton7(wxCommandEvent& event);
	void OnButton8(wxCommandEvent& event);
	void OnButton9(wxCommandEvent& event);
};

