class Solution {
public:
    int xorOperation(int n, int start) {
        int k=0;
        int res=0;
        while(k<n) {
           res^=(start+2*k);
           k++;
        }
        return res;
    }
};
