/*
	1. Reverse the elements of an array without using another array.
*/

#include <bits/stdc++.h> 
using namespace std;

void display (int arr[] , int size)
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
		swap(array[i], array[temp_size-1]);

	display(array, size);

	return 0;
}