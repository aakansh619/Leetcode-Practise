class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int sqSum=0;
        while(n){
            int digit=n%10;
            sum+=digit;
            sqSum+=digit*digit;
            n=n/10;
        }
        int diff = sqSum-sum;
        if(diff>=50){
            return true;
        }
        return false;
    }
};
