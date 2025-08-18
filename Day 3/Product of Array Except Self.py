class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1] * n

        # Left pass: ans[i] holds product of all elements to the left of i
        left = 1
        for i in range(n):
            ans[i] = left
            left *= nums[i]

        # Right pass: accumulate product of elements to the right and multiply in-place
        right = 1
        for i in range(n - 1, -1, -1):
            ans[i] *= right
            right *= nums[i]

        return ans
