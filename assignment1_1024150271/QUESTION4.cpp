#include <iostream>
using namespace std;
int main()
{
    float celsius, fahrenheit;
    cout << "Enter temperature in Celsius: " << endl;
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;
    return 0;
}
