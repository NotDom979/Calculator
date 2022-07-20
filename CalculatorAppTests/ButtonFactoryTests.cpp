#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "wx/wx.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtonFactoryTests
{

	TEST_CLASS(ButtonFactoryTests)
	{
	public:
		wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Prototype", wxPoint(200, 200), wxSize(350, 425), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE));
		ButtonFactory testfact;
		TEST_METHOD(Button1)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10004 + i, std::to_string(i), (0 + i) * 84, 100, 84, 75);
				if (num1->GetId() == 10005)
				{
					Assert::AreEqual(10005, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button2)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10004 + (i + 2), std::to_string(i), (0 + i) * 84, 100, 84, 75);
				if (num1->GetId() == 10006)
				{
					Assert::AreEqual(10006, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button3)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10004 + (i + 3), std::to_string(i), (0 + i) * 84, 100, 84, 75);
				if (num1->GetId() == 10007)
				{
					Assert::AreEqual(10007, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button4)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10007 + i, std::to_string(i + 3), (0 + i) * 84, 175, 84, 75);
				if (num1->GetId() == 10008)
				{
					Assert::AreEqual(10008, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button5)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10007 + (i + 2), std::to_string(i + 3), (0 + i) * 84, 175, 84, 75);
				if (num1->GetId() == 10009)
				{
					Assert::AreEqual(10009, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button6)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10007 + (i + 3), std::to_string(i + 3), (0 + i) * 84, 175, 84, 75);
				if (num1->GetId() == 10010)
				{
					Assert::AreEqual(10010, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button7)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10010 + i, std::to_string(i + 6), (0 + i) * 84, 250, 84, 75);
				if (num1->GetId() == 10011)
				{
					Assert::AreEqual(10011, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button8)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10010 + (i + 2), std::to_string(i + 6), (0 + i) * 84, 250, 84, 75);
				if (num1->GetId() == 10012)
				{
					Assert::AreEqual(10012, num1->GetId());
				}
			}
		}
		TEST_METHOD(Button9)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 10010 + (i + 3), std::to_string(i + 6), (0 + i) * 84, 250, 84, 75);
				if (num1->GetId() == 10013)
				{
					Assert::AreEqual(10013, num1->GetId());
				}
			}
		}
		TEST_METHOD(Add)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame, 9999 + i, "+", 255, 150, 80, 35);
				if (num1->GetId() == 10000)
				{
					Assert::AreEqual(10000, num1->GetId());
				}
			}
		}
		TEST_METHOD(Sub)
		{
			for (int i = 0; i < 2; i++)
			{
				wxButton* num1 = testfact.CreateButtonTest(frame,10000 + i, "-", 255, 185, 80, 35);
				if (num1->GetId() == 10001)
				{
					Assert::AreEqual(10001, num1->GetId());
				}
			}
		}
	};
}