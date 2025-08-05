class Solution {
public:
    int hammingWeight(int n) {
        int c;
        while (n > 0)
        {
            if(n%2 == 1) {c++;}
            
            n = n/2;
        }
        return c;
    }
};