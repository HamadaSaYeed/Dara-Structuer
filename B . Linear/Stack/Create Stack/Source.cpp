#include <iostream>
using namespace std;
#define size 10 // variable const


class Stack
{

private:
   
    int top; 

    int data[size]; // name Stack

public:


    Stack()
    {
        top = -1; // Stack empty
    }


    // function add
    void puch(int n)
    {
        if (top == size - 1) // Stack full
        {
            cout << "stack is full" << endl;
        }
        else
        {
            
            data[++top] = n;
        }
    }


    // function Delete
    void pop()
    {
        if (top == -1) // ÇáÊÍÞÞ  Stack empty
        {
            cout << "stact is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    void print()
    {

        // last in first out 
        for (int i = top; i >= 0; i--)   
        {
            cout << data[i] << endl;
        }
    }




};


int main() {
    
    Stack op;
    op.puch(5);
    op.puch(6);
    op.puch(7);
    op.pop(); // Delete lemt
    op.print();

    return 0;

}