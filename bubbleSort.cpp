//Sorting an array using bubble sort.
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Input length of array : ";
	cin >> n;
	
	int array[n];
	
	cout << endl << "Input elements of array : ";
	 
	for(int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	
	for(int j = 1; j < n; j++)
	{
		for(int k = 1; k <= n-j; k++)
		{
			if(array[k]<array[k-1])
			{
				int temp = array[k-1];
				array[k-1] = array[k];
				array[k] = temp;
			}
		}
	}
	
	cout << "Sorted array : " << endl;
	
	for(int l = 0; l < n; l++)
	{
		cout << array[l] << " ";
	}
	
	return 0;
}

