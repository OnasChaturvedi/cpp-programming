//To make a hollow rhombus pattern.
#include <iostream>
using namespace std;

int main()
{
		
	int n;
	
	cout << "Input length of rhombus : ";
	cin >> n;
	
	for(int counter1 = 1; counter1 <= n; counter1++)
	{
		for(int counter2 = 1; counter2 <= n-counter1; counter2++)
		{
			cout << " ";
		}
		
		for(int counter2 = 1; counter2 <= n; counter2++)
		{
			if((counter1 > 1 && counter1 < n) && (counter2 > 1 && counter2 < n))
			cout << " ";
			else
			cout << "*";
		}
		
		cout << endl;
		
	}
	
	return 0;
}
