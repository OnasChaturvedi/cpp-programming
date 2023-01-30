//To make an 0-1 triangle pattern.
#include <iostream>
using namespace std;

int main()
{
		
	int n;
	
	cout << "Input length of triangle : ";
	cin >> n;
	
	for(int counter1 = 1; counter1 <= n; counter1++)
	{
		
		for(int counter2 = 1; counter2 <= counter1; counter2++)
		{
			if((counter2 + counter1)%2 == 0)
			cout << 1 << " ";
			else
			cout << 0 << " ";
		}
		
		cout << endl;
		
	}
	
	return 0;
}
