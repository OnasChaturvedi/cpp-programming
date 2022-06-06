#include <iostream>
using namespace std;

int main()
{
	
	char a;
	int lowercase,uppercase;
	
	cout << "Input the alphabet\n";
	cin >> a;
	
	lowercase = (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');
	uppercase = (a=='A' || a=='E' || a=='I' || a=='O' || a=='U');
	
	if (lowercase || uppercase)
	{
		cout << "Vowel\n";
	}
	else
	{
		cout << "Consonant\n";
	}
	
	return 0;
}
