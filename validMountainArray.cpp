class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) {
            return false;
        }
        int c1=0;
        int c2 = 0;
        int i=0;
        for(i=0;i<arr.size()-1;i++) {
            if(arr[i+1]-arr[i]>0) {
                c1++;
            } else {
                break;
            }
        }
        while(i<arr.size()-1) {
            if(arr[i+1]-arr[i]<0) {
                c2++;
            } else {
                break;
            }
            i++;
        }
        if(c1+c2==arr.size()-1 && c1>0 && c2>0) {
            return true;
        }
        return false;
    }
};
