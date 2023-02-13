//To arrange an integer array in ascending or descending order.
#include <iostream>
#include <climits>
using namespace std;

int minIndex(int arr[], int firstIndex, int size)
{
	int j;
	int min = INT_MAX;
	for(int i=firstIndex; i < size; i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			j = i;
		}	
	}
	return j;
}

int maxIndex(int arr[], int firstIndex, int size)
{
	int j;
	int max = INT_MIN;
	for(int i=firstIndex; i < size; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			j = i;
		}	
	}
	return j;
}

int main()
{
	
	int n, order;
	
	cout << "Input lenth of array : ";
	cin >> n;
	
	int array[n];
	cout << "Input elements of the array : " << endl;
	
	for(int counter1 = 0; counter1 < n; counter1++)
	{
		cin >> array[counter1];
	}
	
	cout << "Enter 0 for ascending order and 1 for descending order : ";
	cin >> order;
	
	for(int counter2 = 0; counter2 < n; counter2++)
	{
		int temp1 = array[counter2];
		int temp2 = (order==0? minIndex(array, counter2, n):maxIndex(array, counter2, n));
		
		array[counter2] = array[temp2];
		array[temp2] = temp1;
	}
	
	cout << endl;
	
	for(int counter3 = 0; counter3 < n; counter3++)
	{
		cout << array[counter3] << " ";
	}
	
	return 0;
}


















