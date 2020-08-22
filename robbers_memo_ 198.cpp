class Solution {
public:
    int robHelper(vector<int> nums,int n,vector<int> &dp) {
        
        if(n<0) {
            return 0;
          }
        if(dp[n]!=-1) {
            return dp[n];
        }
        return dp[n]=max(robHelper(nums,n-1,dp),nums[n]+robHelper(nums,n-2,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> dp(n+1,-1);
        return robHelper(nums,n,dp);
    }
};
