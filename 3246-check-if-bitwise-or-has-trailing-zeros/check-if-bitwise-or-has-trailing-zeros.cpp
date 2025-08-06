class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int flag =0;
        for(int x=0; x<nums.size();x++)
        {
            for(int y=1; y<nums.size(); y++)
            {
               if((x!=y) &&((nums[x] | nums[y]) & 1) == 0)
               {
                return true;
               }
            }
        }
        
        return false;
    }
};