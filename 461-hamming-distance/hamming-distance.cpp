class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x ^ y;
        int count = 0;
        while(temp > 0)
        {
            if(temp%2 == 1){count++;}
            temp = temp/2;
        }
        return count;
    }
};