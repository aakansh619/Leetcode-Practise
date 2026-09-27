class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> check;
        string ans;

        for(char ch:s){
            if(ch == '('){
                check.push_back(int(ans.size()));
            }
            else if(ch == ')'){
                int st = check.back();
                check.pop_back();

                reverse(ans.begin()+st,ans.end());
            }else{
            ans.push_back(ch);
            }
        }
        return ans;
    }
};
