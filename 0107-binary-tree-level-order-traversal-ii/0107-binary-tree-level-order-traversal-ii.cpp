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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        if(root == nullptr) return res;
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int x = q.size();
            vector<int>temp;

            for(int i=0;i<x;i++){
                TreeNode* f = q.front();
                q.pop();

                if(f->left!=nullptr) q.push(f->left);
                if(f->right!=nullptr) q.push(f->right);
                temp.push_back(f->val);
            }
            res.push_back(temp);
        }

        reverse(res.begin(),res.end());

        return res;
    }
};