#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    Calculator calc;
    cout << "9 + 8 is " << calc.Add(9, 8) << endl;
    cout << "9 - 8 is " << calc.Subtract(9, 8) << endl;
}