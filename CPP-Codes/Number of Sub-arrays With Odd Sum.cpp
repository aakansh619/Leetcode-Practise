class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD=1e9+7;
        int odd=0,even=1,sum=0,count=0;

        for(auto curr:arr){
            sum+=curr;
            if(sum%2==0){
                count=(count+odd)%MOD;
                even++;
            }else{
                count=(count+even)%MOD;
                odd++;
            }
        }

        return count;
    }
};
