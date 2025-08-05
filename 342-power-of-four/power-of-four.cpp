class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false; // Power of 4 must be positive
        if ((n & (n - 1)) != 0) return false; // Must be a power of 2 (only one bit set)
        return (n & 0x55555555) != 0; // Ensure the set bit is in an odd position (1, 4, 16, 64, etc.)
    }
};
