int Solution::adjacent(vector<vector<int> > &A) {
    int n=A[0].size();
    vector<int> dp(n,-1);
    vector<int> B;
    for(int i=0;i<A[0].size();i++) {
        B.push_back(max(A[0][i],A[1][i]));
    }
    dp[0]=B[0];
    dp[1]=max(B[0],B[1]);
    for(int i=2;i<B.size();i++) {
        dp[i]=max(B[i]+dp[i-2],dp[i-1]);
    }
    return dp[n-1];
}
