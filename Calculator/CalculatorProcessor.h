#pragma once
#include "wx/wx.h"
#include <list>
#include <sstream>
#include <vector>
#include <string>
#include <string.h>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* instance;
	CalculatorProcessor() {}
	int num1 = 0;
	int _dec = 0;
	int num3 = 0;
	int result = 0;
	std::vector<int> nums;
	bool add = false;
	bool sub = false;
	bool prod = false;
	bool quot = false;
	bool mod = false;
	bool bIN = false;
	bool hEX = false;
	bool dEC = false;
	bool neg = false;
	enum Choice
	{
	 aDd, sUb, pRod, qUot, mOd, biN, heX, deC, clear
	};
	std::vector<Choice> choices;
public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(CalculatorProcessor& other) = delete;
	static CalculatorProcessor* getInstance();
	void Add(wxTextCtrl* numbox);
	void Sub(wxTextCtrl* numbox);
	void Multiply(wxTextCtrl* numbox);
	void Divide(wxTextCtrl* numbox);
	void Negative(wxTextCtrl* numbox);
	void Mod(wxTextCtrl* numbox);
	void BIN(wxTextCtrl* numbox);
	void Hex(wxTextCtrl* numbox);
	void Dec(wxTextCtrl* numbox);
	int GetNum(wxTextCtrl* numbox);
	void Equals(wxTextCtrl* numbox);

	void Clear(wxTextCtrl* numbox);
};

