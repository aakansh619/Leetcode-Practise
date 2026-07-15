class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int od = 1;
        int ev = 2;
        int sum1 = 0, sum2 = 0;

        while(n){
            sum1 += od;
            sum2 += ev;

            od += 2;
            ev += 2;

            n--;
        }
        return gcd(sum1,sum2);
    }
};
