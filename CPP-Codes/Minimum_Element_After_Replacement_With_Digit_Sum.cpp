class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> after;

        for(int i=0; i<nums.size(); i++){
            int sum=0;
            while(nums[i] > 0){
                sum += nums[i]%10;
                nums[i] /= 10;
            }
            after.push_back(sum);
        }
        return *min_element(after.begin(), after.end());
    }
};
