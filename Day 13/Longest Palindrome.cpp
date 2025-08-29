class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> cnt;
        int length = 0;
        bool odd = false;
        for (char c : s) cnt[c]++;
        for (auto &p : cnt) {
            length += (p.second / 2) * 2;
            if (p.second % 2) odd = true;
        }
        return odd ? length + 1 : length;
    }
};
