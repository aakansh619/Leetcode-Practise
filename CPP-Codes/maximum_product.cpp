class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       sort(nums.begin() , nums.end());
       int high=nums.size()-1;
       int mid=high-1;
       int low=mid-1;

       int max1=(nums[high] * nums[mid] * nums[low]); 
       int max2=(nums[0] * nums[1] * nums[high]);
       return max(max1 , max2);
    }
};
