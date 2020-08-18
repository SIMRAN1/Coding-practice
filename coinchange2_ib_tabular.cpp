#define m 1000007
int Solution::coinchange2(vector<int> &A, int B) {
    int n = A.size();
    vector<int> dp(B+1, 0);
    dp[0]=1;
    
    for(int i=1; i<=n; i++){
        for(int j=A[i-1]; j<=B; j++)
            dp[j] += dp[j-A[i-1]]%m;
    }
    
    return dp[B]%m;
}
