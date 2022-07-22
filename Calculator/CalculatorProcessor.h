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

	std::vector<int> nums;
	bool add = false;
	bool sub = false;
	bool prod = false;
	bool quot = false;
	bool mod = false;
	bool dEC = false;
	bool neg = false;
public:
	enum Choice
	{
	 aDd, sUb, pRod, qUot, mOd, biN, heX, deC, clear
	};
	bool bIN = false;
	bool hEX = false;
	std::vector<Choice> choices;
	bool equal = false;
	int num1 = 0;
	int dec = 0;
	int _dec = 0;
	int x = 0;
	int y = 0;
	int d = num1;
	int v = num3;
	std::string b = "";
	int diff = 0;
	int produ = 0;
	int quotient = 0;
	int num3 = 0;
	int binnn = 0;
	std::string hexx = "";
	int result = 0;
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
	void TestBIN(wxTextCtrl* numbox);
	void Hex(wxTextCtrl* numbox);
	void TestHex(wxTextCtrl* numbox);
	void Dec(wxTextCtrl* numbox);
	void TestDec(wxTextCtrl* numbox);
	int GetNum(wxTextCtrl* numbox);
	void Equals(wxTextCtrl* numbox);
	void TestEqual(wxTextCtrl* numbox);

	void Clear(wxTextCtrl* numbox);
};

