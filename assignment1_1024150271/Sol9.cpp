// WAP to display arithmetic operations using switch-case statement
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char Operator;
    cout << "Enter first and second number respectively: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> Operator;
    switch (Operator)
    {
    case '+':
        cout << "Result = " << (a + b) << endl;
        break;
    case '-':
        cout << "Result = " << (a - b) << endl;
        break;
    case '*':
        cout << "Result = " << (a * b) << endl;
        break;
    case '/':
        if (b != 0)
            cout << "Result = " << a / b << endl;
        else
            cout << "Error" << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
