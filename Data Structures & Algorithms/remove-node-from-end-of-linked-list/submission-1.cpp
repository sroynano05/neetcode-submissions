/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return head;
        if(head->next==nullptr) {
            head=nullptr;
            return head;
        }
        ListNode*temp=head;
        int k=0;
        while(temp!=nullptr){
            ++k;
            temp=temp->next;
        }
        int l=k-n+1;
        if(l==1) return head->next;
        temp=head;
        while(temp!=nullptr){
            --l;
            if(!(l-1)){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};
