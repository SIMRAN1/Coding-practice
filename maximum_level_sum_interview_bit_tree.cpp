/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solveHelper(TreeNode* A,map<int,int> &mp,int level) {
     if(A==NULL) {
         return;
     }
     mp[level]+=A->val;
     solveHelper(A->left,mp, level+1);
     solveHelper(A->right,mp, level+1);
 }
int Solution::solve(TreeNode* A) {
    if(A==NULL) {
        return 0;
    }
 int level=0;
 map<int,int> mp;
 solveHelper(A,mp,0);
 int res=0;
 for(auto i:mp) {
     res=max(res,i.second);
 }
 return res;
}
