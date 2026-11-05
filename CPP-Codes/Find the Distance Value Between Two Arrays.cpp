class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        int count=0;

        for(int curr:arr1){
            bool flag=false;
            for(int i=0;i<arr2.size();i++){

                if(abs(curr-arr2[i])<=d){
                    flag=true;
                    break;
                }
            }

            if(!flag) count++;
        }

        return count;
        
    }
};
