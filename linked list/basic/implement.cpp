#include<iostream>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};


int main(){
    // make the dynamic memory and ptr
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    Node* tmp = head;
    while(tmp != nullptr){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}