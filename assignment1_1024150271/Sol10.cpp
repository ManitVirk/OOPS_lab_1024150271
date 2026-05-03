// WAP to check whether the given number is even or odd (by using if-else and conditional operator)
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Using if-else: Number is Even" << endl;
    }
    else
    {
        cout << "Using if-else: Number is Odd" << endl;
    }
    cout << "Using conditional operator: "
         << ((num % 2 == 0) ? "Even" : "Odd") << endl;
    return 0;
}
