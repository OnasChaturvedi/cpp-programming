//To find factorial of a number.
#include <iostream>
using namespace std;

int main()
{

	int num1;
	int factorial = 1;

	cout << "Input the number" << endl;
	cin >> num1;
	
	while (num1 > 0)
	{
		factorial = factorial * num1;
		num1--;
	}
		cout << factorial;
	
	return 0;	
}
