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
        Node *newNode = new Node(); //1. Allocate memory for the new node
        newNode->data = value;      //2. assign value
        newNode->next = top;        //3. set the next pointer of the new node to the current
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    // IsEmpety operation: Check if the stack is empety
    bool isEmpety()
    {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empety stack
    }

    // Pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpety())
        {
            cout << "Stack is empety." << endl;
            return; // if the stack is empety, print a message and return
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node
    }

    //Peek/top operation: Retrieve the value of the topmost element without removing it
    void peek()
    {
        if (isEmpety())
        {
            cout << "List is empety." << endl;
            return; // if the stack is empety, print a message and return
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } //Return the value of the top node
    }
}