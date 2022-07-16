#pragma once
#include "wx/wx.h"
#include <list>
#include <vector>
#include <string>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* instance;
	CalculatorProcessor() {}
	int num1 = 0;
	std::vector<int> nums;
	bool add = false;
	bool sub = false;
	bool prod = false;
	bool quot = false;
	bool mod = false;
	bool bIN = false;
	bool hEX = false;
	bool dEC = false;
	enum Choice
	{
	 aDd, sUb, pRod, qUot, mOd, biN, heX, deC
	};
	std::vector<Choice> choices;
public:
	static CalculatorProcessor* getInstance();
	void Add(wxTextCtrl* numbox);
	void Sub(wxTextCtrl* numbox);
	void Multiply(wxTextCtrl* numbox);
	void Divide(wxTextCtrl* numbox);
	void Mod(wxTextCtrl* numbox);
	void BIN(wxTextCtrl* numbox);
	void Hex(wxTextCtrl* numbox);
	void Dec(wxTextCtrl* numbox);
	int GetNum(wxTextCtrl* numbox);
	void Equals(wxTextCtrl* numbox);
};

