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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
       
        int count=0;
        ListNode* temp=head;
        ListNode* end=head;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        count++;
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        ListNode* start=temp2;
        while(temp2!=NULL && temp2->next!=NULL && temp2->next->next!=NULL)
        {
            temp1->next=temp2->next->next;
            ListNode* next1=temp2->next;
            ListNode* next2=temp2->next->next;
            temp2->next=temp1;
            end=temp1;
            temp1=next1;
            temp2=next2;
          

        }
        if(end!=head)
        {
        end->next=temp2;
        }
        temp2->next=temp1;
        if(count%2!=0)
        {
            temp1->next=temp;
            temp->next=NULL;
        }
        else
        {
        temp1->next=NULL;
        }
        return start;
        
    }
};