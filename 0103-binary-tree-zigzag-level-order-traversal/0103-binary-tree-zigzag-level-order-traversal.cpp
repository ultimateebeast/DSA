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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == nullptr) return res;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int x = q.size();
            vector<int>temp;
            for(int i=0;i<x;i++){
                TreeNode* t = q.front();
                q.pop();
                if(t->left!=nullptr) q.push(t->left);
                if(t->right!=nullptr) q.push(t->right);
                temp.push_back(t->val);
            }
            res.push_back(temp);
        }

        for(int i=0;i<res.size();i++){
            if(i%2!=0){
                reverse(res[i].begin(),res[i].end());
            }
        }
        return res;
    }
};