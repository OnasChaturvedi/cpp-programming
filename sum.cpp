//To find sum of all numbers till n.
#include <iostream>
using namespace std;

int main()
{
	
	int n;
	int sum=0;
	
	cout << "Input the number\n";
	cin >> n;
	
	for (int counter=1;counter<=n;counter++)
	{
		sum = sum+counter;
	}
	
	cout << sum;
	
	return 0;
}
