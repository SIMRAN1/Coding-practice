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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL) {
            return false;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool even=true;
        bool res1=true;
        while(!q.empty()) {
            int size = q.size();
            int prevVal = even? INT_MIN: INT_MAX;
            while(size-->0) {
                TreeNode* root = q.front();
                q.pop();
                if(even && (root->val % 2 == 0 || root->val <= prevVal)) return false; 
                if(!even && (root->val % 2 == 1 || root->val >= prevVal)) return false;
                prevVal = root->val;
                if(root->left!=NULL) {
                    q.push(root->left);
                }
                if(root->right!=NULL) {
                    q.push(root->right);
                }
                
            }
            even=!even;
        }
        return res1;
    }
};
