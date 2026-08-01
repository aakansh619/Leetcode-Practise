class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int sum = 0; 
        int temp = n;
        while(n){
            int digit = n%10;
            int a = digit*digit*digit;
            sum += a;
            n=n/10;
        }
        if(temp == sum) return true;
        return false;
    }
};
