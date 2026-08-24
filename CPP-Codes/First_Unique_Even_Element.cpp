class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]++;
            }
        }

        for(int num: nums){
            if(num % 2 == 0 and mp[num] == 1){
                return num;
            }
        }
        return -1;
    }
};
