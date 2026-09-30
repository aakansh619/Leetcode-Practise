class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.size());
        int count;

        for(int i=0; i<seq.size(); i++){
            if(seq[i] == '('){
                count++;
                ans[i] = count%2;
            }
            else{
                ans[i] = count%2;
                count--;
            }
        }
        return ans;
    }
};
