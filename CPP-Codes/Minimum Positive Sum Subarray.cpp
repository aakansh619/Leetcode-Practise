class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size(),minimum=INT_MAX;

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){

                sum+=nums[j];

                if(sum>0 and j-i+1>=l and j-i+1<=r){
                    minimum=min(minimum,sum);
                }
            }
        }

        return minimum==INT_MAX?-1:minimum;
        
    }
};
