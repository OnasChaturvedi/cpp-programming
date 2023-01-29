//To make a half pyramid after 180 degree rotation.
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
		
		for(int counter2 = 1; counter2 <= n; counter2++)
		{
			if(counter2 <= n-counter1)
			cout << "  ";
			else
			cout << "* ";
		}	
		
	}	
	
	return 0;
}
