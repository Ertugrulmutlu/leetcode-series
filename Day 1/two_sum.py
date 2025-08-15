class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for z in range(0, len(nums)):
            for i in range(z + 1, len(nums)):
                if (nums[z] + nums[i]) == target:
                    return [z, i]
