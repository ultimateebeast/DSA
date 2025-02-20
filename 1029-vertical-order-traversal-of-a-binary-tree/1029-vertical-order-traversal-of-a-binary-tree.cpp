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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int,int,int>>node;

        dfs(root,0,0,node);

        sort(node.begin(),node.end());
        vector<vector<int>>res;
        int col = INT_MIN;
        for(auto [h,l,val] : node){
            if(h!=col){
                res.push_back({});
                col = h;
            }
            res.back().push_back(val);
        }
        return res;
    }
private:
    void dfs(TreeNode* root,int h , int l , vector<tuple<int,int,int>>&node){
        if(root == nullptr) return;

        node.push_back({h,l,root->val});
        
        dfs(root->left,h-1,l+1,node);
        dfs(root->right,h+1,l+1,node);
    }
};