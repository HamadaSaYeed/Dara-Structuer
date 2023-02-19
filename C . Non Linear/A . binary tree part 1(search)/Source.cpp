
#include <iostream>
using namespace std;


class BST  // Binary Search Tree
{
    int data;
    BST* left, * right;

public:

    BST() // constructor.
    {
        data = 0;
        left = NULL;
        right = NULL;
    }


    BST(int namber) // Parameterized constructor.
    {
        this->data = namber;
        this->left = NULL;
        this->right = NULL;
    }


    BST* Insert(BST* root, int namber) // add
    {
        if (!root) // root == NULL
        {
            return new BST(namber);
        }


        if (namber < root->data)  // left
        {
            root->left = Insert(root->left, namber);
        }


        if (namber > root->data)  // right
        {
            root->right = Insert(root->right, namber);
        }


        return root;

    }



    void Sort(BST* root) // ÊÑÊíÈ ãä ÇáÕÛíÑ ááßÈíÑ
    {
        if (!root)
        {
            return;
        }


        Sort(root->left);

        cout << root->data << endl;

        Sort(root->right);

    }

};


int main()
{
    BST b, * root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);

    b.Sort(root);
    return 0;
}

