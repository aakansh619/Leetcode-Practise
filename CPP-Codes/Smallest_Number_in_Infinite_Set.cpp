class SmallestInfiniteSet {
public:
    int start;
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_set<int> add;
    SmallestInfiniteSet() {
        start=1;
    }
    
    int popSmallest() {
        
        if(!pq.empty()){
            int small = pq.top();
            pq.pop();
            add.erase(small);
            return small;
        }
        return start++;
    }
    
    void addBack(int num) {
        if(num < start && add.find(num) == add.end()){
            pq.push(num);
            add.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
