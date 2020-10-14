class Solution {
public:
    int getMaxMoney(vector<int>& nums, int count, bool ind, vector<int> &dp) {
        if(count<0&&!ind) {
            return 0;
        } else if(count<=0 && ind) {
            return 0;
        }
        if(dp[count]!=-1) {
            return dp[count];
        }
        
       dp[count] = max(nums[count]+getMaxMoney(nums,count-2,ind,dp),getMaxMoney(nums,count-1,ind,dp));
       return dp[count];
    }
    
    int rob(vector<int>& nums) {
        if(nums.size()==0) {
            return 0;
        } else if(nums.size()==1) {
            return nums[0];
        }
        int n=nums.size();
        vector<int> dp(n+1,-1);
        vector<int> dp1(n+1,-1);
       int val1 = getMaxMoney(nums,nums.size()-2,false,dp);
       int val2 = getMaxMoney(nums,nums.size()-1,true,dp1);
       return max(val1,val2);
    }
};
