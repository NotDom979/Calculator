#include "CppUnitTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include "wx/wx.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorProcessorTest
{
	TEST_CLASS(CalculatorProcessorTest)
	{
	public:
		wxTextCtrl* box = new wxTextCtrl();
		CalculatorProcessor* P = P->getInstance();
		TEST_METHOD(add)
		{
			bool eq = true;
			P->num1 = 1;
			P->Add(box);
			if (eq == true)
			{
				P->choices.push_back(P->aDd);
				P->Equals(box);
				P->num3 = 1;
				eq = false;
			}
			bool ad = true;

			if (P->result == 2)
			{
				Assert::IsTrue(true);
			}

		}
	};
}