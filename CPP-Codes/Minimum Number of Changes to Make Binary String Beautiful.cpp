class Solution {
public:
    int minChanges(string s) {
        int count=1,n=s.size(),operations=0;

        for(int i=1;i<n;i++){

            if(s[i]!=s[i-1]){

                if(count%2!=0){  

                s[i]=s[i-1];

                count++;

                operations++;

                }
                else{  

                    count=1;
                }

            }

            else{

                count++;

            }
        }

        return operations;
    }
};
