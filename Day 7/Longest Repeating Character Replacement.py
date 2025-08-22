class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = defaultdict(int)
        left,max_freq,best = 0,0,0

        for right,ch in enumerate(s):
            count[ch] +=1
            max_freq = max(max_freq, count[ch])
            while (right - left +1) - max_freq > k:
                count[s[left]] -= 1
                left += 1
           
            best = max(best, right - left +1)
       
        return best
