/*
	7. Left rotate the array by k elements.
*/

#include <iostream> 
using namespace std;

void display (int array[] , int size)
{
	for (int i = 0; i < size; ++i)
		cout<< array[i]<<" ";
	cout<<'\n';
}

void rotation (int array[], int size)
{
	int k;
	cin>>k;

	int i = size-1;
	
	while(true)
	{
		int m = i-k;
		int temp = array[i];

		if(m<0)
			array[size-m] = array[i];
		else
			array[m] = array[i];

		i=temp; 
		display(array,size);
	}
}

int main() {
	
	int array[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;

	display(array, size);
	rotation(array,size);
	display(array,size);

	return 0;
}