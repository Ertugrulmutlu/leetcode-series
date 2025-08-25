class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n = (int)nums1.size();
        if (n % 2 == 1) {
            return static_cast<double>(nums1[n/2]);
        } else {
            long long a = nums1[n/2 - 1];
            long long b = nums1[n/2];
            return (a + b) / 2.0;
        }
    }
};
