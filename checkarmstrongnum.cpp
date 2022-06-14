//Check if a number is armstrong number.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,temp,rem,a = 0;
    
    cout << "Input a number : ";
    cin >> num;
    
    temp = num;
    
    while (temp > 0)
    {
        rem = temp % 10;
        
        temp =  temp / 10;
        
        a = pow(rem, 3) + a;
    }
    
    if (a == num)
    {
        cout << "This is an armstrong number\n";
    }
    else
    {
        cout << "This is not an armstrong number\n";
    }
    
    return 0;
}