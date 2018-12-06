/*
	1. Check for balanced parantheses in expression
		"{", "}", 
*/

#include <iostream> 
using namespace std;

void push(char);
void pop();
void display();

const int MAX = 20;
int stack1[MAX];
int stack2[MAX];
int top = -1;

int main() {

	push(1);
	push(3);
	push(5);
	push(9);
	push(2);

	display();

	stack/ = pop();



	return 0;
}

void push(int ch){
	if( top < MAX )
	{
		top++;
		stack[top] = ch;
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