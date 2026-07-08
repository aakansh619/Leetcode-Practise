class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();

        set<vector<int>> st;

        for(int i=0; i<n-2; i++){

            int l=i+1 , h=n-1;
            while(l<h){
                int sum = nums[i] + nums[l] +nums[h];
                if(sum==0){
                    st.insert({nums[i], nums[l], nums[h]});
                    l++;
                    h--;
                }
                else if(sum > 0){
                    h--;
                }
                else{
                    l++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto &x:st){
            ans.push_back(x);
        }
        return ans;
    }
};
