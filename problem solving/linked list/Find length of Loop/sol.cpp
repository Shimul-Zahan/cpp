/*
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int count=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                do{
                    count += 1;
                    slow=slow->next;
                }while(slow !=fast);
                return count;
            }
        }
        return 0;
    }
};


// another solutions

int countLength(Node *slow){
    int cnt=1;
    Node* temp=slow->next;
    while(temp!=slow){
        cnt++;
        temp = temp->next;
    }
    return cnt;
    
}

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int count=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return countLength(slow);
            }
        }
        return 0;
    }
};

*/