class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        last = {}
        left, best =0,0
        for right, char in enumerate(s):
            if char in last and last[char] >= left:
                left = last[char] +1
            last[char] = right
            best = max(best,right-left+1)
        return best
