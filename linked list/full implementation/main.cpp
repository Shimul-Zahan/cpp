#include<iostream>
using namespace std;

class Node{
    public: 
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};

// ! Inser Operations
// insert in the beggining
void insertInTheBeggining(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

// insert in the tail
void insertInTheTail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if (head == nullptr){
        head = newnode;
        tail = newnode;
        return;
    }
    // (n)
    // Node* temp = head;
    // while(temp->next != nullptr){
    //     temp = temp->next;
    // }
    // temp->next = newnode;

    // (1)
    tail->next = newnode;
    tail = newnode;
}

// insert at any point
void insertAtAnyPoint(Node* &head, int idx, int val){
    if(idx==0){
        insertInTheBeggining(head, val);
        return;
    }
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=1; i<idx - 1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    // cout<<"here is the node at this point"<<temp->val<<endl;
}


// ! Delete Operations
void deleteAtTheStart(Node* &head){
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return; 
    }
    Node* current = head;
    head = head->next;
    cout<<"deleteted value : "<<current->val<<endl;
    delete current;
}

void deleteAtTheEnd(Node* &head, Node* &tail){
    Node* current = head;
    while(current->next != tail){
        current = current->next;
    }
    // cout<<"at the end"<<current->val<<endl;
    delete tail;
    tail = current;
    tail->next = nullptr;

}

void deleteAtAnyPoint(Node* &head, int idx){
    Node* current = head;
    for(int i=0; i<idx - 1; i++){
        current = current->next;
    }
    Node* deletedNode = current->next;
    current->next = current->next->next;
    cout<<"delete value"<<deletedNode->val<<endl;
    delete deletedNode;
}

// ! reverse a linked list
void reverse(Node* head){
    // Node* current = head;
    if(head == nullptr){
        return;
    }
    cout<<head->val<<" ";
    reverse(head->next);
    cout<<head->val<<" ";
}

// ! sorting in a linked list
// first loop should be stop before the second last node
// second loop run throught the last node
void insertionSort(Node* &head){
    for(Node* i=head; i->next != nullptr; i=i->next){
        for (Node* j=i->next; j != nullptr; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
}

// printing the linked list
void printList(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<endl;
}


int main(){

    int number_of_nodes;
    cin>>number_of_nodes;
    Node* head = nullptr;
    Node* tail = nullptr;
    // cout<<head->val<<endl;
    for(int i = 0; i<number_of_nodes; i++){
        int val;
        cin>>val;
        insertInTheTail(head, tail, val);
    }
    // insertInTheBeggining(head, 100);
    insertAtAnyPoint(head, 0, 69);
    // printList(head);
    // deleteAtTheStart(head);
    // deleteAtTheEnd(head, tail);
    // printList(head);
    // cout<<"tail value"<<tail->val<<endl;
    // deleteAtAnyPoint(head, 2);
    // reverse(head);
    insertionSort(head);
    printList(head);
    return 0;
}

// TODO : 1. Delete Full 2. Selection sort 3. Reverse (again full practice with visualization)