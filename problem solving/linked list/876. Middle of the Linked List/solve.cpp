/**
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
int length(ListNode* head) {
    int len = 0;
    while (head != nullptr) {
        len += 1;
        head = head->next;
    }
    return len;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        ListNode* tmp = head;
        for(int i=0; i<(len/2); i++){
            tmp=tmp->next;
        }
        return tmp;
    }
};

**/