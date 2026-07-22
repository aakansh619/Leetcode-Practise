class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        vector<int> ro(m, 0);
        vector<int> co(n, 0);

        // Count ones in each row and column
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ro[i] += arr[i][j];
                co[j] += arr[i][j];
            }
        }

        // Calculate the difference matrix
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                arr[i][j] = 2 * (ro[i] + co[j]) - m - n;
            }
        }

        return arr;
    }
};
