#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;
    int height;

public:
    Stack(int value)
    {
        Node *newNode = new Node(value);
        top = newNode;
        height = 1;
    }

    void printStack()
    {
        Node *temp = top;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    // push
    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }
    // 2nd way
    //  if(height==0){
    //      top = newNode;
    //  }else{
    //      newNode->next=top;
    //      top=mewMode;
    //  }
};

int main()
{

    Stack *myStack = new Stack(2); // 1st value

    myStack->push(1); // 2nd value

    myStack->printStack();
}
