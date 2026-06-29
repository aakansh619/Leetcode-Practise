class Solution {
public:
    int numOfStrings(vector<string>& arr, string s) {
        int cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            int l = 0, r = arr[i].size() - 1;
            if (r + 1 > s.size())
                continue;
            while (r < s.size()) {
                string a = s.substr(l, r - l + 1);

                if (a == arr[i]) {
                    cnt++;
                    // cout << a << endl;
                    break;
                }

                l++;
                r++;
            }
        }

        return cnt;
    }
};
