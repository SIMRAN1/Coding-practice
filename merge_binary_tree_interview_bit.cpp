/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    TreeNode* root;
    if(!A&&!B) {
        return NULL;
    } else if(!A) {
        return B;
    } else if(!B) {
        return A;
    } else if(A!=NULL && B!=NULL) {
        root=new TreeNode(A->val+B->val);
        root->left = solve(A->left,B->left);
        root->right = solve(A->right,B->right);
    } 
    return root;
}
