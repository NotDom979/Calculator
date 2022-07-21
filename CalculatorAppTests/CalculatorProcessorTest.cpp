#include "CppUnitTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include "wx/wx.h"
#include <sstream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorProcessorTest
{
	TEST_CLASS(CalculatorProcessorTest)
	{
	public:
		wxTextCtrl* box = new wxTextCtrl();
		CalculatorProcessor* P = P->getInstance();
		int test = 0;
		int htest = 0;
		TEST_METHOD(add)
		{
			P->num1 = 1;
			P->num3 = 1;
			P->equal = true;
			P->Add(box);
			Assert::AreEqual(2, P->result);
		}
		TEST_METHOD(sub)
		{
			P->num1 = 9;
			P->num3 = 7;
			P->equal = true;
			P->Sub(box);
			Assert::AreEqual(2, P->diff);
		}
		TEST_METHOD(mult)
		{
			P->num1 = 1;
			P->num3 = 2;
			P->equal = true;
			P->Multiply(box);
			Assert::AreEqual(2, P->produ);
		}
		TEST_METHOD(div)
		{
			P->d = 3;
			P->v = 1;
			P->num1 = 3;
			P->num3 = 1;
			P->equal = true;
			P->Divide(box);
			Assert::AreEqual(3, P->quotient);
		}
		TEST_METHOD(mod)
		{
			P->num1 = 6;
			P->num3 = 4;
			P->equal = true;
			P->Mod(box);
			Assert::AreEqual(2, P->result);
		}
		TEST_METHOD(bin)
		{
			P->num3 = 2164;
			int j = 2164;
			P->TestBIN(box);
			std::string bi = "";
			for (int i = 0; i < 16; i++)
			{
				if (j % 2 == 0)
				{
					bi = "0" + bi;
				}
				else
					bi = "1" + bi;

				j = j / 2;
			}
			Assert::AreEqual(P->b, bi);
		}
		TEST_METHOD(hex)
		{
			P->y = 2164;
			P->TestHex(box);
			std::ostringstream hex;
			hex << std::hex << P->y;
			std::string hest = hex.str();
			htest = stoi(hex.str());
			Assert::AreEqual(hest, P->hexx);
		}
		TEST_METHOD(bintodec)
		{
			int j = 214;
			std::string bi = "";
			for (int i = 0; i < 16; i++)
			{
				if (j % 2 == 0)
				{
					bi = "0" + bi;
				}
				else
					bi = "1" + bi;

				j = j / 2;
			}
			P->x = std::stoi(bi);
			P->bIN = true;
			P->TestDec(box);
			Assert::AreEqual(214, P->dec);
		}
		TEST_METHOD(hextodec)
		{
			P->x = 214;
			P->TestHex(box);
			P->hEX = true;
			P->TestDec(box);
			Assert::AreEqual(214, P->_dec);
		}
	};
}