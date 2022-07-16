#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::instance = 0;


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
       int sum = 0;
       int num3 = GetNum(numbox);
       for (int i = 0; i < nums.size(); i++)
       {
         sum = sum + nums[i];
       }
       sum = sum + (num1 + num3);
       std::string sum1 = (std::to_string(sum));
       numbox->SetValue(sum1);
       num1 = 0;
       nums.clear();
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
        int sum = 0;
        int num3 = GetNum(numbox);
        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum - nums[i];
        }
        sum = sum - (num1 - num3);
        std::string sum1 = (std::to_string(sum));
        numbox->SetValue(sum1);
        num1 = 0;
        num3 = 0;
        nums.clear();
     
    }
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
        switch (choices[i])
        {
        case CalculatorProcessor::aDd:
            Add(numbox);
            add = false;
            break;
        case CalculatorProcessor::sUb:
            Sub(numbox);
            sub = false;
            break;
        case CalculatorProcessor::pRod:
            break;
        case CalculatorProcessor::qUot:
            break;
        case CalculatorProcessor::mOd:
            break;
        case CalculatorProcessor::biN:
            break;
        case CalculatorProcessor::heX:
            break;
        case CalculatorProcessor::deC:
            break;
        default:
            break;
        }
    }
}
