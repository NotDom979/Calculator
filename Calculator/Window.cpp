#include "Window.h"

BEGIN_EVENT_TABLE(Window, wxFrame)
	EVT_BUTTON(10000, Window::OnButton)
	EVT_BUTTON(10001, Window::OnButton)
	EVT_BUTTON(10002, Window::OnButton)
	EVT_BUTTON(10003, Window::OnButton)
	EVT_BUTTON(10004, Window::OnButton)
	EVT_BUTTON(10005, Window::OnButton)
	EVT_BUTTON(10006, Window::OnButton)
	EVT_BUTTON(10007, Window::OnButton)
	EVT_BUTTON(10008, Window::OnButton)
	EVT_BUTTON(10009, Window::OnButton)
	EVT_BUTTON(10010, Window::OnButton)
	EVT_BUTTON(10011, Window::OnButton)
	EVT_BUTTON(10012, Window::OnButton)
	EVT_BUTTON(10013, Window::OnButton)
	EVT_BUTTON(10014, Window::OnButton)
	EVT_BUTTON(10015, Window::OnButton)
	EVT_BUTTON(10016, Window::OnButton)
	EVT_BUTTON(10017, Window::OnButton)
	EVT_BUTTON(9091, Window::OnButton)
	EVT_BUTTON(9092, Window::OnButton)
	EVT_BUTTON(9093, Window::OnButton)
END_EVENT_TABLE()
Window::Window() : wxFrame(nullptr, wxID_ANY, "Prototype", wxPoint(200,200), wxSize(350, 425), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE))
{

	Window::SetMaxSize(wxSize(350, 425));
	Bin = new wxButton(this, 9091, "Binary", wxPoint(255, 0), wxSize(80, 50));
	Hex = new wxButton(this, 9092, "Hex", wxPoint(255, 50), wxSize(80, 50));
	Decimal = new wxButton(this, 9093, "Decimal", wxPoint(255, 100), wxSize(80, 50));
	Add = new wxButton(this, 10000, "+", wxPoint(255, 150), wxSize(80, 35));
	Subtract = new wxButton(this, 10001, "-", wxPoint(255, 185), wxSize(80, 35));
	Multiply = new wxButton(this, 10002, "*", wxPoint(255, 220), wxSize(80, 35));
	Divide = new wxButton(this, 10003, "/", wxPoint(255, 255), wxSize(80, 35));
	Negative = new wxButton(this, 10004, "(-)", wxPoint(255, 290), wxSize(80, 30));
	Num1 = new wxButton(this, 10005, "1", wxPoint(0, 100), wxSize(84, 75));
	Num2 = new wxButton(this, 10006, "2", wxPoint(84, 100), wxSize(84, 75));
	Num3 = new wxButton(this, 10007, "3", wxPoint(168, 100), wxSize(87, 75));
	Num4 = new wxButton(this, 10008, "4", wxPoint(0, 175), wxSize(84, 75));
	Num5 = new wxButton(this, 10009, "5", wxPoint(84, 175), wxSize(84, 75));
	Num6 = new wxButton(this, 10010, "4", wxPoint(168, 175), wxSize(87, 75));
	Num7 = new wxButton(this, 10011, "7", wxPoint(0, 250), wxSize(84, 75));
	Num8 = new wxButton(this, 10012, "8", wxPoint(84, 250), wxSize(84, 75));
	Num9 = new wxButton(this, 10013, "9", wxPoint(168, 250), wxSize(87, 75));
	Num0 = new wxButton(this, 10014, "0", wxPoint(0, 315), wxSize(84, 70));
	Clear = new wxButton(this, 10015, "Clear", wxPoint(255, 320), wxSize(84, 65));
	Equal = new wxButton(this, 10016, "=", wxPoint(84, 320), wxSize(84, 65));
	Mod = new wxButton(this, 10017, "Mod", wxPoint(168, 320), wxSize(87, 65));
	Numberbox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(255, 100));
	this->SetSize(350, 425);
	Numberbox->Enable(false);
}

void Window::OnButton(wxCommandEvent& event)
{
	int ID = event.GetId();
	switch (ID)
	{
	case 10000:
		Numberbox->AppendText("+");
		break;
	case 10001:
		Numberbox->AppendText("-");
		break;
	case 10002:
		Numberbox->AppendText("*");
		break;
	case 10003:
		Numberbox->AppendText("/");
		break;
	case 10004:
		Numberbox->AppendText("-");
		break;
	case 10005:
		Numberbox->AppendText("1");
		break;
	case 10006:
		Numberbox->AppendText("2");
		break;
	case 10007:
		Numberbox->AppendText("3");
		break;
	case 10008:
		Numberbox->AppendText("4");
		break;
	case 10009:
		Numberbox->AppendText("5");
		break;
	case 10010:
		Numberbox->AppendText("6");
		break;
	case 10011:
		Numberbox->AppendText("7");
		break;
	case 10012:
		Numberbox->AppendText("8");
		break;
	case 10013:
		Numberbox->AppendText("9");
		break;
	case 10014:
		Numberbox->AppendText("0");
		break;
	case 10015:
		Numberbox->Clear();
		break;
	case 10016:
		Numberbox->AppendText("=");
		break;
	case 10017:
		Numberbox->AppendText("MOD");
		break;
	case 9091:
		Numberbox->AppendText("BIN");
		break;
	case 9092:
		Numberbox->AppendText("HEX");
		break;
	case 9093:
		Numberbox->AppendText("DEC");
		break;
	default:
		break;
	}
	event.Skip();
}
