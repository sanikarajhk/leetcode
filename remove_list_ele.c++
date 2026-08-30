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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
       while(head!=NULL && head->val==val)
       {
            ListNode* m=head;
            head=head->next;
            delete m;
        
       }
        ListNode* temp=head;
        if(head==NULL) return NULL;
        ListNode* del=head->next;
        while(del!=NULL)
        {
            if(del->val==val)
            {
                temp->next=del->next;
                del=del->next;
                continue;
            }
            temp=temp->next;
            del=del->next;

        }
        return head;
        

        
    }
};