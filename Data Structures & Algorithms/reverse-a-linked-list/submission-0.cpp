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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        ListNode * p=head;
        ListNode* t=p->next;
        p->next=nullptr;
        while(t!=nullptr){
            ListNode * temp=t->next;
             t->next=p;
            p=t;
            t=temp;
        }
        return p;
    }
};
