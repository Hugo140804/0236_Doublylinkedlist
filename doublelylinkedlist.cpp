#include <iostream>
#include <string>   
using namespace std;

class Node
{
    public:
        int noMhs;
        Node* next;
        Node* prev; 
};

class DoublelyLinkedList
{
    private:
        Node *START;

public:
    DoubleLinkedListList()
    {
        START = NULL;
    }

    