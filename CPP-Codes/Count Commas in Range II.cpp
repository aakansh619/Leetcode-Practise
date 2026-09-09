class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999) return 0;

        long long tc = 0;
        long long st = 1000;

        while(st <= n){
            tc += n - st + 1;
            st *= 1000;
        }

        return tc;
    }
};
