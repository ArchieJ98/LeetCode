class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> map;
        map.reserve(nums.size());
        int res = 0;

        for(int x=0; x<nums.size();x++)
        {
            map[nums[x]]++;
        }
        for(int i=0; i<map.size();i++)
        {
            if(map[i] == 2)
            {
                res ^= i;
            }
        }
        return res;
    }
};