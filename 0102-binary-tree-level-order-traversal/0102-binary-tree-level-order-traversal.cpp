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
    vector<vector<int>> levelOrder(TreeNode* root) {
        int depth = d(root);
        vector<vector<int>> ans(depth);
        pre(root,0,ans);
        return ans;
    }
    int d(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        return max(d(root->left),d(root->right))+1;
    }
    void pre(TreeNode* root,int d, vector<vector<int>>& ans)
    {
        if(root==NULL)
            return;
        ans[d].push_back(root->val);
        pre(root->left,d+1,ans);
        pre(root->right,d+1,ans);
    }
};