class Solution {
public:
    int xorOperation(int n, int start) {
        //int nums[];
        vector<int> nums(n);
        for(int i=0; i< n; i++)
        {
            nums[i] = start + 2 * i;
        }
        int res = nums[0];
        for(int j=0; j< (n-1); j++)
        {
            res ^= nums[j+1];
        }
        return res;
    }
};