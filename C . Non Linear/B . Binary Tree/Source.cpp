

/*

        Binary Tree
________________

                    1  // Root Node
                   / \
                  2    3
                 / \  / \
  //Leaf Nodes  4  5  6  7  



             size () = 7

             lingth () = 2 // count Edgs



             parent (2) = 1

             child (2) = 4 , 5


*/

#include <iostream>
using namespace std;

class Node {


public:
    int data;
    Node* left;
    Node* right;


    Node(int data) // constructor
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int main()
{

    /*. create root .*/
    Node* root = new Node(1);
    /*. following is the tree after above statement

             1
            / \
        NULL   NULL
    .*/


    root->left = new Node(2);
    root->right = new Node(3);
    /* 2 and 3 become left and right children of 1

                   1
                 /   \
                2      3
               / \     / \
            NULL NULL NULL NULL

    .*/


    root->left->left = new Node(4);
    /*. 4 becomes left child of 2
              1
            /    \
           2      3
          / \     / \
         4 NULL NULL NULL
        / \
      NULL NULL

    .*/




    // print left
    cout << "> ROOT (" << root->data <<")" << endl;   // > ROOT (1)

    cout << "> print left (" << root->left->data <<")" << endl;    // > print left (2)

   
    cout << "> print right (" << root->right->data << ")" << endl;    // > print right (3)

    // print right
    
    cout << "> print left (" << root->left->left->data << ")" << endl << endl;     // > print left (4)
  
    cout << "> print right (" << root->right->right <<")" << endl;   // > print right (0000000000000000)

    return 0;
}