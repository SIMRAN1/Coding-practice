class Solution {
public:
    int robHelper(vector<int> &nums,int n, vector<int> &dp) {
        if(n<0) {
            return 0;
        }
        if(dp[n]!=-1) {
            return dp[n];
        }
       return dp[n] = max(nums[n]+robHelper(nums,n-2,dp),robHelper(nums,n-1,dp));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0) {
            return 0;
        }
        int n=nums.size()-1;
        vector<int> dp(n+1,-1);
        int res = robHelper(nums,n,dp);
        return dp[n];
    }
};
