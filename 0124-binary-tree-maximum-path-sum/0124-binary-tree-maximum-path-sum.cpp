class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        // if(root->val <= 0) return 0;
        check(root,maxi);

        return maxi;
    }
private:
    int check(TreeNode* root,int &maxi){
        if(root == nullptr) return 0;

        int lh = max(0,check(root->left,maxi));
        int rh = max(0,check(root->right,maxi));

        maxi = max(maxi,lh+rh+root->val);

        return (root->val) + max(lh,rh);
    }
};