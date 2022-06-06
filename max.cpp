#include <iostream>
using namespace std;

int main(){
	
	int a;
	int b;
	int c;
	
	cout << "Input first number\n";
	cin >> a;
	
	cout << "Input second number\n";
	cin >> b;
	
	cout << "Input third number\n";
	cin >> c;
	
	if (a>b)
	{
		if (a>c){
			cout << a;
		}
		else {
			cout << c;
		}
	}
	else if (b>c)
	{
		cout << b;
	}
	else
	{
		cout << c;
	}
	
	return 0;
}
