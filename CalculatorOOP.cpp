#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _Result = 0;
    float _LastNumber = 0;
    float _PreviousResult = 0;
    string _LastOperation = "Clear";

    bool is_Zero(float number)
    {
        return (number == 0);
    }

public:
    void Add(float number)
    {
        _LastNumber = number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += number;
    }

    void Subtract(float number)  
    {
        _LastNumber = number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= number;
    }

    void Multiply(float number)
    {
        _LastNumber = number;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= number;
    }

    void Divide(float number)
    {
        if (is_Zero(number))
        {
            cout << "Error: Division by zero!" << endl;
            return;  
        }
        _LastNumber = number;
        _PreviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= number;
    }

    float GetFinalResults()
    {
        return _Result;
    }

    void Clear()
    {
        _Result = 0;
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
    }

    void PrintResults()  
    {
        cout << "Result ";
        cout << "After " << _LastOperation << " " <<
            _LastNumber << " is: " << _Result << "\n";
    }
};

int main()
{
    clsCalculator Calculator1;
    Calculator1.Clear();
    Calculator1.Add(100);
    Calculator1.Add(200);
    Calculator1.PrintResults();
    Calculator1.Subtract(60);
    Calculator1.PrintResults();
    Calculator1.Divide(3);
    Calculator1.PrintResults();
    Calculator1.Divide(0);  
    Calculator1.PrintResults();
    Calculator1.Multiply(2);
    Calculator1.PrintResults();
    Calculator1.Clear();
    Calculator1.PrintResults();

    system("pause>0");
    return 0;
}

