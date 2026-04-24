class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count=0;
        int L = 0;
        int R = 0;
        int Dash = 0;
        for(int i=0; i<moves.length(); i++){
           if(moves[i] == 'L'){
            L++;
           }
           else if(moves[i] == 'R'){
            R++;
           }
           else{
            Dash++;
           }
        }
        int maximum = max(L,R)+Dash;
        return maximum-min(L,R);

    }
};
