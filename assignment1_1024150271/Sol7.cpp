// WAP to swap two numbers using bitwise operators
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Before swap; Num1 = " << a << ", Num2 = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap; Num1 = " << a << ", Num2 = " << b << endl;
    return 0;
}
