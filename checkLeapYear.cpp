//To check if given year is a leap year.
#include<iostream>
using namespace std;

int main()
{
    
    int a;
    
    cout << "Input an year value : ";
    cin >> a;
    
    if (a % 100 == 0)
    {
        if (a % 400 == 0)
        {
            cout << "This is a leap year\n";
        }
        else
        {
            cout << "This is not leap year\n";
        }
    }
    else
    {
        if (a % 4 == 0)
        {
            cout << "This is a leap year\n";
        }
        else
        {
            cout << "This is not a leap year\n";
        }
    }
    
    return 0;
}