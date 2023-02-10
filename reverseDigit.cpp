//To reverse a given number's digits.
#include <iostream>
using namespace std;

int main(){
	
	int n;
	int reverse;
	
	cout << "Input a number\n";
	cin >> n;
	
	while(n > 0)
	{
		int lastDigit = n%10;
		reverse = reverse*10 + lastDigit;
		n = n/10;
	}
	
	cout << reverse;
	
	return 0;
}
