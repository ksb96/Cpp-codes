#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value) // constructor
    {
        this->value = value;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *first;
    Node *last;
    int length;

public:
    Queue(int value)
    {
        Node *newNode = new Node(value);
        first = newNode;
        last = newNode;
        length = 1;
    }

    void printQueue()
    {
        Node *temp = first;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getFirst()
    {
        cout << "First: " << first->value << endl;
    }

    void getLast()
    {
        cout << "Last: " << last->value << endl;
    }

    void getLength()
    {
        cout << "Length: " << length << endl;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (length == 0)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        length++;
    }

    Node *dequeue()
    {
        // empty queue
        if (length == 0)
            return nullptr;
        // 1 element in the queue
        Node *temp = first;
        if (length == 1)
        {
            first = nullptr;
            last = nullptr;
        }
        else
        {
            // 'n' no.of elements in the queue
            first = first->next;
            temp->next = nullptr;
        }
        length--;
        return temp;
    }
};

int main()
{

    Queue *myQueue = new Queue(2);
    myQueue->enqueue(1);

    // (2) Items - Returns 2 Node
    cout << myQueue->dequeue()->value << endl;
    // (1) Item -  Returns 1 Node
    cout << myQueue->dequeue()->value << endl;
    // (0) Items - Returns nullptr
    cout << myQueue->dequeue() << endl;
}
