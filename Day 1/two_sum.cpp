class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = 0;
        int max = nums.size();
        for (x; x < max; x++) {
            for (int y = x + 1; y < max; y++) {
                if ((nums[x] + nums[y]) == target) {
                    return {x, y};
                }
            }
        }
        return {};
    }
};
