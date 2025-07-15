class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
        int j =0;
        int count =0;
        unordered_map<char, int> mp;

        while(j<s.size())
        {
            mp[s[j]]++;
            
            while(mp[s[j]]>1)
            {
                mp[s[i]]--;
                i++;
            }
            count = max(count, j-i+1);
            j++;
        }
        return count;
    }
};