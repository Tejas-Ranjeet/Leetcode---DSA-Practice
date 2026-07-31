class Solution {
public:
    void levelorder(TreeNode* root, vector<vector<int>>& ans) {

        if(root == NULL)
            return;

        queue<TreeNode*> q;

        q.push(root);
        q.push(NULL);

        vector<int> level;

        while(!q.empty()) {

            TreeNode* front = q.front();
            q.pop();

            if(front == NULL) {

                ans.push_back(level);
                level.clear();

                if(!q.empty())
                    q.push(NULL);
            }
            else {

                level.push_back(front->val);

                if(front->left)
                    q.push(front->left);

                if(front->right)
                    q.push(front->right);
            }
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        levelorder(root, ans);
        return ans;
    }
};