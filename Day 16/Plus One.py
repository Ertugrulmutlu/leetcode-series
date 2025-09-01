class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        new_int = int(''.join(map(str, digits)))
        new_int += 1
        liste = [int(x) for x in str(new_int)]
        return liste
