//To make an inverted half pyramid pattern.
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Input the length of pyramid : ";
	
	cin >> n;
	
	for(int counter1 = n; counter1 >= 1; counter1--)
	{
		cout << endl;
		
		for(int counter2 = 1; counter2 <= counter1; counter2++)
		{
			cout << "* ";
		}	
		
	}	
	
	return 0;
}
