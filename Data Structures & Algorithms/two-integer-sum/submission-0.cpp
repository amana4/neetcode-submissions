class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int,int> remaining;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        int need = target - nums[i];
        if(remaining.find(need)!=remaining.end())
        {
           return {remaining[need],i};
        }
        //add the index
        remaining[nums[i]] = i;
    }    
     
    return {-1,-1};

    }
};
