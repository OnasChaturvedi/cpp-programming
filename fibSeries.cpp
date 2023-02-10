//To find first n numbers of the Fibonacci series.
#include <iostream>
using namespace std;

int fibNum(int num)
{
	int t1=0;
	int t2=1;
	int nextTerm;
	
	for(int i = 1; i <= num; i++)
	{
		cout << t1 << endl;
		
		nextTerm = t1 + t2;
		t1 = t2; 
		t2 = nextTerm;
	}	
	
}

int main()
{
	
	int n;
	
	cout << "Input a number : ";
	cin >> n;
	
	fibNum(n);
	
	return 0;
}
