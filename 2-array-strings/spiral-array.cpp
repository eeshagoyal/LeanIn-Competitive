/* 
	print a given 2-D array in spiral form on the console
*/

#include <iostream>
using namespace std;

void display (int arr[] , int size )
{
	for (int i = 0; i < size; ++i)
		cout<< arr[i];
	cout<<'\n';
}


void spiralprint (int array[], int size)
{

	
}



int main() {
	
	// your code here
	int array[] = {1,2,3,3,4,1,2};
	int size = 7;

	display(array, size);
	spiralprint(array, size);

	return 0;
}