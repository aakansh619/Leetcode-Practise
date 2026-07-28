class Solution {
  public:
    
    int dp[201][10001];
    
    int solve(vector<int> &arr , int sum , int idx){
        
        if(sum == 0) return 1;
        if(dp[idx][sum] != -1){
            return dp[idx][sum];
        }
        if(sum < 0) return 0;
        if(idx >= arr.size()) return 0;
        
        int take = solve(arr , sum - arr[idx] , idx+1);
        int skip = solve(arr , sum , idx+1);
        
        return dp[idx][sum] = take or skip;
        
    }
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        memset(dp , -1 , sizeof(dp));
        return solve(arr, sum , 0);
        
    }
};
