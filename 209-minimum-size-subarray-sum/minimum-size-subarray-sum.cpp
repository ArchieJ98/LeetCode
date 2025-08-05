class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        int i =0;
        int j =0;
        int res = INT_MAX;

        while(j<nums.size())
        {
            sum += nums[j];
            while(sum >= target)
            {
                sum -= nums[i];
                res = min(res, j-i+1);
                i++;
            }
            j++;
        }
        if(res == INT_MAX)
        {
            return 0;
        }
        else
            return res;
    }
};