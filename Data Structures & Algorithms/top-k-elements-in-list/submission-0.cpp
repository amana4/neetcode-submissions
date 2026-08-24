#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

     //Freq -> vector, num 
     vector<vector<int>> freq(nums.size()+1);
     unordered_map<int,int> count;
     vector<int> result; 

     //Compute the freq of the numbers
     for(auto num:nums)
     {
        count[num]++;
     }
     
     //go thru the count hash and assign to freq
     for(const auto& entry:count)
      {
         freq[entry.second].emplace_back(entry.first);
      } 
      
      //Parse the freq table in reverse order 
      for(int i=freq.size()-1;i>=0;i--)
      {
         for(int j=0;j<freq[i].size();j++)
         {
            if(result.size()==k)
               return result;
            result.emplace_back(freq[i][j]);
         }

      } 
    
      return result; 
        
    }
};
