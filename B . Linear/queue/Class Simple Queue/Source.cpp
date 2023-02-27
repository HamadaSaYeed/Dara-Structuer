#include <iostream>
#define size 100
using namespace std;


class Queue
{

private:


    int queue[size];
    int front, rear ;


public:


    Queue() // constructor
    {
        front = -1;
        rear = -1;
    }


    ~Queue(){} // destructor



    // ALL function Queue
    void EN_queue(int value);
    void DE_queue();
    void display();

};




// function add
void Queue::EN_queue(int value)
{
    if (rear == size - 1) // chick queue is  full
    {
        cout << "queue is full," << endl;
    }
    else // chick queue is not  full
    {

        if (front == -1 && rear == -1) // chick queue is empty
        {
            front++;
            queue[++rear] = value; // add
        }
        else
        {
            queue[++rear] = value; // add
        }
    }

}




// function remove
void Queue :: DE_queue()
{
    if (front != -1 && rear != -1 && front <= rear)  // chick queue is not empty
    {
        front++;  // delete
    }
    else
    {
        cout << "Queue is empty." << endl;
    }

}




void Queue :: display()
{
    if (front != -1 && rear != -1 && front <= rear)  // chick queue is not empty
    {
        // print value

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << "   ";
        }
        cout << endl;
    }
    else // chick queue is  empty
    {
        cout << "Queue is empty." << endl;
    }

}




int main()
{

    Queue q; // pbject


    q.EN_queue(155);
    q.EN_queue(551);
    q.EN_queue(515);
    q.EN_queue(5511);




    q.display();  // 155   551   515   5511
    
    cout << "\n";

    q.DE_queue(); // delete 155
    
    q.display(); // 551   515   5511


    return 0;

}