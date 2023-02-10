//To make a square with decreasing numbers from centre.
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Input a number : ";
	cin >> n;
	
	for(int counter1 = 1; counter1 <= 2*n-1; counter1++)
	{
		
		cout <<endl;
		
		for(int counter2 = 1; counter2 <= 2*n-1; counter2++)
		{
			if((counter1 <= n? n-counter1 : counter1-n) > (counter2 <= n? n-counter2 : counter2-n))
			{
				cout << (counter1 <= n? counter1 : 2*n-counter1) << " ";
			}
			else
			{
				cout << (counter2 <= n? counter2: 2*n-counter2) << " ";
			}
		}
		
	}
	
	return 0;
}
