// double linked list

#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

node* createNode()
{
    node* new_node = new node();
    cout << "enter the data : ";
    cin >> new_node->data;
    new_node->next=NULL;   
    new_node->prev=NULL;
    return new_node;
}


node* insertNode(node* list , node* newnode)
{
    node* ptr;
    ptr = list;
    
    if(list == NULL) // list is empty
    {
        list = newnode;
    }
    else if(list->data = newnode->data) // add the first list
    {
        list->prev = newnode;
        newnode->next = list;
        list = newnode;
    }
    else
    {
             // list is not empty          
        while((ptr->next != NULL) && (ptr->data <= newnode->data)) 
        {
            ptr = ptr->next;
        }
        
        // add the middle 
        if(ptr->data >= newnode->data)
        {
            newnode->next = ptr;
            newnode->prev = ptr->prev;
            ptr->prev->next = newnode;
            ptr->prev = newnode;
        }
        else // add the last 
        {
            ptr->next = newnode;
            newnode->prev = ptr;
        }
    }
    return list;
}


node* delNode(node* list , int value)
{
    node* ptr;
    ptr = list;
    
    if(list == NULL)
    {
        cout << "list is empty." << endl;
    }
    else if(list->data == value) // delete first 
    {
        list = list->next;
        delete(ptr);
    }
    else
    {
        while((ptr->next != NULL)&&(ptr->data < value))
        {
            ptr = ptr->next;
        }
        
        if((ptr->next == NULL)&&(ptr->data == value)) // delete last
        {
            ptr->prev->next = NULL;
            delete(ptr);
        }
        else if(ptr->data == value) // delete middle
        {
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
            delete(ptr);
        }
        else if(ptr->next == NULL)
        {
            cout << "Not Found" << endl;
        }
    }
    return list;
}

int main()
{
    cout << "Hello Worled";    

    return 0;
}
