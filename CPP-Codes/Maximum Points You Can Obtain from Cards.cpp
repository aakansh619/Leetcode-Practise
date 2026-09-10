class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        reverse(nums.begin() , nums.end());
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        if(k >= nums.size()) return sum;

        int maxS = sum;
        int l = k-1, r = nums.size()-1;

        while(l >= 0){
            sum = sum - nums[l] + nums[r];
            maxS = max(maxS, sum);
            l--;
            r--;
        }

        return maxS;
    }
};
