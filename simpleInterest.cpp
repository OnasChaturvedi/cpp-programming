#include <iostream>
using namespace std;

int main()
{
	
	int amt;
	int t;
	float rate;
	float totalint;
	
	cout << "Input the principal amount" << endl;
	
	cin >> amt;
	
	cout << "Input the time(in years)" << endl;
	
	cin >> t;
	
	cout << "Input the annual rate of interest (__%)" << endl;
	
	cin >> rate;
	
	totalint = (amt * rate * t)/100;
	
	cout << "The total interest on principal amount " << amt << " in time " << t << "years at the annual interest rate of " << rate << "% is " << totalint;
	
	return 0;	
}
