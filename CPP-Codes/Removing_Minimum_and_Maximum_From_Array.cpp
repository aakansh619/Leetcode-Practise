class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        
        int minn_idx = min_element(nums.begin() , nums.end()) - nums.begin();
        int max_idx  = max_element(nums.begin() , nums.end()) - nums.begin();

        int left = min(minn_idx , max_idx);
        int right = max(minn_idx , max_idx);

        int a = left+1 + n-right;
        int b = right+1;
        int c = n-left;

        return min({a,b,c});
    }
};
