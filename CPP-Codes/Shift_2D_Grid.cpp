class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int>ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans.push_back(grid[i][j]);
            }
        }

        deque<int> dq(ans.begin(),ans.end());

        while(k){
            int a = dq.back();
            dq.pop_back();
            dq.push_front(a);
            k--;

        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                grid[i][j] = dq.front();
                dq.pop_front();
            }
        }
        return grid;
    }
};
