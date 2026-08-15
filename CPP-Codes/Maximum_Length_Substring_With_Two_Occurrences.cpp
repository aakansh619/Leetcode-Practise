class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = INT_MIN;

        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> mp;
            for (int j = i; j < s.size(); j++) {
                mp[s[j]]++;
                if (mp[s[j]] <= 2) {
                    ans = max(ans, j - i + 1);
                } else {
                    break;
                }
            }
        }

        return ans;
    }
};
