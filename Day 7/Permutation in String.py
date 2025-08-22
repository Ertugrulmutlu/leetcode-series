class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n,m = len(s1), len(s2)
        if n > m:
            return False

        need = Counter(s1)
        window = Counter(s2[:n])

        if window == need:
            return True

        for i in range(n, m):
            add_char = s2[i]
            rem_char = s2[i-n]

            window[add_char] +=1
            window[rem_char] -=1

            if window[rem_char] == 0:
                del window[rem_char]

            if window == need:
                return True
        return False
