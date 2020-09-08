class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        for(int mid=0;mid<=j;) {
            if(nums[mid]==0) {
                swap(nums[mid],nums[i]);
                i++;
                mid++;
            } else if(nums[mid]==2) {
                swap(nums[mid],nums[j]);
                j--;
            } else {
                mid++;
            }
        }
    }
};
