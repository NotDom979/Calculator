#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Prototype", wxPoint(200,200), wxSize(350, 425))
{
	Bin = new wxButton(this, wxID_ANY, "Binary", wxPoint(255, 0), wxSize(80, 50));
	Hex = new wxButton(this, wxID_ANY, "Hex", wxPoint(255, 50), wxSize(80, 50));
	Decimal = new wxButton(this, wxID_ANY, "Decimal", wxPoint(255, 100), wxSize(80, 50));
	Add = new wxButton(this, wxID_ANY, "+", wxPoint(255, 150), wxSize(80, 35));
	Subtract = new wxButton(this, wxID_ANY, "-", wxPoint(255, 185), wxSize(80, 35));
	Multiply = new wxButton(this, wxID_ANY, "*", wxPoint(255, 220), wxSize(80, 35));
	Divide = new wxButton(this, wxID_ANY, "/", wxPoint(255, 255), wxSize(80, 35));
	Negative = new wxButton(this, wxID_ANY, "(-)", wxPoint(255, 290), wxSize(80, 30));
	Num1 = new wxButton(this, wxID_ANY, "1", wxPoint(0, 100), wxSize(84, 75));
	Num2 = new wxButton(this, wxID_ANY, "2", wxPoint(84, 100), wxSize(84, 75));
	Num3 = new wxButton(this, wxID_ANY, "3", wxPoint(168, 100), wxSize(87, 75));
	Num4 = new wxButton(this, wxID_ANY, "4", wxPoint(0, 175), wxSize(84, 75));
	Num5 = new wxButton(this, wxID_ANY, "5", wxPoint(84, 175), wxSize(84, 75)); 
	Num6 = new wxButton(this, wxID_ANY, "4", wxPoint(168, 175), wxSize(87, 75));
	Num7 = new wxButton(this, wxID_ANY, "7", wxPoint(0, 250), wxSize(84, 75));
	Num8 = new wxButton(this, wxID_ANY, "8", wxPoint(84, 250), wxSize(84, 75));
	Num9 = new wxButton(this, wxID_ANY, "9", wxPoint(168, 250), wxSize(87, 75));
	Num0 = new wxButton(this, wxID_ANY, "0", wxPoint(0, 315), wxSize(84, 70));
	Clear = new wxButton(this, wxID_ANY, "Clear", wxPoint(255, 320), wxSize(84, 65));
	Equal = new wxButton(this, wxID_ANY, "=", wxPoint(84, 320), wxSize(84, 65));
	Mod = new wxButton(this, wxID_ANY, "Mod", wxPoint(168, 320), wxSize(87, 65));
	Numberbox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(255, 100));
	this->SetSize(350, 425);

	
}
