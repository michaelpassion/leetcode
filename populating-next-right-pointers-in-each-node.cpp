/**
 *  Definition for binary tree with next pointer.
 *  struct TreeLinkNode {
 *   int val;
 *   TreeLinkNode *left, *right, *next;
 *   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
    TreeLinkNode *leftwall = root;
    TreeLinkNode *accross;
    if(root)
    while(leftwall->left) {
        accross = leftwall;
        if(accross->left && accross ->right)
            accross->left->next=accross->right;
        while(accross->next) {
            accross->right->next = accross->next->left;
            accross= accross->next;
            accross->left->next = accross->right;
        }
        accross->next = NULL;
        
        leftwall=leftwall->left;
    }
    }
};
