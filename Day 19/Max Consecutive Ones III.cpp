class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0;
        int temp_k = k;
        int max_temp = 0;

        while (right < n) {
            if (nums[right] == 0) {
                temp_k--;
            }

            while (temp_k < 0) {
                if (nums[left] == 0) {
                    temp_k++;
                }
                left++;
            }

            max_temp = max(max_temp, right - left + 1);
            right++;
        }

        return max_temp;
    }
};
