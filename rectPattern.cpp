//To make a rectangular pattern.
#include <iostream>
using namespace std;

int main()
{
	int row,column;
	
	cout << "Enter no. of rows : ";
	
	cin >> row;
	
	cout << "Enter no. of columns : ";
	
	cin >> column;
	
	for(int counter1=1; counter1 <= row; counter1++)
	{
		cout << endl;
		
		for(int counter2=1; counter2 <= column; counter2++)
		{
			cout << "* ";
		}
		
	}
	
	return 0;
}
