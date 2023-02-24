//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class linked_list
{

private:

    struct Node
    {
        int data;

        Node* next;
    };

    Node* head;

public:


    linked_list() // construtor
    {
        head = NULL;
    }


    ~linked_list() // destructor
    {
        
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void insert_last(int value)
    {
        Node* new_node = new Node;  // creat Node

        new_node->data = value;  // data from new_node = value

        new_node->next = NULL;


        if (head == NULL)
        {
            head = new_node;  // first limet
        }
        else
        {
            Node* temp = head;  // temp == first Node on linked list

            while (temp->next != NULL)
            {
                temp = temp->next; // åíÇÔÇæÑ Úáì ÇáÚäÕÑ Çáì ÈÚÏå
            }

            temp->next = new_node; // ÈÇÑÈØ ÇáäæÏ ÈÈÚÖåÇ

        }

    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void delete_node(int value)
    {
        Node* prev, * temp;

        prev = temp = head;


        // remove first Node on linked_list

        if (temp->data == value)
        {
            head = temp->next;  // ÈÚÏ ãÇ íÍĞİ åíÇÔÇæÑ Úáì ÇáäæÏ Çáì ÈÚÏå

            delete temp;  // free(temp);

            return;
        }


        // remove  Node on linked_list

        while (temp->data != value)
        {
            prev = temp;

            temp = temp->next;
        }

        prev->next = temp->next;

        delete temp;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void insert_beg(int value)  // add limet from beginning    ÇÖÇİå ÚäÕÑ İí ÇáÈÏÇíå    
    {
        Node* new_node = new Node;

        new_node->data = value;

        new_node->next = head;  // åäÇ ÇáäæÏ ÇáÌÏíÏå åÊÔÇæÑ Úáì ÇáäæÏ Çáì ßÇäÊ ÈÊÔÇæÑ ÚáíåÇ ÇáåíÏ

        head = new_node;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    void delete_beg() // removw limet from beginning    ÍĞİ ÚäÕÑ İí ÇáÈÏÇíå    
    {
        if (head == NULL)
        {
            cout << "linked list is emptyt. \n";
        }
        else
        {
            Node* first_node = head;

            head = first_node->next;

            delete first_node;

            return;
        }
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void delete_end()
    {
        //  ãİåæÔ ÚäÇÕÑ
        if (head == NULL)
        {
            cout << "linked list is empty. \n";
        }
        //  İí ÚäÕÑ æÇÍÏ 
        else if (head->next == NULL) // İíåÇ ÚäÕÑ æÇÍÏ
        {
            delete head;

            head = NULL;
        }
        //  İí ÇßËÑ ãä ÚäÕÑ
        else
        {
            Node* ptr = head;

            while (ptr->next->next != NULL)
            {
                ptr = ptr->next;
            }

            delete ptr->next;

            ptr->next = NULL;
        }
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void display()
    {
        Node* temp;

        if (head == NULL)
        {
            cout << "linked list is empty." << endl;
        }
        else
        {
            temp = head;

            while (temp != NULL)
            {
                cout << temp->data << "\t";

                temp = temp->next;
            }
        }
    }

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    linked_list print;

    print.insert_last(2);

    print.insert_last(3);

    print.insert_last(4);

    print.insert_last(5);

    print.display();  //  2       3       4       5

    cout << "\n";

    print.delete_node(5);

    print.insert_beg(1);  // ÇÖÇİå İí ÇáÈÏÇíå

    print.display();  //  1       2       3       4

    cout << "\n";

    print.delete_beg();  // ÍĞİ İí ÇáÈÏÇíå

    print.display();  //  2       3       4

    cout << "\n";

    print.delete_end();  // ÍĞİ ãä ÇáäåÇíå

    print.display();  //  2       3

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////