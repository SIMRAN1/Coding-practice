class Solution {
public:
    bool static compare(int a,int b) {
        int val = __builtin_popcount(a);
        int val2 = __builtin_popcount(b);
        if(val==val2) {
            return a<b;
        }
        return val < val2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};
