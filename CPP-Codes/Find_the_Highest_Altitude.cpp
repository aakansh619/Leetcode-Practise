class Solution {
public:
    int largestAltitude(vector<int>& nums) {
       int sum = 0;
        int maxAlt = sum;  
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];  
            maxAlt = max(maxAlt, sum);  
        }
        
        return maxAlt;  
    }
};
