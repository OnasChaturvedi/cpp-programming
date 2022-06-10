//Perform various arithmetic functions.
#include <iostream>
using namespace std;

int main()
{
	
	float num1,num2;
	char arfunction;
	
	cout << "Input a number : ";
	cin >> num1;
	
	cout << "Input another number : ";
	cin >> num2;
	
	cout << "Press + to add, - to substract, * to mutiply and / to divide\n";
	cin >> arfunction;
	
	switch (arfunction)
	{
		case '+': 
			cout << num1 + num2;
			break;
			
		case '-':
			cout << num1 - num2;
			break;
			
		case '*':
			cout << num1 * num2;
			break;
		
		case '/':
			cout << num1 / num2;
			break;
		
		default :
			cout << "Invalid operator\n";
			break;
	}
	
	return 0;
}
