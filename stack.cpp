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
        top = newNode;              //4. Update the top pointer to the new node
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
};
int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice !=4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

       switch (choice)
       {
        case 1:
        cout << "Enter the value to push: ";
        cin >> value;
        stack.push(value); // Push the entered value into the stack
        break;
        case 2:
        stack.pop(); // Pop the topmost element from the stack
        break;
        case 3:
        stack.peek();
        break;
        case 4:
        cout << "Exiting program." << endl;
        break;
        default:
        cout << "Invalid choice. Try again." << endl;
        break;
       }

       cout << endl;
    }

    return 0;
}