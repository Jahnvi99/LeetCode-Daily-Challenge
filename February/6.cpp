class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>result;
        if(root==NULL)return result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            TreeNode* temp;
            while(size!=0){
                temp=q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                size--;
            }
            result.push_back(temp->val);
        }
        return result;
    }
};
