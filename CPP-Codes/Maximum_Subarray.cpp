class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CS = nums[0];
        int MS = nums[0];

        for(int i=1; i<nums.size(); i++){
            CS = max(nums[i],CS+nums[i]);
            MS = max(CS,MS);
        }
        return MS;
    }
};
