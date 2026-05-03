#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 5;
    cout << "Initial x = " << x << endl;
    x += y;
    cout << "After x += y, x = " << x << endl;
    x -= y;
    cout << "After x -= y, x = " << x << endl;
    return 0;
}
