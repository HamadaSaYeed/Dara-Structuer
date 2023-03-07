#include <iostream>
using namespace std;
#define size 5 

int stack[size], top = -1;

void puch(int value);
void pop();
void dsplay();


int main()
{
	puch(4);
	puch(44);
	puch(444);
	puch(4444);
	
	dsplay();

	cout << "\n";

	pop();
	dsplay();
	return 0;
}


void puch(int value)
{
	if (top == size - 1)
	{
		cout << "Stack overflow" << endl;
	}
	else
	{
		top++;
		stack[top] = value;
	}
}


void pop()
{
	if (top == -1)
	{
		cout << "stack empty" << endl;
	}
	else
	{
	    top--;
	}
}

void dsplay()
{   
	if (top == size - 1)
	{
		cout << "Stack overflow" << endl;
	}
	else
	for (int i = top; i >= 0; i--)
	{
		cout << stack[i] << endl;
	}
}