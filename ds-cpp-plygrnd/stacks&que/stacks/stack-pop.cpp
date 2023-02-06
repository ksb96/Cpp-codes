#include <iostream>

using namespace std;


class Node { 
    public: 
        int value;
        Node* next;
    
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};


class Stack {
    private:
        Node* top;
        int height;

    public:
        Stack(int value) {
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        void printStack() {
            Node* temp = top;
            while (temp) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getTop() {
            cout << "Top: " << top->value << endl;
        }

        void getHeight() {
            cout << "Height: " << height << endl;
        }

        void push(int value) {
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
            height++;
        }

        Node* pop() {
            if(height == 0) return nullptr;

            Node* temp = top;
            top = top->next;
            temp->next = nullptr;

            height--;
            return temp;
        }
        
};



int main() {
        
    Stack* myStack = new Stack(7);
    myStack->push(23);
    myStack->push(3);
    myStack->push(11);

    cout << myStack->pop()->value << "\n\n";

    myStack->printStack();
      
}


