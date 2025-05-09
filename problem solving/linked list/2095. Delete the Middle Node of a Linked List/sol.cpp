/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
int lengthOfLL(ListNode* head){
    int cnt=0;
    while(head!=nullptr){
        cnt++;
        head=head->next;
    }
    return cnt;
}
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* tmp=head;
        int cnt = lengthOfLL(head);
        for(int i=0; i<(cnt/2)-1; i++){
            tmp=tmp->next;
        }
        ListNode* deleteNode = tmp->next;
        tmp->next=tmp->next->next;
        delete deleteNode;
        return head;
    }
};
 */
