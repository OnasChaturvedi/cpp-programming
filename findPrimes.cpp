//To find all prime numbers between a and b.
#include <iostream>
using namespace std;

int main()
{
	
	int a,b;
	
	cout << "Input first number\n";
	cin >> a;
	
	cout << "Input last number\n";
	cin >> b;
		
	for (int counter1 = a; counter1 <= b; counter1++)
	{
		int counter2;
		for (counter2 = 2; counter2 < counter1; counter2++)
		{
			if (counter1%counter2 == 0)
			{
				break;
			}
		}
		if (counter2 == counter1)
		{
			cout << counter1 << endl;
		}
	}
		
	return 0;
}
