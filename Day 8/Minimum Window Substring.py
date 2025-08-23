class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t) > len(s):
            return ""
        need = Counter(t)
        window = {}

        have, need_count = 0, len(need)
        res,res_len = [-1,-1], float("inf")
        left = 0
        for right,char in enumerate(s):
            window[char] = window.get(char,0) +1

            if char in need and window[char] == need[char]:
                have +=1
            while have == need_count:
                if (right - left -1) < res_len:
                    res = [left,right]
                    res_len = right - left -1

                window[s[left]] -= 1
                if s[left] in need and window[s[left]] < need[s[left]]:
                    have -=1
                left +=1
        l,r = res
        return s[l:r+1] if res_len != float("inf") else ""
