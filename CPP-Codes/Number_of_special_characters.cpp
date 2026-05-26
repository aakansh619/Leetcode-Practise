class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_set<char> st(word.begin(), word.end());

        int count = 0;

        for(char i = 'a'; i <= 'z'; i++) {

            if(st.find(i) != st.end() && st.find(i - 'a' + 'A') != st.end()) {
                count++;
            }
        }

        return count;
    }
};
