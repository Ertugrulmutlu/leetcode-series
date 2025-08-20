class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        const int n = (int)nums.size();
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;   // skip duplicate i
            if (nums[i] > 0) break;                           // early stop

            int l = i + 1, r = n - 1;
            while (l < r) {
                long long total = (long long)nums[i] + nums[l] + nums[r];
                if (total < 0) {
                    ++l;
                } else if (total > 0) {
                    --r;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    // skip duplicates on l and r
                    int lastL = nums[l], lastR = nums[r];
                    while (l < r && nums[l] == lastL) ++l;
                    while (l < r && nums[r] == lastR) --r;
                }
            }
        }
        return res;
    }
};
