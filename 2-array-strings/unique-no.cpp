/*
	find the unique element. you are given an array of numbers where all the elements appear twice , except one number,find and return that number.

	n(n-1)/2
	therefore O(n^2)

	optimal :
		apply sorting 
		sorted array complexity can be reduced
		then apply xor method

	see hashing technique during bit manipulation
*/

#include <iostream>
using namespace std;

void display (int arr[] , int size )
{
	for (int i = 0; i < size; ++i)
		cout<< arr[i]<<" ";
	cout<<'\n';
}


int unique (int array[], int size)
{
	
	int i;
	for ( i = 0; i < size ; ++i)
	{
		int flag = 1;
		for (int j = 0; j < size; ++j)
		{
			if (array[i] == array[j] && i!=j)
			{
				flag = 0;
				break;
			}
		}
	if ( flag == 1 )
		break;
	}
	return array[i];
}



int main() {
	
	// your code here
	int array[] = {1,2,3,3,4,1,2};
	int size = 7;

	display(array, size);
	cout << unique(array, size) <<"\n";

	return 0;
}