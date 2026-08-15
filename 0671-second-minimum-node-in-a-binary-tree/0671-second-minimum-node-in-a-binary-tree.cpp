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

    void inorderTraversal(TreeNode* root, vector<int> &arr){

        if(root == NULL){
            return;
        }

        arr.push_back(root->val);
        inorderTraversal(root->left,arr);
        inorderTraversal(root->right,arr);

    }

    int findSecondMinimumValue(TreeNode* root) {
        
        vector<int> arr;

        inorderTraversal(root,arr);

        sort(arr.begin(),arr.end());

        int n = arr.size();

        int mini = INT_MAX;

        for(int x : arr){
            if(x < mini){
                mini = x;
            }
        }

        for(int y : arr){

            if(y > mini){
                return y;
            }
        }

        return -1;

    }
};