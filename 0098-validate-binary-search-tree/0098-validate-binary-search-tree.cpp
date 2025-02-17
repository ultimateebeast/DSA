
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MIN,LONG_MAX);
    }
private: 
    bool check(TreeNode* root,long min,long max){
        if(!root) return true;
        if(root->val <= min || root->val >= max) return false;

        return check(root->left,min,root->val) && check(root->right,root->val,max);
    }
};