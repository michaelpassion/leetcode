/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode *> s;
        vector<int> nums;
        TreeNode *p = root;
       while(p || !s.empty()) {
           if(p) {
               s.push(p);
               p=p->left;
           } else {
               p=s.top();
               s.pop();
               nums.push_back(p->val);
               p=p->right;
           }
       }
       return nums;
    }
       
};
