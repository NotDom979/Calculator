#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::instance = nullptr;


CalculatorProcessor* CalculatorProcessor::getInstance()
{
	if (!instance)
	{
		instance = new CalculatorProcessor();
	}
	return instance;
}

void CalculatorProcessor::Add(wxTextCtrl* numbox)
{
	add = true;

	if (num1 == 0 && numbox->GetValue().Contains("+"))
	{
		choices.push_back(aDd);
		num1 = GetNum(numbox);
		numbox->Clear();
	}
	else if (num1 != 0 && (numbox->GetValue().Contains("+")))
	{
		choices.push_back(aDd);
		int num2 = GetNum(numbox);
		nums.push_back(num2);
		numbox->Clear();
	}
	else if (numbox->GetValue().Contains("=") || equal == true)
	{
		if (nums.size() != 0)
		{
			result = result + nums[0];
			nums.erase(nums.begin());
		}
		result = result + (num1 + num3);
		nums.shrink_to_fit();
		num1 = 0;
		num3 = 0;


	}
}
void CalculatorProcessor::Sub(wxTextCtrl* numbox)
{
	sub = true;
	if (num1 == 0 && numbox->GetValue().Contains("-"))
	{
		choices.push_back(sUb);
		num1 = GetNum(numbox);
		numbox->Clear();
	}
	else if (num1 != 0 && (numbox->GetValue().Contains("-")))
	{
		choices.push_back(sUb);
		int num2 = GetNum(numbox);
		nums.push_back(num2);
		numbox->Clear();
	}
	else if (numbox->GetValue().Contains("=") || equal == true)
	{
		int diff = num1 - num3;
		if (nums.size() != 0)
		{
			result = result - nums[0];
			nums.erase(nums.begin());
		}
		else if (num1 == 0)
		{
			result += diff;
		}
		else if (diff < 0)
		{
			result += diff;
		}
		else
			result -= diff;

		nums.shrink_to_fit();
		num1 = 0;
		num3 = 0;

	}
}
void CalculatorProcessor::Multiply(wxTextCtrl* numbox)
{
	prod = true;
	if (num1 == 0 && numbox->GetValue().Contains("*"))
	{
		choices.push_back(pRod);
		num1 = GetNum(numbox);
		numbox->Clear();
	}
	else if (num1 != 0 && (numbox->GetValue().Contains("*")))
	{
		choices.push_back(pRod);
		int num2 = GetNum(numbox);
		nums.push_back(num2);
		numbox->Clear();
	}
	else if (numbox->GetValue().Contains("=") || equal == true)
	{
		if (nums.size() != 0)
		{
			if (result == 0)
			{
				result = nums[0];
			}
			else
				result *= nums[0];

			nums.erase(nums.begin());
		}
		if (num1 != 0 && num3 != 0)
		{
			int produ = num1 * num3;
			if (result == 0)
			{
				result = produ;
			}
			else
				result *= produ;
		}
		else if (num1 == 0 && num3 != 0)
		{
			if (result == 0)
			{
				result = num3;
			}
			else
				result *= num3;
		}
		nums.shrink_to_fit();
	}
}
void CalculatorProcessor::Divide(wxTextCtrl* numbox)
{
	quot = true;
	if (num1 == 0 && numbox->GetValue().Contains("/"))
	{
		choices.push_back(qUot);
		num1 = GetNum(numbox);
		numbox->Clear();
	}
	else if (num1 != 0 && (numbox->GetValue().Contains("/")))
	{
		choices.push_back(qUot);
		int num2 = GetNum(numbox);
		nums.push_back(num2);
		numbox->Clear();
	}
	else if (numbox->GetValue().Contains("=") || equal == true)
	{

		if (nums.size() != 0)
		{
			if (result == 0)
			{
				result = nums[0];
			}
			else
				result /= nums[0];

			nums.erase(nums.begin());
		}
		if (num1 != 0 && num3 != 0)
		{
			if (result == 0)
			{
				result = num1 / num3;
			}
			else
				result = result / num1 / num3;
		}
		else if (num1 == 0 && num3 != 0)
		{
			if (result == 0)
			{
				result == num3;
			}
			else
				result /= num3;
		}
		nums.shrink_to_fit();
	}
}
void CalculatorProcessor::Negative(wxTextCtrl* numbox)
{
	if (numbox->GetValue() == "")
	{
		numbox->SetValue("Enter a value first, press Clear after reading this");
	}
	else
	{
		int nega = GetNum(numbox);
		neg = true;
		if (neg == true)
		{
			nega = 0 - nega;
			numbox->SetValue(std::to_string(nega));
		}
	}

}
void CalculatorProcessor::Mod(wxTextCtrl* numbox)
{
	mod = true;
	if (num1 == 0 && numbox->GetValue().Contains("%"))
	{
		choices.push_back(mOd);
		num1 = GetNum(numbox);
		numbox->Clear();
	}
	else if (num1 != 0 && (numbox->GetValue().Contains("%")))
	{
		choices.push_back(mOd);
		int num2 = GetNum(numbox);
		nums.push_back(num2);
		numbox->Clear();
	}
	else if (numbox->GetValue().Contains("=") || equal == true)
	{
		int num3 = GetNum(numbox);
		if (nums.size() != 0)
		{
			if (result == 0)
			{
				result = nums[0];
			}
			else
				result %= nums[0];

			nums.erase(nums.begin());
		}
		if (num1 != 0 && num3 != 0)
		{
			if (result == 0)
			{
				result = num1 % num3;
			}
			else
				result = result % num1 % num3;
		}
		else if (num1 == 0 && num3 != 0)
		{
			if (result == 0)
			{
				result = num3;
			}
			else
				result %= num3;
		}
		nums.shrink_to_fit();
	}
}
void CalculatorProcessor::BIN(wxTextCtrl* numbox)
{
	std::string bin = "";
	int num3 = GetNum(numbox);
	bIN = true;
	for (int i = 0; i < 16; i++)
	{
		if (num3 % 2 == 0)
		{
			bin = "0" + bin;
		}
		else
			bin = "1" + bin;

		num3 = num3 / 2;
	}
	numbox->SetValue(bin);
}
void CalculatorProcessor::Hex(wxTextCtrl* numbox)
{
	_dec = GetNum(numbox);
	hEX = true;
	std::ostringstream hex;
	hex << std::hex << GetNum(numbox);
	numbox->SetValue(hex.str());
}
void CalculatorProcessor::Dec(wxTextCtrl* numbox)
{
	int dec = 0;
	int i = 0;
	int rem;
	if (bIN == true)
	{
		int x = GetNum(numbox);
		while (x != 0) {
			rem = x % 10;
			x /= 10;
			dec += rem * pow(2, i);
			++i;
		}
		numbox->SetValue(std::to_string(dec));
		bIN = false;
	}
	else if (hEX == true)
	{
		numbox->SetValue(std::to_string(_dec));
		hEX = false;
	}

}
int CalculatorProcessor::GetNum(wxTextCtrl* numbox)
{
	int num1 = stoi(std::string(numbox->GetValue()));
	return num1;
}

