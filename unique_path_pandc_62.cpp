class Solution {
public:
    
    int comb(int n,int r)
    {
        double init=1;
        for(int i=0;i<r;i++)
        {
            init=init*(n-i)/(r-i);
        }
        int ans=init;
        if(init-ans>=0.5)
        return ans+1;
        else
        return ans;
    }
    int uniquePaths(int m, int n) 
    {
       return comb(m+n-2,n-1);
    }
};
