class Solution {
public:
    int robHelper(vector<int> nums,int n) {
        if(n<0) {
            return 0;
          }
        return max(robHelper(nums,n-1),nums[n]+robHelper(nums,n-2));
    }
    int rob(vector<int>& nums) {
        int n= nums.size()-1;
        return robHelper(nums,n);
    }
};
