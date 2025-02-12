/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned == nullptr) return nullptr;
        if(cloned->val == target->val) return cloned;

        TreeNode* res = getTargetCopy(original,cloned->left,target);
        if(!res) res = getTargetCopy(original,cloned->right,target);

        return res;

    }
};