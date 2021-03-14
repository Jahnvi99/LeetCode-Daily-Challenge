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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int size=v.size();
        int temp=v[k-1];
        v[k-1]=v[size-k];
        v[size-k]=temp;
        ListNode* head_n=new ListNode(v[0]);
        ListNode* temp1= head_n;
        for(int i=1;i<size;i++){
            ListNode* temp=new ListNode(v[i]);
            temp1->next=temp;
            temp1=temp;
        }
        return head_n;
    }
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int listLength = 0;
        ListNode* currentNode = head;
        // find the length of linked list
        while (currentNode) {
            listLength++;
            currentNode = currentNode -> next;
        }
        // fix the front node at kth node
        ListNode* frontNode = head;
        for (int i = 1; i < k; i++) {
            frontNode = frontNode -> next;
        }
        //fix the end node at (listLength - k)th node
        ListNode* endNode = head;
        for (int i = 1; i <= listLength - k; i++) {
            endNode = endNode -> next;
        }
        // swap the values of front node and end node
        int temp = frontNode -> val;
        frontNode -> val = endNode -> val;
        endNode -> val = temp;
        return head;   
    }
};
