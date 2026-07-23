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
        
        
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }

        if(count==n)
        {
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }

        
        int final=count-n;
        temp=head;

        for(int i=1;i<final;i++)
        {
        temp=temp->next;
        }
        ListNode* deletenode=head;
        deletenode=temp->next;
        temp->next=temp->next->next;
        delete(deletenode);
        return head;
    }
};
