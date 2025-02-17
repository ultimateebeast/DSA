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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>>level;
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int x = q.size();
            vector<int>temp;

            for(int i=0;i<x;i++){
                TreeNode* v = q.front();
                q.pop();

                if(v->left!=nullptr) q.push(v->left);
                if(v->right!=nullptr) q.push(v->right);

                temp.push_back(v->val);
            }
            level.push_back(temp);
        }

        vector<double>res;

        for(int i=0;i<level.size();i++){
            int col = level[i].size();
            double v = 0.0;
            for(int j=0;j<col;j++){
                v+=level[i][j];
            }
            double r = v/(double)col;
            res.push_back(r);
        }

        return res;
    }
};