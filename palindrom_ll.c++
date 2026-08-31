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
    bool isPalindrome(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        ListNode* slow=head;
         ListNode* fast=head;
         while(fast!=NULL && fast->next!=NULL)
         {
            slow=slow->next;
            fast=fast->next->next;
         }
         ListNode* prev=NULL;
         ListNode* curr=head;
         while(curr!=slow)
         {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
         }
         if((count%2)!=0) slow=slow->next;
         while(prev!=NULL && slow!=NULL)
         {
            if(prev->val!=slow->val)
            {
                return false;
            }
            prev=prev->next;
            slow=slow->next;
         }
         return true;
         

        
    }
};