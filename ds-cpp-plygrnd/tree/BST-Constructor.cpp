#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree
{
public:
    Node *root;

public:
    BinarySearchTree()
    {
        root = nullptr;
    }
    // another way
    //  BinarySearchTree(int value)
    //  {
    //      Node* newNode = new newNode(int value);
    //      root = newNode;
    //  }
};

int main()
{

    BinarySearchTree *myBST = new BinarySearchTree();

    cout << "Root: " << myBST->root;
}
