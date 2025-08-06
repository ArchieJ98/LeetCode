class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prevBit = n & 1; // Get the last bit
        n >>= 1; // Shift right

        while (n > 0) {
            int currBit = n & 1; // Get the current last bit
            if (currBit == prevBit) return false; // If two consecutive bits are the same, return false
            prevBit = currBit; // Update previous bit
            n >>= 1; // Shift right
        }
        return true;
    }
};
