//To make a Floyd's triangle pattern.
#include <iostream>
using namespace std;

int main()
{
	int l;
	int num = 1;
	
	cout << "Input the length of triangle : ";
	
	cin >> l;
	
	for(int counter1 = 1; counter1 <= l; counter1++)
	{
		cout << endl;
		
		for(int counter2 = 1; counter2 <= counter1; counter2++)
		{
			cout << num << " ";
			num++;
		}	
		
	}	
	
	return 0;
}
