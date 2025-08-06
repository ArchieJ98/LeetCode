#include <iostream>
#include <algorithm>

class Solution {
public:
    std::string reverseWords(std::string s) {
        int start = 0; // Start index of a word
        int n = s.size();
        
        for (int i = 0; i <= n; i++) { // Iterate through the string
            if (i == n || s[i] == ' ') { // When we reach a space or end of the string
                std::reverse(s.begin() + start, s.begin() + i); // Reverse the word
                start = i + 1; // Move to the next word
            }
        }
        
        return s;
    }
};

