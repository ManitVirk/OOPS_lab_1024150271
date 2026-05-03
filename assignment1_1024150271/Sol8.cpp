/*
WAP to solve the following problem
A library charges a fine for every book return late. For first 5 days the fine is 50 paise, for
6-10 days fine si one rupee and above 10 days fine is 5 rupees. If you return teh book after 30
days your membership will be cancelled. WAP to accept no. of days the member is late to return
the book and display the fine or appropriate message.
*/
#include <iostream>
using namespace std;
int main()
{
    int days;
    cout << "Enter number of days late: ";
    cin >> days;
    if (days <= 0)
    {
        cout << "No fine. Book returned on time." << endl;
    }
    else if (days <= 5)
    {
        cout << "Fine = 0.50 rupees" << endl;
    }
    else if (days <= 10)
    {
        cout << "Fine = 1 rupee" << endl;
    }
    else if (days <= 30)
    {
        cout << "Fine = 5 rupees" << endl;
    }
    else
    {
        cout << "Membership cancelled!" << endl;
    }
    return 0;
}
