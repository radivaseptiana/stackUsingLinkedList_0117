#include <iostream>
using namespace std;

//Node class representing  a single node in the linkedlist
class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//Stack class
class Stack
{
    private:
    Node *top; // Pointer to the top node of the stack

    public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation: Insert an element into the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); 
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }
}