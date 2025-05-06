#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;  // pointer type should be as Node type cause pointer point to a Node
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};

int main()
{

    // TODO:
    // 1. Dynamic Memory (new keyword & dynamic memory data type always should be a pointer)
    // 2. Heap Memory (DM where the nodes are store)
    // 3. Stack Memory (SM where the pointer of the nodes are store)
    // 4. Ponter (Who is point to a node like: Node* head = new Node(10))

    Node a(10), b(20), c(30);

    a.next = &b;
    b.next = &c;

    // cout<<a.val<<endl;
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}