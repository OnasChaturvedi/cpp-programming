#include <iostream>
using namespace std;

int main()
{
	
	int a;
	int b;
	
	cout << "Input the number for multiplication table\n";
	cin >> a;
	
	for (int counter=1;counter<=10;counter++)
	{
		b = a*counter;
		cout << b << endl;
	}
	
	return 0;
}
