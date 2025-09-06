class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        n,right =len(s), len(p)

        if right > n:
            return []

        need = Counter(p)
        window = Counter(s[:right])
        start_index = []
        if need == window:
            start_index.append(0)
        for i in range(right, n):
            window[s[i]] += 1
            left_c = s[i- right]
            window[left_c] -=1
            if window[left_c] == 0:
                del window[left_c]
            if window == need:
                start_index.append(i - right + 1)
        return start_index
