// To print a hollow diamond pattern.
#include <iostream>
using namespace std;

int main()
{
	
	int n;
	
	cout << "Input length of diamond : ";
	cin >> n;
	
	for(int counter1 = 1; counter1 <= n; counter1++)
	{
		for(int counter2 = 1; counter2 <= n-counter1; counter2++)
			cout << "  ";
			
	    for(int counter3 = n-counter1; counter3 < 2*n ; counter3++)
	    {
	    	if(n-counter3+1 == counter1 || (counter3-n)+1 == counter1)
	    		cout << "* ";
			else
				cout << "  ";
		}
		
		cout << endl;
	}
	
	for(int counter1 = n; counter1 >= 1; counter1--)
	{
		for(int counter2 = 1; counter2 <= n-counter1; counter2++)
			cout << "  ";
	    
	    for(int counter3 = n-counter1; counter3 < 2*n ; counter3++)
	    {
	    	if(n-counter3+1 == counter1 || (counter3-n)+1 == counter1)
	    		cout << "* ";
			else
				cout << "  ";
		}
		
		cout << endl;	
	}
	
	return 0;
}
