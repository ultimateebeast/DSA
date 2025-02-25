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
private:
    void inOrder(TreeNode* root, int &count){
        if(root == nullptr) return;
        count++;
        inOrder(root->left,count);
        inOrder(root->right,count);
    }
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;
        if(!root->left && !root->right) return 1;

        int count = 0;

        inOrder(root,count);

        return count;
        
    }
};