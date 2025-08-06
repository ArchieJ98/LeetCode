class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        long long int temp = 0;
        int l = nums.size()-1;
        if(nums[0] == 0){ans.push_back(true);}
        else{ans.push_back(false);}
        temp = nums[0];

        for(int x=1 ; x<=l; x++)
        {
            temp = (temp << 1) | nums[x];

            if((temp % 5) == 0){ans.push_back(true);}
            else{ans.push_back(false);}
            temp %= 5;
        }
        return ans;
    }
};