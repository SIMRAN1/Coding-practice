class Solution {
public:
    int numberOfSteps (int num) {
        int c=0;
        while(num>0) {
           // int a = num&1;
            //cout<<a<<" ";
        if(!(num & 1)) {
            num=num>>1;
           // cout<<num<<endl;
        } else {
            num=num-1;
        }
        c++;
      }
        return c;
    }
};
