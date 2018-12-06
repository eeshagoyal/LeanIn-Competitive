#include <iostream> 
using namespace std;

void push(char);
void pop();
void display();

const int MAX = 20;
char stack[MAX];
int top = -1;

int main() {
	push ('1');
	push('a');
	pop();

	return 0;
}

void push(char ch){
	if( top < MAX )
	{
		top++;
		stack[top] = ch;
		display();
	}
}

void pop(){
	if( top != -1)
		top--;
}

void display() 
{
	for(int i = top; i>=0; i--)
		cout<<stack[i]<< " ";
	cout<<"\n";
}