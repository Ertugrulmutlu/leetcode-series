class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = 0
        right = len(nums) - 1
        start, end =-1,-1
        if len(nums) ==0:
            return[-1,-1]

        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                start = mid
            if nums[mid] >= target:
                right = mid - 1
            else:
                left = mid + 1
        if start == -1:
            return [-1,-1]
        left =0
        right = len(nums)-1

        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                end= mid
            if nums[mid] <= target:
                left = mid + 1
            else:
                right = mid -1

        return[start,end]
