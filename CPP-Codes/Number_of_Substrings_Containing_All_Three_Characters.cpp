class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,h=0;
        unordered_map<char,int>mp;
        int count=0;
        while(h<s.size()){
            mp[s[h]]++;
            while(mp.size()==3 and l<h){
                count=count+(s.size()-h);
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            h++;
        }
        return count;
    }
};
