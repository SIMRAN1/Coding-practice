// Leaders of array IB Goldman sachs solved at one go
vector<int> Solution::solve(vector<int> &A) {
    vector<int> res;
    int n=A.size();
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--) {
        if(A[i]>max) {
            max=A[i];
            res.push_back(A[i]);
        }
    }
    return res;
}
