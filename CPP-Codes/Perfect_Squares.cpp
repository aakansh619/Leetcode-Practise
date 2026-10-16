class Solution {
public:
    int numSquares(int n) {

        vector<int>temp;

        for(int i=1;i*i<=n;i++) {
            temp.push_back(i*i);
        }

        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;

        for(int j=1;j<=n;j++) {
            for(int i=0;i<temp.size();i++) {
                if(temp[i]<=j) {
                    dp[j]=min(dp[j],1+dp[j-temp[i]]);
                }
            }
        }

        return dp[n];
    }
};
