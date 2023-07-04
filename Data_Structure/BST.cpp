#include <iostream>
#include <array>

using namespace std; 

class BST
{
    public:
        //Default Constructor
        BST();

        //Parametarized Constructor
        BST(int);

        BST* Insert(BST* , int);

        void Inorder(BST*);

        //search
        BST* Search(BST* root, int key);

        BST *left, *right;
        int data;
};

BST::BST() : data(0), left(NULL), right(NULL)
{
}

BST::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root, int value){
    if(!root){
        //if there is no root create a node in the memory
        return new BST(value);
    }

    //if the value bigger than the root
    else if (value > root->data)
    {
        //right Node
        //should be in the right side

        root->right = Insert(root->right, value);
    }

    //if the value smaller than the root
    else{
        //left Node
        //should be in the left side

        root->left = Insert(root->left, value);
    }

    return root;
}

BST* BST::Search(BST* root,int key)
{
    //Base case root is NULL or the value is the root
    if(root == NULL || root->data == key)
    {
        return root;
    }

    if(root->data < key)
    {
        return Search(root->right, key);
    }

    return Search(root->left, key);
}

void BST::Inorder(BST* root)
{
    if(!root)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main()
{
    BST b, *root = NULL;
    int input;

    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 10);
    b.Insert(root, 5);
    b.Insert(root, 20);
    b.Insert(root, 80);
    b.Insert(root, 60);
    b.Insert(root, 65);

    cout << "Entet the search key : ";
    cin >> input;

    BST* keyChild = b.Search(root, input);
    if (keyChild->data == input)
    {
        cout << "key is found" << endl;
    }

    b.Inorder(root);
    

    return 0;
}