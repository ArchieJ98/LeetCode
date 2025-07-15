class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med;
        for(int n: nums2)
        {
            nums1.push_back(n);
        }
        sort(nums1.begin(), nums1.end());
        int l = nums1.size();
        if(l%2 == 0)
        {
            med = (double)(nums1[(l/2)-1] + nums1[(l/2)])/2;
            return med;
        }
        else
        {
            med = (double)(nums1[(l/2)]);
            return med;
        }

    }
};