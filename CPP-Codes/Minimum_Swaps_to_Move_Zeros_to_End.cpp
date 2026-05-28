class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) zero++;
        }

        int cnt = 0;

        for(int i=nums.size()-1; i>=0; i--){
            if(zero == 0) break;
            if(nums[i] != 0){
                cnt++;
                zero--;
            }else{
                zero--;
            }
        }

        return cnt;
    }
};
