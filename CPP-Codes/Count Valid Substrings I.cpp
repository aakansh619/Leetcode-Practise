class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.size();
        long long count=0;
        int l=0,h=0;
        
        while(h<n){
            if(h-l+1>=3 and s[h]=='c' and s[h-1]=='b' and s[h-2]=='a'){  
                l=h-1; 
            }
            count+=h-l+1;
            h++;
        }
        
        return count;
    }
};
