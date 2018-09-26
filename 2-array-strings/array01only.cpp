/* 
	sort an array containing only 0 and 1 
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

	
}



int main() {
	
	// your code here
	int array[] = {1,2,3,3,4,1,2};
	int size = 7;

	display(array, size);
	sort01(array, size);

	return 0;
}