class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      std::priority_queue<int> pq;
      int n = stones.size();
      for(int i=0;i<n;i++)
      {
        pq.push(stones[i]);    
      }
      
      while(pq.size()>1)
      {  
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop(); 
        int result = x-y;
        if(result>0)
        {
            pq.push(result);
        }
      }
      return pq.empty()?0:pq.top();
        
    }
};
