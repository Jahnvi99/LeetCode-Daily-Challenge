/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *>s;
        while(headA!=NULL){
            s.insert(headA); 
            headA=headA->next;   
        }
        int new_size=s.size(),size=s.size();
        while(headB!=NULL){
            s.insert(headB);
            new_size=s.size();
            if(new_size==size)return headB;
            size=new_size;
            headB=headB->next;
        }
        return NULL;
    }
};
