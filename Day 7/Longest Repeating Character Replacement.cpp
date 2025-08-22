class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0, best = 0, maxFreq = 0;

        for (int right = 0; right < (int)s.size(); ++right) {
            int r = s[right] - 'A';
            freq[r]++;
            maxFreq = max(maxFreq, freq[r]);

            while ((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            best = max(best, right - left + 1);
        }
        return best;
    }
};
