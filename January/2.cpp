class Solution {
public:
    TreeNode *ans=NULL;
    void TargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original==NULL) return;
        if(original==target) ans=cloned;
        if(original->left!=NULL){
            TargetCopy(original->left,cloned->left,target);
        }
        if(original->right!=NULL){
            TargetCopy(original->right,cloned->right,target);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TargetCopy(original,cloned,target);
        return ans;
    }
};
