//To check if a number is prime or not.
#include <iostream>
using namespace std;

int main()
{
	
	int n;
	
	cout << "Input a number\n";
	cin >> n;
	
	for (int counter = 2; counter < n; counter++)
	{
		if (n%counter == 0)
		{
			cout << "The number is non-prime\n";
			break;
		}
		if (counter == n-1)
		{
			cout << "The number is prime\n";
		}
		
	}
	
	return 0;
}
