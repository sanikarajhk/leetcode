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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* temp=head;
        ListNode* del=head->next;
        while(del!=NULL)
        {
            if(del->val==temp->val)
            {
                ListNode* m=del;
                temp->next=del->next;
                del=del->next;
                delete m;
            }
            else
            {
                temp=temp->next;
                del=del->next;

            }
        }
        return head;
        
    }
};