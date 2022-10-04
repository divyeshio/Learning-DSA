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
    int helper(TreeNode* root){
        if(!root){
            return 0;
        }        
        int x=helper(root->left);
        int y=helper(root->right);
        int ans=1+max(x,y);
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int left=helper(root->left);
        int right=helper(root->right);
        int x=left+right;
        int y=diameterOfBinaryTree(root->left);
        int z=diameterOfBinaryTree(root->right);
        int ans=max(x,max(y,z));
        return ans;
    }
    
    
};