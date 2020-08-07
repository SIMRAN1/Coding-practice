// Minimum Lights to Activate Interviewbit
int Solution::solve(vector<int> &v, int k) {
    int n=v.size();
    int ans=0;
    for(int i=0; i<n;i++)
    {
        int flag=0;
        for(int j=i+k-1; j>=i-k+1; j--)
        {
            if(v[j]==1){
                ans++;
                flag=1;
                i= j+k-1;
                break;
            }
        }
        if(!flag) return -1;
        
    }
    return ans;
    
}