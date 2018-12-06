/* 
	5. Merge two sorted arrays.
*/

#include <iostream> 
using namespace std;

void display (int arr[] , int size )
{
	for (int i = 0; i < size; ++i)
		cout<< arr[i]<<" ";
	cout<<'\n';
}


void merge (int array1[], int a1_length, int array2[], int a2_length )
{
	int a_length = a1_length + a2_length;
	int array[ a_length ];
	int size = 0;

	for (int i = 0; i < a1_length; ++i)
	{
		array[i] = array1[i];
		size++;
	}	
		
	for (int i = 0; i < a2_length; ++i)
	{
		for (int j = 0; j <= size; ++j)
		{
			if(array2[i] <= array[j])
			{
				for (int k = size; k >= j; --k)
				{
					array[k+1] = array[k];
				}
				array[j] = array2[i];
				size++;
				break;	
			}
		}
	}
	display(array,a_length);
}



int main() {
	
	// your code here
	int array1[] = {11,13,15,16,19};
	int array2[] = {8,9,10,12,14,17,20,22,23};

	int a1_length = sizeof(array1)/sizeof(array1[0]);
	int a2_length = sizeof(array2)/sizeof(array2[0]);

	display(array1, a1_length);
	display(array2, a2_length);
	merge( array1, a1_length, array2, a2_length );

	return 0;
}