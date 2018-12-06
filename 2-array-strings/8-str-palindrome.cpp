/*
	8. Check if a given string is a palindrome.
*/

#include <iostream> 
using namespace std;

void display (int array[] , int size)
{
	for (int i = 0; i < size; ++i)
		cout<< array[i];
	cout<<'\n';
}

void palindrome (int array[], int size)
{
	int k;
	cin>>k;

	for (int i = 0; i < size; ++i)
	{
		int m = i-2;
		int temp = array[i];

		if(m<0)
			array[size-m] = array[i];
		else
			array[m] = array[i];
	}
}

int main() {
	
	int array[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;

	display(array, size);
	palindrome(array,size);
	display(array,size);

	return 0;
}