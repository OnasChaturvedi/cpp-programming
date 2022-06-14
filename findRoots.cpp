//Find all roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    float a,b,c,discriminant,r1,r2;
    
    cout << "Input the coefficients of the quadratic equation of form ax^2 + bx + c where a, b, and c are whole numbers\n";
    
    cout << "a = ";
    cin >> a;
    
    cout << "b = ";
    cin >> b;
    
    cout << "c = ";
    cin >> c;
    
    discriminant = pow(b, 2) - (4*a*c);
    
    r1 = pow(discriminant, 0.5) - b;
    r2 = -pow(discriminant, 0.5) - b;
    
    if (discriminant>0)
    {
        cout << "The roots are real and distinct\n";
    }
    else if (discriminant==0)
    {
        cout << "The roots are real and equal\n";
    }
    else
    {
        cout << "The roots are not real\n";
    }
    
    cout << r1/(2*a) << ", " << r2/(2*a);
    
    return 0;
}