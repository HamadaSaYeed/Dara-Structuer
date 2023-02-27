
#include <iostream>
#define size 5
using namespace std;


class Queue
{

private:


    int queue[size];
    int front, rear;


public:


    Queue()
    {
        front = -1;
        rear = -1;
    }


    ~Queue() {}


    void En_queue(int value);
    void DE_queue();
    void display();


};




// function add
void Queue::En_queue(int value)
{

    if (front == 0 && rear == size - 1 || front == rear + 1) // chick queue is full.
    {

        cout << "queue is full." << endl;

    }
    else
    {

        if (front == -1 && rear == -1) // chick queue is empty.
        {

            front = 0;

            rear = 0;

            queue[rear] = value;

        }
        else if (rear == size - 1) // chick queue is full.
        {

            rear = 0;

            queue[rear] = value;

        }
        else
        {

            queue[++rear] = value;

        }

    }

}




// functhon delete
void Queue::DE_queue()
{

    if (front == -1 && rear == -1) // chick queue is empty.
    {

        cout << "queue is empty." << endl;

    }
    else
    {

        if (front == rear)
        {

            front = -1;

            rear = -1;

        }
        else if (front == size - 1) // chick queue is full.
        {

            front = 0;

        }
        else
        {

            front++;

        }

    }

}




void Queue::display()
{

    if (front == -1 && rear == -1) // chick queue is empty
    {

        cout << "queue is empty" << endl;

    }
    else
    {

        if (front <= rear)
        {

            for (int i = front; i <= rear; i++)
            {

                cout << queue[i] << "\t";

            }

        }
        else
        {

            for (int i = front; i < size; i++)
            {

                cout << queue[i] << "\t";

            }

            for (int i = 0; i <= rear; i++)
            {

                cout << queue[i] << "\t";

            }

        }

    }

}




int main()
{

    Queue q;

    q.En_queue(1);
    q.En_queue(2);
    q.En_queue(3);
    q.En_queue(4);
    q.En_queue(5);

    q.display();

    cout << "\n";
    cout << "\n";

    q.DE_queue();
    q.DE_queue();


    q.En_queue(6);
    q.En_queue(7);

    q.display();

    return 0;

}