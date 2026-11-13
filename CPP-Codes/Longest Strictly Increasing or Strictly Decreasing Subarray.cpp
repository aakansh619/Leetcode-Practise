class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len = 1;
        int res = INT_MIN;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                len++;
                res = max(res,len);
            }else{
                len = 1;
            }
        }

        len = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                len++;
                res = max(res,len);
            }else{
                len = 1;
            }
        }
        return res == INT_MIN ? 1 : res;
    }
};
