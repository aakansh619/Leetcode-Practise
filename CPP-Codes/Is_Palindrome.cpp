class Solution {
public:
    //TCS prep
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<10) return true;

        string s = to_string(x);
        string a = "";

        for(int i =0; i<s.size(); i++){
            a.push_back(s[i]);
        }
        reverse(a.begin() , a.end());

        if(s == a) return true;
        return false;
        
    }
};
