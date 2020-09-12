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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL || q==NULL) {
            return p==q;
        }
        bool val3=false;
        if(p->val==q->val) {
            val3 = true;
        } 
        bool val1 = isSameTree(p->left,q->left);
        bool val2 = isSameTree(p->right,q->right);
        return val1&&val2&&val3;
    }
};
