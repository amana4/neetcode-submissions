class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      std::unordered_map<int,int> count;
      bool dupe_present = false;
      for(auto num:nums)
       {
         count[num]++;
         if(count[num]>1)
         {
           dupe_present = true;
           break;
         }
        }
       return dupe_present;
       
    }
};