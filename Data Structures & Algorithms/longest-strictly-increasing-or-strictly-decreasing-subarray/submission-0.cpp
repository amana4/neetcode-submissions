class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        if(nums.size()==0) return 0;

        int max_inc =1, max_dec =1;
        int current_inc=1, current_dec=1; 
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]> nums[i])
            {
                current_dec++;
                max_inc = max(max_inc, current_inc);
                current_inc=1;

            }
            else if(nums[i-1]<nums[i])
            {
                current_inc++;
                max_dec = max(max_dec, current_dec);
                current_dec=1;
            }
            else
            {
                max_dec = max(max_dec, current_dec);
                max_inc = max(max_inc, current_inc);
                current_dec=1;
                current_inc=1;
            }

        } 
        max_dec = max(max_dec, current_dec);
        max_inc = max(max_inc, current_inc);

        return max(max_dec, max_inc);

        
    }
};