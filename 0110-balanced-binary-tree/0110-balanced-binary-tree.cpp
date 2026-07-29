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

    int height(TreeNode* root){

        if(root == 0){
            return 0;
        }

        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int ans = max(leftheight,rightheight) + 1;
        return ans;
    }

    bool isBalanced(TreeNode* root) {
        
        if(root == NULL){
            return true;
        }

        int height1 = height(root->left);
        int height2 = height(root->right);

        int diff = abs(height1- height2);

        if(diff > 1){
            return false;
        }
        else{
            //matlab root node balance hai
            //ab hm recursion se left aur right node check krenge

            bool left_balance = isBalanced(root->left);
            bool right_balance = isBalanced(root->right);

            if(left_balance == true && right_balance == true){
                return true;
            }
            else{
                return false;
            }
        }

    }
};