class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxVal = 0;

        for(int i=0; i<nums.size(); i++){
            if(i > maxVal) return false;
            maxVal = max(maxVal, i + nums[i]);
        }

        return true;
    }
};
