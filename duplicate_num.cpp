class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hair = nums[nums[0]];
        int slow = nums[0];
        while(hair!=slow) {
            hair= nums[nums[hair]];
            slow = nums[slow];
        }
       // cout<<slow;
        hair = 0;
        while(slow!=hair) {
            slow=nums[slow];
            hair=nums[hair];
        }
        return slow;
    }
};
