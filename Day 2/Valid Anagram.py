class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        new_s = ''.join(sorted(s))
        new_t = ''.join(sorted(t))
        print(new_s)
        if new_s == new_t:
            return True
        else:
            return False
