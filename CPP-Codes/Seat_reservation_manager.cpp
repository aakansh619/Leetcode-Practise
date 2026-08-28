//Most optimized

class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int seat_marker;
    SeatManager(int n) {
        seat_marker=1;
    }
    
    int reserve() {
        if(!pq.empty()){
            int seat = pq.top();
            pq.pop();
            return seat;
        }
        int seat = seat_marker;
        seat_marker++;
        return seat;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

//OPTIMIZED
class SeatManager {
public:
    vector<int> vec;
    int N;
    SeatManager(int n) {
        N = n;
        vec.resize(N+1,-1);
    }
    
    int reserve() {
        for(int i=1; i<N+1; i++){
            if(vec[i] == -1){
                vec[i]=1;
                return i;
            }
        }
        return -1;
    }
    
   void unreserve(int seatNumber) {
        vec[seatNumber] = -1;
    }
};

//Brute Force
class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    SeatManager(int n) {
        for(int i=1; i<=n; i++){
            pq.push(i);
        }
    }
    
    int reserve() {
        int seat = pq.top();
        pq.pop();
        return seat;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};



/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
