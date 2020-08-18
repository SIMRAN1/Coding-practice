int Solution::solve(vector<vector<int> > &a) {
    int n=a.size();
    int m=a[0].size();
    int grid[n][m];
    grid[0][0]=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i==0&&j==0) {
                
            } else if(i==0&&j!=0) {
                if(a[i][j]>a[i][j-1]) {
                    grid[i][j]=grid[i][j-1]+1;
                } else {
                    grid[i][j]=-1;
                }
            } else if(j==0&&i!=0) {
                if(a[i][j]>a[i-1][j]) {
                    grid[i][j]=grid[i-1][j]+1;
                } else {
                    grid[i][j]=-1;
                }
            } else {
                if(grid[i-1][j]==-1 && grid[i][j-1]==-1)
                return -1;
                if(a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]) {
                grid[i][j]=max(grid[i][j-1]+1,grid[i-1][j]+1);
                } else if(a[i][j]>a[i][j-1]) {
                     grid[i][j]=grid[i][j-1]+1;
                } else if (a[i][j]>a[i-1][j]) {
                     grid[i][j]=grid[i-1][j]+1;
                }
            }
        }
    }
    if(grid[n-1][m-1]==0) {
        return -1;
    }
    return grid[n-1][m-1];
}
