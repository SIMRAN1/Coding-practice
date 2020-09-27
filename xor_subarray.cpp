int Solution::solve(vector<int> &A) {
    int n=A.size();
    if(n%2==0) {
        return 0;
    }
    int ans=0;
    for(int i=0;i<n;i+=2){
        ans=ans^A[i];
    }
    return ans;
}
