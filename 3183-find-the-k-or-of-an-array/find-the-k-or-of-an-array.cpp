class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            int count = 0;
            for (const auto n : nums)
                if (n & 1 << i)
                    ++count;

            if (count >= k)
                res |= 1 << i;
        }

        return res;
    }
};