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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        stack<TreeNode*>s;
        stack<TreeNode*>t;
        s.push(root);
        while(!s.empty()){
            TreeNode* node = s.top();
            s.pop();
            t.push(node);
            if(node->left != NULL) s.push(node->left);
            if(node->right != NULL) s.push(node->right);
        }
        while(!t.empty()){
            ans.push_back(t.top()->val);
            t.pop();
        }
        return ans;
    }
};