class Solution:
    def longestPalindrome(self, s: str) -> int:
        cnt = Counter(s)
        pairs = sum(v // 2 for v in cnt.values())
        return pairs * 2 + (1 if any(v % 2 for v in cnt.values())else 0)
