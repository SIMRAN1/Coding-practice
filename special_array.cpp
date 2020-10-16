class Solution {
public:
    int specialArray(vector<int>& nums) {
        int res=-1;
        int c=0;
        for(int i=nums.size();i>0;i--) {
            c=0;
            for(int j=0;j<nums.size();j++) {
                if(nums[j]>=i) {
                    c++;
                }
            }
            if(c==i) {
                res=i;
            }
        }
        return res;
    }
    
};
