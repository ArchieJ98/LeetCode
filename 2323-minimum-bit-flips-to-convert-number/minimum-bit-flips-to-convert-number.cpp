class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;

        int temp = start ^ goal;

        while(temp>0)
        {
            if(temp%2 == 1){count++;}
            temp /= 2;
        }
        return count;
    }
};