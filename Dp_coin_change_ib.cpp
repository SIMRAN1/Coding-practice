int count( vector<int> &S, int m, int n,vector<vector<int>> &dp) 
{ 
    if(dp[m][n]!=-1) {
        return dp[m][n];
    }
    
    
    if (n == 0) 
        return dp[m][n]=1; 
        
    if (m <=0 && n >= 1) 
        return dp[m][n]=0; 
    
    if (n < 0 || m < 0 ) 
        return dp[m][n]=0; 
  
    
    
  
    
      dp[m][n]=count( S, m - 1, n,dp );
      dp[m][n] = dp[m][n]+count( S, m, n-S[m-1],dp); 
      if(dp[m][n]==66)
      //cout<<"dcd"<<m<<" "<<n;
      return dp[m][n];
} 

int Solution::coinchange2(vector<int> &A, int B) {
    int m=A.size();
    int n=B;
    vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
    for(int i=0;i<=m;i++)  {
        for(int j=0;j<=n;j++) {
            cout<<dp[i][j]<<" ";
        }
    }
   // cout<<"dvjdbv";
    int res = count(A,m,n,dp);
    // for(int i=0;i<=m;i++)  {
    //     for(int j=0;j<=n;j++) {
    //         cout<<dp[i][j]<<" ";
    //     }
    // }
    return dp[m][n];
}
