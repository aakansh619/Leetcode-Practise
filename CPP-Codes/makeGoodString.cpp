class Solution {
public:
    string makeGood(string s) {
        string res="";

        for(char ch : s){
            if(!res.empty() && (res.back() + 32 == ch || res.back() - 32 == ch))
            res.pop_back();
            else{
                res+=ch;
            }
        }
        return res;
    }
  
};
