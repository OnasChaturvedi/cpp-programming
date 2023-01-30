//To make an inverted triangle pattern with numbers.
#include <iostream>
using namespace std;

int main()
{
		
	int n;
	
	cout << "Input length of triangle : ";
	cin >> n;
	
	for(int counter1 = n; counter1 >= 1; counter1--)
	{
		
		for(int counter2 = 1; counter2 <= counter1; counter2++)
			cout << counter2 << " ";
		
		cout << endl;
		
	}
	
	return 0;
}
