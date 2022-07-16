#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
class Window : public wxFrame
{
private:
	
	wxTextCtrl* Numberbox = nullptr;
	CalculatorProcessor* P = P->getInstance();
	wxDECLARE_EVENT_TABLE();
	void OnButton(wxCommandEvent& event);

public:
	Window();
};

