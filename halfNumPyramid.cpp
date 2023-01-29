//To make a half pyramid with numbers based on row.
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Input the length of pyramid : ";
	
	cin >> n;
	
	for(int counter1 = 1; counter1 <= n; counter1++)
	{
		cout << endl;
		
		for(int counter2 = 1; counter2 <= counter1; counter2++)
		{
			cout << counter1 << " ";
		}	
		
	}	
	
	return 0;
}
