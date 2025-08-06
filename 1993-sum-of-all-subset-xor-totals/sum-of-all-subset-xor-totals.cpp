class Solution {
public:
    int func(int i,int total,vector<int>& nums){
        //base case
        if(i == nums.size()){
            return total;
        }

        //take
        return func(i+1,total^nums[i],nums) + func(i+1,total,nums);
    }
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return func(0,0,nums);
    }
};