/*




    queue == > ÇáØÇÈæÑ



        front == > start
        rear  == > end



    queue is impty :
        front = -1
        rear  = -1



    queue is full :
        rear = size-1



    function queue :
        EN_queue -- > add
        DE_queue -- > remove



    front == rear :
        from leimt in queue



    front > rear :
        queue is empty



    front < rear :
        from tow leimt in queue



    front++ :
        áæ ÚÇæÒ ÇÍÐÝ ÚäÕÑ æÇÍÏ



    front++ :
        áæ ÚÇæÒ ÇÖíÝ ÚäÕÑ æÇÍÏ




*/



#include <iostream>
#define size 5
using namespace std;



int queue[size];
int front = -1, rear = -1;



// function add
void En_queue(int value)
{
    if (rear != size - 1) // chick queue is not full
    {
        if (front == -1 && rear == -1)  // chick queue is not empty
        {
            front++;
            queue[++rear] = value; // add
        }
        else
        {
            queue[++rear] = value; // add
        }
    }
    else  // chick queue is  full
    {
        cout << "queue is full." << endl;
    }
}




// function remove
void De_queue()
{
    if (front != -1 && rear != -1 && front <= rear)  // chick queue is not empty
    {
        front++; // delete
    }
    else  // chick queue is empty
    {
        cout << "queue is empty." << endl;
    }
}




void display()
{
    if (front != -1 && rear != -1 && front <= rear) // chick queue is not empty
    {
        // print value

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << "\t";
        }
        cout << endl;
    }

    else // chick queue is  empty
    {
        cout << "queue is empty." << endl;
    }
}



int main()
{

    En_queue(12);
    En_queue(123);
    En_queue(1234);


    display();

    cout << "\n";

    De_queue();
    display();


    return 0;

}