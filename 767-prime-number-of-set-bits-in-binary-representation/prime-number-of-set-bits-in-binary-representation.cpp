class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        const int PRIME_MASK = 665772;  // Binary: 10100010100010100010
        int res = 0;
        for(int i=left; i<= right; i++)
        {
            int temp = i;
            int count = 0;
            while(temp>0)
            {
                count++;
                temp &= (temp - 1); 
            }
            if (PRIME_MASK & (1 << count)) {
                res++;
            }
        }
        return res;
    }
};