class Solution {
public:
    int minimumPushes(string word) {
     unordered_map<char,int>mp;

     int unique=0;

     for(auto curr:word){

        if(!mp.count(curr)){
            
            if(mp.size()<=8) mp[curr]=1;

            if(mp.size()>8 and mp.size()<=16) mp[curr]=2;

            if(mp.size()>16 and mp.size()<=24) mp[curr]=3;

            if(mp.size()>24) mp[curr]=4; 
        }
     }

     int ans=0;

     for(auto x:word){
       
        ans+=mp[x];
     }

     return ans;   
    }
};
