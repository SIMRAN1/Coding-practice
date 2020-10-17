/* https://www.interviewbit.com/problems/find-permutation/  */
vector<int> Solution::findPerm(const string A, int B) 
{
    vector<int> arr(B,0);
    int x=0,i;
    for(i=0;i<B-1;i++)
    {
        if(A[i]=='D')
        arr[i+1]=--x;
        else
        arr[i+1]=++x;
    }
    int mn=999999;
    for(int i:arr)
    {
        if(i<mn)
        mn=i;
    }
    mn=abs(mn);
    for(i=0;i<B;i++)
    {
        arr[i]+=mn+1;
    }
    return arr;
}
