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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* bef=head;
        ListNode* temp=head;
        ListNode* aft=head;
        while(temp!=NULL)
        {
            if(temp->val>=x)
            {
                aft=temp;
                break;
            }
            temp=temp->next;

        }
        ListNode* afthead=aft;
        
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                bef=temp;
                break;
            }
            temp=temp->next;

        }
        ListNode* befhead=bef;
        

        temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                
               
                if(temp!=befhead)
                {

                    bef->next=temp;
                    bef=bef->next;
                    
                }
       

            }
            else
            {
                if(temp!=afthead)
                {
                    aft->next=temp;
                    aft=aft->next;
                    
                }

            }
            temp=temp->next;
        }
        if(befhead->val<x)
        {
        bef->next=afthead;
        }
        if(aft->val>=x)
        {
        aft->next=NULL;
        }
        else
        {
            bef->next=NULL;
        }

     
       
        return befhead;


        
    }
};