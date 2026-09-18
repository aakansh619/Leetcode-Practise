class Solution {
public:
    int nthUglyNumber(int n) {
        int ugly = 1;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        set<long long> st;
        vector<int> fac = {2,3,5};

        pq.push(1);
        st.insert(1);

        for(int i=0; i<n; i++){
            ugly = pq.top();
            pq.pop();

            for(int j=0; j<fac.size(); j++){
                long long nt = (long long)ugly * fac[j];

                if(!st.count(nt)){
                    st.insert(nt);
                    pq.push(nt);
                }
            }
        }

        return ugly;
        
    }
};
