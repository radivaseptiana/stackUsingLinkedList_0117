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
        top = NULL; //
    }
}