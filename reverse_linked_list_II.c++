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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==NULL || head->next==NULL) return head;
        if(left==right) return head;
        ListNode* prev=head;
        ListNode* curr=head;
        ListNode* temp=head;
        ListNode* start=head;
        int count=0;
        int l=left;
       
        while(left>=1 && temp!=NULL)
        {
            
            prev=temp;
            if(left==1)
            {
                break;
            }
            start=temp;
            temp=temp->next;
            left--;
        }
        if(prev!=NULL) curr=prev->next;
        int r=right-l;
        while(curr!=NULL && r>=1)
        {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            r--;
        }
        if(temp!=NULL) temp->next=curr;

        if(start!=NULL && l!=1) start->next=prev;
        if(l==1) return prev;
        return head;


        
    }
};