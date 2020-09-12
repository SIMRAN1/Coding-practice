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
    TreeNode* mergeTreesHelper(TreeNode* t1, TreeNode* t2) {
        TreeNode* root = NULL;
        if(t1==NULL&&t2==NULL) {
         return NULL;
        }else if(t1==NULL) {
         root = new TreeNode(0+t2->val);
         root->left = mergeTreesHelper(NULL,t2->left);
         root->right = mergeTreesHelper(NULL,t2->right);
         return root;
        }else if(t2==NULL) {
         root = new TreeNode(t1->val+0);
         root->left = mergeTreesHelper(t1->left,NULL);
         root->right = mergeTreesHelper(t1->right,NULL);
         return root;
        } else {
        root = new TreeNode(t1->val+t2->val);
        }
        root->left = mergeTreesHelper(t1->left,t2->left);
        root->right = mergeTreesHelper(t1->right,t2->right);
        return root;
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL&&t2==NULL) {
            return NULL;
        }
        if(t1==NULL) {
            return t2;
        }
        if(t2==NULL) {
            return t1;
        }
       return mergeTreesHelper(t1,t2);
    }
};
