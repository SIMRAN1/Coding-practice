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
    TreeNode* xParent = NULL;
    TreeNode* yParent = NULL;
    int xDepth = -1, yDepth = -2;
    void dfsHelper(TreeNode* root,TreeNode* parent, int x, int y,int depth) {
        if(root==NULL) {
            return;
        }
        if(x==root->val) {
            xDepth = depth;
            xParent = parent;
        } else if(y==root->val) {
          yDepth = depth;
          yParent = parent;  
        } else {
           dfsHelper(root->left,root,x,y,depth+1); 
           dfsHelper(root->right,root,x,y,depth+1); 
        }
        
    }
    bool isCousins(TreeNode* root, int x, int y) { 
        if(root==NULL) {
            return false;
        }
       dfsHelper(root,NULL,x,y,0);
        return xDepth==yDepth && xParent!=yParent;
    }
};
