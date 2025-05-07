#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

// insertion operations
void insertAtTheStart(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    Node *current = head;
    if (head == nullptr)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertInTheEnd(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    Node *current = head;
    if (head == nullptr)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insertInAnyPoint(Node *&head, Node *tail, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *current = head;
    if (pos == 0)
    {
        insertAtTheStart(head, tail, val);
        return;
    }
    if (current->next == nullptr)
    {
        insertInTheEnd(head, tail, val);
        return;
    }
    for (int i = 0; i < pos - 1; i++)
    {
        current = current->next;
    }
    newnode->next = current->next;
    current->next->prev = newnode;
    current->next = newnode;
    newnode->prev = current;
}

// ! delete operations

// ! printing
void printingForward(Node *head)
{
    Node *current = head;
    cout << "Printing forward" << endl;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void printingBackward(Node *tail)
{
    Node *current = tail;
    cout << "Printing backward" << endl;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->prev;
    }
    cout << endl;
}

int main()
{
    int number_of_node;
    cin >> number_of_node;
    Node *head = nullptr;
    Node *tail = nullptr;
    for (int i = 0; i < number_of_node; i++)
    {
        int val;
        cin >> val;
        insertInTheEnd(head, tail, val);
    }
    // insertAtTheStart(head, tail, 100);
    insertInAnyPoint(head, tail, 2, 69);
    printingForward(head);
    printingBackward(tail);
}