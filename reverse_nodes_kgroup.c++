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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        int count=0;
        while(curr!=NULL && count<k)
        {
            count++;
            curr=curr->next;
        }
        if(count<k) return head;
        curr=head;
        for(int i=0;i<k;i++)
        {
            if(curr!=NULL)
            {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            }
        }
        head->next=reverseKGroup(curr,k);
        return prev;

        
    }
};