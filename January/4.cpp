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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL&&l2==NULL)return NULL;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode *head=new ListNode();
        if(l1->val<=l2->val){
            head->val=l1->val;
            l1=l1->next;
        }
        else {
            head->val=l2->val;
            l2=l2->next;
        }
        ListNode *temp1=head;
        while(l1!=NULL&&l2!=NULL){
            ListNode *temp=new ListNode();
            if(l1->val<=l2->val){
                temp->val=l1->val;
                l1=l1->next;
            }
            else{
                temp->val=l2->val;
                l2=l2->next;
            }
            temp1->next=temp;
            temp1=temp;
        }
        if(l1!=NULL)temp1->next=l1;
        else if(l2!=NULL)temp1->next=l2;
        return head;
    }
};