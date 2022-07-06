#pragma once
#include "wx/wx.h"
class Window : public wxFrame
{
private:
	wxButton* Add = nullptr;
	wxButton* Subtract = nullptr;
	wxButton* Multiply = nullptr;
	wxButton* Divide = nullptr;
	wxButton* Mod = nullptr;
	wxButton* Clear = nullptr;
	wxButton* Negative = nullptr;
	wxButton* Decimal = nullptr;
	wxButton* Hex = nullptr;
	wxButton* Bin = nullptr;
	wxButton* Equal = nullptr;
	wxButton* Num1 = nullptr;
	wxButton* Num2 = nullptr;
	wxButton* Num3 = nullptr;
	wxButton* Num4 = nullptr;
	wxButton* Num5 = nullptr;
	wxButton* Num6 = nullptr;
	wxButton* Num7 = nullptr;
	wxButton* Num8 = nullptr;
	wxButton* Num9 = nullptr;
	wxButton* Num0 = nullptr;
	wxTextCtrl* Numberbox = nullptr;

public:
	Window();
};

