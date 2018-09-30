/* 
	6. Print a given 2-D array in spiral form on the console.
*/

#include <iostream>
using namespace std;

const int size = 5;

void display (int array[size][size])
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
			cout<< array[i][j] << "\t";
		cout<<'\n';
	}
	cout<<'\n';
}


void spiralprint (int array[size][size] )
{
	for ( int l = 0 , m = size-1 ; l<=m ; l++, m-- )
	{
		for (int i = l; i <= m ; ++i )
			cout << array[l][i]<<" ";

		for (int i = l+1 ; i <= m ; ++i )
			cout << array[i][m]<<" ";
		
		for (int i = m-1 ; i >= l ; --i )
			cout << array[m][i]<<" ";

		for (int i = m-1; i >= l+1 ; --i )
			cout << array[i][l]<<" ";
	}
	cout<<'\n';
}

int main() {
	
	// your code here
	int array[size][size] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

	display(array);
	spiralprint(array);

	return 0;
}