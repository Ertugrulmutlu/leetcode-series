class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size() && nums[i] < k){
            i += 1;
        }
        return i;
    }
};
