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

    int max_depth(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int left_height = max_depth(root->left) + 1;
        int right_height = max_depth(root->right) + 1;
        int ans = max(left_height,right_height);

        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }

        int option1 = max_depth(root->left) + max_depth(root->right);
        int option2 = diameterOfBinaryTree(root->left);
        int option3 = diameterOfBinaryTree(root->right);

        int ans = max(option1,max(option2,option3));

        return ans;
    }
};