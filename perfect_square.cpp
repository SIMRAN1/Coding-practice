class Solution {
public:
    int is_square(int n)
    {  
        int sqrt_n = (int)(sqrt(n));  
        return (sqrt_n*sqrt_n == n);  
    }
    
    int nHelper(int n,vector<int> &arr,vector<int> &dp) {
        if(n==0) {
            return 0;
        }
        if(dp[n]!=-1) {
            return dp[n];
        }
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]<=n) {
               int count = 1+nHelper(n-arr[i],arr,dp);
               mini=min(count,mini);
            }
        }
        return dp[n]=mini;
    }
    
    int numSquares(int n) {
        vector<int> arr;
        for(int i=1;i<=n;i++) {
            if(is_square(i)) {
                arr.push_back(i);
            }
        }
      
        vector<int> dp(n+1,-1);
        
       int count = nHelper(n,arr,dp);
        return count;
    }
};
