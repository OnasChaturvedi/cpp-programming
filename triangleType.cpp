#include <iostream>
using namespace std;

int main()
{
	
	int a,b,c;
	
	cout << "Input the measures of the sides of the triangle\n";
	cin >>a>>b>>c;
	
	if (a==b && b==c)
	{
		cout << "Equilateral\n";
	}
	else if (a==b || b==c || a==c)
	{
		cout << "Isosceles\n";
	}
	else
	{
		cout << "Scalene\n";
	}

	return 0;
}
