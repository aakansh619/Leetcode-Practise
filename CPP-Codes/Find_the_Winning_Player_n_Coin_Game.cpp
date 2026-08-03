class Solution {
public:
    string winningPlayer(int x, int y) {
        bool ans = false;
        while(x > 0 && y > 3){
            x-=1;
            y-=4;
            ans=!ans;
        }

        if(ans)return "Alice";
        return "Bob";
    }
};
