class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans = s + s;
        
        int l=0, r=s.size()-1;

        while(r < ans.size()){
            string check = ans.substr(l,r-l+1);
            if(check == goal) return true;
            l++;
            r++;
        }

        return false;
    }
};
