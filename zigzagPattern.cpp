//To create a zig-zag pattern.
#include <iostream>
using namespace std;

int main()
{
	
	int n;
	
	cout << "Input length of zig-zag line : ";
	cin >> n;
	cout << endl;
	
	for(int row = 1; row <= 3; row++)
	{
		for(int column = 1; column <= n; column++)
		{
			if( (row+column)%4 == 0 || (row==2 && column%4 == 0))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		
		cout<<endl;
		
	}

	
	return 0;
}












