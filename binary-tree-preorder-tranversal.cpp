/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void preorderTraverse(TreeNode *root, vector<int> &num)
    {
        if(root)
        num.push_back(root->val);
        else return;
        preorderTraverse(root->left,num);
        preorderTraverse(root->right,num);
    }
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int>num;
        preorderTraverse(root,num);
        return num;
    }
};
