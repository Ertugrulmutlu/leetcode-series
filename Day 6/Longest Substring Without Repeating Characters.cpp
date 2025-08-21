class Solution {
public:
    int lengthOfLongestSubstring(const std::string& s) {
        int left = 0, best = 0;
        std::vector<int> last(256, -1);

        for (int right = 0; right < (int)s.size(); ++right) {
            unsigned char ch = s[right];
            if (last[ch] >= left) {
                left = last[ch] + 1;
            }
            last[ch] = right;
            best = std::max(best, right - left + 1);
        }
        return best;
    }
};
