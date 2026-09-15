// class Solution {
// public:
//     bool isMiddleElementUnique(vector<int>& nums) {
//         unordered_map<int,int> mp;

//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         if(mp[nums[nums.size()/2]]==1) return true;
//         return false;
//     }
// };

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();

        int m = n/2;
        int num = nums[m];
        int count = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == num) count++;
        }
        return count == 1;
    }
};
