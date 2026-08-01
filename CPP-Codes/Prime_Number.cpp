class Solution {
  public:
//TCS prep
    bool isPrime(int n) {
        if(n <= 1) return false;
         
        if(n == 2 and n == 3) return true;
         
        for(int i=2; i<=sqrt(n); i++){
            if(n % i == 0) return false;
        } 
        return true;
        
    }
};
