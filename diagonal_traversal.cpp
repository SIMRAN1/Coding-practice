/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void preorder(TreeNode*root, map<int,vector<int>> &mp, int val){
     if(!root) return;
     mp[val].push_back(root->val);
     preorder(root->left, mp, val + 1);
     preorder(root->right, mp, val);
 }
vector<int> Solution::solve(TreeNode* A) {
    map<int,vector<int>> mp;
    vector<int> ans;
    preorder(A, mp, 0);
    for(auto x:mp)
        for(int a:x.second)
            ans.push_back(a);
    return ans;
}
