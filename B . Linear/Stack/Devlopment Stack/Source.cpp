#include <iostream>
using namespace std;
#define size 10 // variable const


class Stack
{

private:

    int* top;

    int data[size]; // name Stack

public:


    Stack() // constructor
    {
        top = new int; // ÕÃ“ „”«ÕÂ


        *top = -1; // Stack empty
    }


    ~Stack() // destructor
    {
        delete top; // delete  -- > remove pointer
    }


    // function add
    void puch(int n)
    {
        if (*top == size - 1) // «· Õﬁﬁ  Stack full
        {
            cout << "stack is full" << endl;
        }
        else
        {
           
            data[++(*top)] = n;
        }
    }


    // function Delete
    void pop()
    {
        if (*top == -1) // «· Õﬁﬁ  Stack empty
        {
            cout << "stact is empty" << endl;
        }
        else
        {
            *top--;
        }
    }

    void print()
    {
        if (*top == -1)
        {
            cout << "stact empty" << endl;
        }


        else {

            // last in first out ---- > «Œ— ⁄‰’— ÂÌœŒ· «Ê· ⁄‰’— ÂÌŒ—Ã
            for (int i =*top; i >= 0; i--)   // ÿ»«⁄Â «·ﬁÌ„ »«·⁄ﬂ”
            {
                cout << data[i] << endl;
            }

        }
    }




};


int main() {

    Stack op;

    int cho, tot, num, tot1;


    char ch = 'y';

    while (ch == 'y') // Â ›÷· ‘€«·Â ·«€«Ìÿ „« «·‘—ÿ Ì”«ÊÌ ’›—
    {


        cout << "to add data to stack enter (1).\n";
        cout << "to Delete data from stack enter (2).\n";
        cout << "to show data from stack enter (3).\n";
        cin >> cho;


        switch (cho)
        {



        case 1:

            cout << "how element you that want add to stack : ";
            cin >> tot;

            for (int i = 0; i < tot; i++)
            {
                cout << "enter numper (" << i + 1 << ") : ";
                cin >> num;

                op.puch(num);
            }

            break;



        case 2:

            cout << "how element you that want remove from stack : ";
            cin >> tot1;

            for (int i = 0; i < tot1; i++)
            {

                op.pop();
            }
            break;


        case 3:


            op.print();

            break;
        }



        cout << "do you whant repeat program : ";
        cin >> ch;




    }

    return 0;

}