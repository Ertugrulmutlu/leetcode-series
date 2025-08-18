class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int left = 1, right= 1;
        vector<int> ans(n);

        //add ones in vector ans
        for(int i = 0; i < n;i++){
            ans[i] = 1;
        }

        // Left pass: ans[i] holds product of all elements to the left of i
        for(int i = 0; i < n; i++){
            ans[i] *= left;
            left *= nums[i];
        }

        //Right pass: accumulate product of elements to the right and multiply in-place
        for(int i = n-1; i >= 0; i--){
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};
