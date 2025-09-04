class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        i = 0
        while i < len(nums) and nums[i] < k:
            i += 1
        return i
