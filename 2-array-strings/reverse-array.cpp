/*
	reverse the elements of an array without using another array
*/

#include <iostream>
using namespace std;

void display (int arr[] , size)
{
	for (int i = 0; i < size; ++i)
		cout<< arr[i];
	cout<<'\n';
}


int main() {
	
	// your code here
	int array[] = {1,2,3,4,5};
	int size = 5;

	display(array, size);

	int temp_size = size ;
	for (int i = 0; i < temp_size; ++i,temp_size--)
	{
		int temp = array[i];
		array[i]= array[temp_size-1];
		array[temp_size-1]=temp;
	}

	display(array, size);

	return 0;
}