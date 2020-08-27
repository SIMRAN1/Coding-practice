/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int maxPathSumHelper(TreeNode* A,int &res) {
     if(A==NULL) {
         return 0;
     }
     int l = maxPathSumHelper(A->left,res);
     int r = maxPathSumHelper(A->right,res);
     
     int ms = max(max(l,r)+A->val,A->val);
     int m21 = max(ms,l+r+A->val);
      res = max(res,m21);
      return ms;
 }
 
int Solution::maxPathSum(TreeNode* A) {
    if(A==NULL) {
        return 0;
    }
    int res=INT_MIN;
    int val = maxPathSumHelper(A,res);
    return res;
}
