class Solution {
public:
    int trailingZeroes(int n) {
        if(n==0) {
            return 0;
        }
        int n1 = n/5;
        return n1+trailingZeroes(n1);
    }
};
