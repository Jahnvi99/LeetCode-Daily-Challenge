/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int size=0;
        while(!q.empty()){
            size=q.size();
            double sum=0;
            double n=size;
            while(size-->0){
                TreeNode* p=q.front();
                q.pop();
                sum+=p->val;
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }
            ans.push_back(sum/n);
        }
        return ans;
    }
};
