class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size();i++)
        {
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int j = i +1;
            int k = nums.size() -1;

            while(j<k)
            {
                int total = nums[i] + nums[j] + nums[k];
                if(total == 0)
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;

                    while (j < k && nums[k] == nums[k + 1]) k--;

                }
                else if(total<0)
                {
                    j++;
                }
                else if(total>0)
                {
                    k--;
                }
            }


        }
        return res;
    }
};