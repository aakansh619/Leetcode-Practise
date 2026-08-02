class Solution {
public:
    bool stoneGame(vector<int>& nums) {
        int n = nums.size();
        bool alice = true;
        bool bob = false;

        int low = 0;
        int high = n - 1;

        while (low < high) {
            if (nums[low] > nums[high]) {
                return alice;
            }
            if (nums[low] < nums[high]) {
                return alice;
            }
            if (nums[low] == nums[high]) {
                low++;
                high--;
            }
        }
        return bob;
    }
};
