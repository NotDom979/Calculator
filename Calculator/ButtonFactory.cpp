#include "ButtonFactory.h"
#include <string>
ButtonFactory::ButtonFactory()
{
}
void ButtonFactory::CreateButton(wxWindow *window, int x, std::string s, int a, int b, int c, int d)
{
	wxButton* Nums = new wxButton(window, x , s, wxPoint((-84 + a), b), wxSize(c, d));
}

void ButtonFactory::OthersButton(wxWindow* window)
{
	wxButton*  Bin = new wxButton(window, 9091, "Binary", wxPoint(255, 0), wxSize(80, 50));
	wxButton*  Hex = new wxButton(window, 9092, "Hex", wxPoint(255, 50), wxSize(80, 50));
	wxButton*  Decimal = new wxButton(window, 9093, "Decimal", wxPoint(255, 100), wxSize(80, 50));
	wxButton*  Add = new wxButton(window, 10000, "+", wxPoint(255, 150), wxSize(80, 35));
	wxButton*  Subtract = new wxButton(window, 10001, "-", wxPoint(255, 185), wxSize(80, 35));
	wxButton*  Multiply = new wxButton(window, 10002, "*", wxPoint(255, 220), wxSize(80, 35));
	wxButton*  Divide = new wxButton(window, 10003, "/", wxPoint(255, 255), wxSize(80, 35));
	wxButton*  Negative = new wxButton(window, 10004, "(-)", wxPoint(255, 290), wxSize(80, 30));
	wxButton*  Clear = new wxButton(window, 10015, "Clear", wxPoint(255, 320), wxSize(84, 65));
	wxButton*  Equal = new wxButton(window, 10016, "=", wxPoint(84, 320), wxSize(84, 65));
	wxButton*  Mod = new wxButton(window, 10017, "Mod", wxPoint(168, 320), wxSize(87, 65));
}
