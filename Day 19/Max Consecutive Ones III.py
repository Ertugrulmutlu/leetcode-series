class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        n, right = len(nums), 0
        left = 0
        temp_k = k
        max_temp = 0

        while right < n:
            if nums[right] == 0:
                temp_k -= 1


            while temp_k < 0:
                if nums[left] == 0:
                    temp_k += 1
                left += 1

            max_temp = max(max_temp, right - left + 1)
            right += 1

        return max_temp
