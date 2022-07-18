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
    else if(numbox->GetValue().Contains("="))
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
    else if (numbox->GetValue().Contains("="))
    {
        if (nums.size() != 0)
        {
            result = result - nums[0];
            nums.erase(nums.begin());
        }
        result = result - num1 - num3;
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
    else if (numbox->GetValue().Contains("="))
    {
        if (nums.size() != 0)
        {
            result *= nums[0];
            nums.erase(nums.begin());
        }
        if (num1 != 0 && num3 != 0)
        {
            result = result * num1 * num3;
        }
        else if (num1 == 0 && num3 != 0)
        {
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
    else if (numbox->GetValue().Contains("="))
    {
        
        if (nums.size() != 0)
        {
            result /= nums[0];
            nums.erase(nums.begin());
        }
        if (num1 != 0)
        {
           result = result / num1 / num3;
        }
        if (num1 != 0 && num3 != 0)
        {
            result = result / num1 / num3;
        }
        else if (num1 == 0 && num3 != 0)
        {
            result /= num3;
        }
        nums.shrink_to_fit();
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
    else if (numbox->GetValue().Contains("="))
    {
        int num3 = GetNum(numbox);
        if (nums.size() != 0)
        {
            result %= nums[0];
            nums.erase(nums.begin());
        }
        if (num1 != 0 && num3 != 0)
        {
            result = result % num1 % num3;
        }
        else if (num1 == 0 && num3 != 0)
        {
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
}
void CalculatorProcessor::Hex(wxTextCtrl* numbox)
{
    int heX = GetNum(numbox);
    std::string hex = "";
    while (heX > 0)
    {
        int remainder = heX % 16;
        if (remainder < 10)
        {
            hex = std::to_string(remainder) + hex;
        }
        else if (remainder == 10)
        {
            hex = "A" + remainder;
        }
        else if (remainder == 11)
        {
            hex = "B" + remainder;
        }
        else if (remainder == 12)
        {
            hex = "C" + remainder;
        }
        else if (remainder == 13)
        {
            hex = "D" + remainder;
        }
        else if (remainder == 14)
        {
            hex = "E" + remainder;
        }
        else if (remainder == 15)
        {
            hex = "F" + remainder;
        }
        heX = heX / 16;
    }
}
void CalculatorProcessor::Dec(wxTextCtrl* numbox)
{
}
int CalculatorProcessor::GetNum(wxTextCtrl* numbox)
{
    int num1 = stoi(std::string(numbox->GetValue()));
    return num1;
}

void CalculatorProcessor::Equals(wxTextCtrl* numbox)
{

    for (int i = 0; i < choices.size(); i++)
    {
        auto it = std::find(choices.begin(), choices.end(),i);
        switch (choices[i])
        {
        case CalculatorProcessor::aDd:
            if (it == choices.end())
            {
                num3 = GetNum(numbox);
            }
            Add(numbox);
            add = false;
            break;
        case CalculatorProcessor::sUb:
            if (it == choices.end())
            {
                num3 = GetNum(numbox);
            }
            Sub(numbox);
            sub = false;
            break;
        case CalculatorProcessor::pRod:
            if (it == choices.end())
            {
                num3 = GetNum(numbox);
            }
            Multiply(numbox);
            prod = false;
            break;
        case CalculatorProcessor::qUot:
            if (it == choices.end())
            {
                num3 = GetNum(numbox);
            }
            Divide(numbox);
            quot = false;
            break;
        case CalculatorProcessor::mOd:
            if (it == choices.end())
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
            num3 = 0;
            break;
        default:
            break;
        }
       
    }
    numbox->SetValue(std::to_string(result));
    result = 0;
    num1 = 3;
    num1 = 0;
}

void CalculatorProcessor::Clear(wxTextCtrl* numbox)
{
    choices.push_back(clear);
    numbox->Clear();
    result = 0;
    nums.clear();
}
