//Print multiplication table of a number.
#include <iostream>
using namespace std;

int main()
{
	
	int a;
	int b;
	
	cout << "Input the number for multiplication table\n";
	cin >> a;
	
	for (int counter=1; counter<=10; counter++)
	{
		cout << a << " * " << counter << " = " << a*counter << endl;
	}
	
	return 0;
}
