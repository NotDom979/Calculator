#pragma once
#include "wx/wx.h"
#include <string>
#include "Window.h"
class ButtonFactory
{
public:
	ButtonFactory();
	void CreateButton(wxWindow *window, int x, std::string s, int a, int b, int c, int d);
	void OthersButton(wxWindow* window);
};

