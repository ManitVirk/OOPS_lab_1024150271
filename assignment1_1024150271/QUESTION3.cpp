#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Sum:" << a + b << endl;
    cout << "Difference:" << a - b << endl;
    cout << "Product:" << a * b << endl;
    if (b != 0)
    {
        cout << "Divide:" << a / b << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }
    return 0;
}
