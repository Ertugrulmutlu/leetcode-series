class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        if (m > n) return {};

        vector<int> need(26, 0), window(26, 0);
        for (char c : p) need[c - 'a']++;

        vector<int> res;
        int left = 0, right = 0;

        while (right < n) {
            window[s[right] - 'a']++;
            right++;

            if (right - left == m) {
                if (window == need) res.push_back(left);

                window[s[left] - 'a']--;
                left++;
            }
        }
        return res;
    }
};
