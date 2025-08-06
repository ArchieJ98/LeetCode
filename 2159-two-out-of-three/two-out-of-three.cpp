class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
       unordered_set<int> resultSet; // Stores final unique results
        unordered_set<int> set1(nums1.begin(), nums1.end()); // Unique values from nums1
        unordered_set<int> set2(nums2.begin(), nums2.end()); // Unique values from nums2
        unordered_set<int> set3(nums3.begin(), nums3.end()); // Unique values from nums3
        
        // Check numbers in set1
        for (int num : set1) {
            if (set2.count(num) || set3.count(num)) {
                resultSet.insert(num);
            }
        }
        
        // Check numbers in set2 (only need to check set3, set1 already covered)
        for (int num : set2) {
            if (set3.count(num)) {
                resultSet.insert(num);
            }
        }
        
        // Convert set to vector
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};