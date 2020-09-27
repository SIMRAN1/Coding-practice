int Solution::solve(int A) {
    int flag=0;
    int no=1;
    int count=0;
    int c1=1;
    
    while(c1<34) {
        //cout<<A<<no<<(A&no)<<" ";
        if((A&no)) {
            flag=1;
            break;
        } else {
            count++;
        }
        c1++;
        no=no*2;
    }
    return count;
}
