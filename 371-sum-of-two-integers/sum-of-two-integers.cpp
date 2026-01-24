class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1; // positions needing carry
            a = a ^ b;                               // sum without carry
            b = (int)carry;                          // carry to add next
        }
        return a;
    }
};