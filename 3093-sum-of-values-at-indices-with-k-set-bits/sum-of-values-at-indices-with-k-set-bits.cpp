class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans =0;
        for(int x=0; x<nums.size();x++)
        {
            int count =0;
            int temp = x;
            while(temp>0)
            {
                if(temp % 2 == 1){count++;}
                temp /= 2;
            }
            if(count == k){ans += nums[x];}
        }
        return ans;
    }
};