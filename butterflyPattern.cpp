//To make a butterfly pattern.
#include <iostream>
using namespace std;

int main()
{
	int l;
	
	cout << "Input the length of triangle : ";
	cin >> l;
	
	int num = 2*l;
	
	for(int counter1 = 1; counter1 <= 2*l; counter1++)
	{
		
		for(int counter2 = 1; counter2 <= 2*l; counter2++)
		{
			if(counter1 <= l)
			{
				if( counter2 > counter1 && counter2 < num )
					cout << "  ";
				else
					cout << "* ";
			}
			else
			{
				if( counter2 > num && counter2 < counter1 )
					cout << "  ";
				else
					cout << "* ";	
			}
		}	
		
		cout << endl;
		--num;
		
	}	
	
	return 0;
}
