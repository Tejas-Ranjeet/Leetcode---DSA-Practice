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

    int maxLength(TreeNode* root){

        //base case
        if(root == NULL){
            return 0;
        }

        int leftheight = 1 + maxLength(root->left);
        int rightheight = 1 + maxLength(root->right);
        int ans = max(leftheight,rightheight);
        return ans;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        int option1 = maxLength(root->left) + maxLength(root->right);
        int option2 = diameterOfBinaryTree(root->left);
        int option3 = diameterOfBinaryTree(root->right);
        int ans = max(option1,max(option2,option3));

        return ans;
    }
};