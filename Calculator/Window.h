#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
class Window : public wxFrame
{
private:
	
	wxTextCtrl* Numberbox = nullptr;
	wxDECLARE_EVENT_TABLE();
	void OnButton(wxCommandEvent& event);

public:
	Window();
};

