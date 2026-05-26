class Solution {
public:
    int passwordStrength(string ps) {
        unordered_set<char>st(ps.begin(),ps.end());
        int res = 0;

        for(char c : st){
            if( c >= 'a' && c<='z'){
                res+=1;
            }else if(c>='A' && c<='Z'){
                res+=2;
            
            }else if(c>='0' && c<='9'){
                res+=3;
            
            }else if(c=='!' || c=='#' || c == '@' || c == '$'){
                res+=5;
            }
        }
return res;
    }
};
