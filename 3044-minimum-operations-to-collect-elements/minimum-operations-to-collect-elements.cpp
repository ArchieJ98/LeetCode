class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        int set =0;
        unordered_map<int, int> map;
        for(int i=(nums.size()-1); i>=0;i--)
        {
            if((nums[i] <= k) && (map[nums[i]] == 0))
            {
                map[nums[i]]++;
                set++;
            }
            
            if(set == k){
                count++;
                return count;}
            else{count++;}
        }
        return count;
    }
};