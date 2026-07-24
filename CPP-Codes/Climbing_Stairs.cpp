class Solution {
public:
    int arr[46]={}; // For memoization
    int climbStairs(int n) {
        if(n <= 3) return n;

        if (arr[0] == 0) {
            fill(arr, arr + 46, -1); // Filling of a array
        }

        if(arr[n] !=-1)return arr[n];

        int step1 = climbStairs(n-1);
        int step2 = climbStairs(n-2);

        arr[n] = step1+step2; // storinng the elements

        return arr[n];
         
    }
};
