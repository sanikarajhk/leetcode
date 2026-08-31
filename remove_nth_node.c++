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
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count==1 && n==1) return NULL;
        int m=count-n;
        if(m==0)
        {
            ListNode* m=head;
            head=head->next;
            delete m;
            return head;
        }
        if(head==NULL) return NULL;
        temp=head;
        ListNode* del=head->next;
        for(int i=1;i<m;i++)
        {
            if(temp!=NULL && del!=NULL)
            {
            temp=temp->next;
            del=del->next;
            }
        }
        ListNode* p=del;
        if(temp!=NULL && del!=NULL)
        {
        temp->next=del->next;
        }
        delete p;
        return head;

    }
};
