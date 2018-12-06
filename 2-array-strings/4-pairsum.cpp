/*
	4. Pair Sum: Find the number of pairs in an array having sum equal to a given number k.
*/

#include <iostream>
using namespace std;

void display (int arr[] , int size )
{
	for (int i = 0; i < size; ++i)
		cout<< arr[i]<<" ";
	cout<<'\n';
}


void pairsum (int array[], int size, int k)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i+1; j < size; ++j)
		{
			if ((array[i] + array[j]) == k)
				cout<<array[i]<<" "<<array[j]<<"\n" ;
		}
	}
}



int main() {
	
	// your code here
	int array[] = {4,2,3,1,5,6};
	int size = 6;
	int k = 7;

	display(array, size);
	pairsum(array, size , k);

	return 0;
}
