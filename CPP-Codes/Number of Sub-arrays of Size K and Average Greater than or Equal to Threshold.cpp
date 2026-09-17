class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l = 0;
        int r = k-1;
        int n = arr.size();
        vector<int> pref(n);

         pref[0] = arr[0];

        for(int i=1; i<n; i++){
            pref[i] = pref[i-1]+arr[i];
        }
        
        int count=0;

        while(r < n){
            if(l==0){
                if(pref[r]/k >= threshold) count++;
                l++; 
                r++;
            }
            else{
                if((pref[r]-pref[l-1]) / k >= threshold)count++;
                l++;
                r++;
            }
        }
        return count;
    }
};
