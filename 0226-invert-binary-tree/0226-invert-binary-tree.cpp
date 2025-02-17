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
    TreeNode* invertTree(TreeNode* root) {
        check(root);
        return root;
    }
private:
    void check(TreeNode* root){
        if(root == nullptr) return ;

        TreeNode* r = root->right;
        root->right = root->left;
        root->left = r;

        check(root->left);
        check(root->right);
    }
};