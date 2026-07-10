//Hackerrank Solution

int cookies(int k, vector<int> A) {
    
    priority_queue<int , vector<int> , greater<int>>pq;
    int count=0;
    for(int i=0; i<A.size(); i++){
        pq.push(A[i]);
    }
    
    while(pq.size()>=2 && pq.top() < k){
      
      int a = pq.top();
      pq.pop();
      
      int b = pq.top();
      pq.pop();
      
      int s = a+2*b;  
      pq.push(s);
      count++; 
    }
    if(pq.top() < k){
        return -1;
    }
    return count;
    
}
