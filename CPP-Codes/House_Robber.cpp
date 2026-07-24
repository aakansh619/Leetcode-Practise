class Solution {
public:
    int arr[101];
    int solve(vector<int> nums , int idx){
        if(idx > nums.size()-1) return 0;

        if(arr[idx] != -1) return arr[idx];

        int take = nums[idx] + solve(nums , idx+2);
        int skip = solve(nums,idx+1);

        return arr[idx] = max(take,skip);
    }
    int rob(vector<int>& nums) {
        memset (arr,-1,sizeof(arr));
        int idx = 0;
         return solve(nums , idx);

    }
};
