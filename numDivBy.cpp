//To find all numbers not divisible by n.
#include <iostream>
using namespace std;

int main()
{
	
	int n;
	
	cout << "Input a number\n";
	cin >> n;
	
	for (int firstNum = 1; firstNum <= 100; firstNum++)
	{
		if (firstNum%n == 0)
		{
			continue;
		}
		
		cout << firstNum << " ";
	}
	
	return 0;
}
