class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;

        int count = 0;
        int prev = INT_MIN;
        for(int num : nums){
            if(num == prev)count++;
            else{
                prev = num;
                count = 1;
            }
            if(count <= k){
                ans.push_back(num);
            }
        }
        return ans;
    }
};
