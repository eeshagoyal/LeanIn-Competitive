/* 
	3. Sort 0’s and 1’s: Sort an array containing 0’s and 1’s only.

	
	Try for O(n)

	1.
		traverse
		k = count no of zeroes in array
		no of 1 = n - k 

		put 0 in first k positions
		put 1 in all other places

	2.
		two pointer technique
		take 2 variables i and j both ends of array

		0 1 1 0 1 1
		i         j

		i is 0 j is 1 update;
		i is 1 j is 0 swap; update;
		i and j are same update one side; 

*/

#include <iostream>
using namespace std;

void display (int arr[] , int size )
{
	for (int i = 0; i < size; ++i)
		cout<< arr[i];
	cout<<'\n';
}


void sort01 (int array[], int size)
{
	int count =0;
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == 0)
			count++;
	}
	for (int i = 0; i < size; ++i)
	{
		if (i< count)
			array[i]=0;
		else
			array[i]=1;
	}
}



int main() {
	
	// your code here
	int array[] = {1,1,0,1,0,0,1,0,0,1};
	int size = 10;

	display(array, size);
	sort01(array, size);
	display(array, size);

	return 0;
}