void CalculatorProcessor::Equals(wxTextCtrl* numbox)
{
	 equal = true;

	for (int i = 0; i < choices.size(); i++)
	{
		auto it = std::find(choices.begin(), choices.end(), i);
		switch (choices[i])
		{
		case CalculatorProcessor::aDd:
			if (it == choices.end())
			{
				num3 = GetNum(numbox);
			}
			else if (choices.size() == 1)
			{
				num3 = GetNum(numbox);
			}
			Add(numbox);
			add = false;
			break;
		case CalculatorProcessor::sUb:
			if (choices[i] == choices.back())
			{
				num3 = GetNum(numbox);
			}
			else if (choices.size() == 1)
			{
				num3 = GetNum(numbox);
			}
			Sub(numbox);
			sub = false;
			break;
		case CalculatorProcessor::pRod:
			if (choices[i] == choices.back())
			{
				num3 = GetNum(numbox);
			}
			else if (choices.size() == 1)
			{
				num3 = GetNum(numbox);
			}
			Multiply(numbox);
			prod = false;
			break;
		case CalculatorProcessor::qUot:
			if (choices[i] == choices.back())
			{
				num3 = GetNum(numbox);
			}
			else if (choices.size() == 1)
			{
				num3 = GetNum(numbox);
			}
			Divide(numbox);
			quot = false;
			break;
		case CalculatorProcessor::mOd:
			if (choices[i] == choices.back())
			{
				num3 = GetNum(numbox);
			}
			else if (choices.size() == 1)
			{
				num3 = GetNum(numbox);
			}
			Mod(numbox);
			mod = false;
			break;
		case CalculatorProcessor::biN:
			BIN(numbox);
			bIN = false;
			break;
		case CalculatorProcessor::heX:
			Hex(numbox);
			hEX = false;
			break;
		case CalculatorProcessor::deC:
			Dec(numbox);
			dEC = false;
			break;
		case CalculatorProcessor::clear:
			Clear(numbox);
			i = choices.size();
			choices.clear();
			num1 = 0;
			result = 0;
			num3 = 0;
			break;
		default:
			break;
		}

	}
	numbox->SetValue(std::to_string(result));
	choices.clear();
	result = 0;
	num3 = 0;
	num1 = 0;
}

void CalculatorProcessor::Clear(wxTextCtrl* numbox)
{
	choices.push_back(clear);
	num3 = 0;
	num1 = 0;
	result = 0;
	nums.clear();
	numbox->Clear();
	choices.clear();
}
