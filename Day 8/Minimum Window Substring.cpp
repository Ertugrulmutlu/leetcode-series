using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        int need[128] = {0}, window[128] = {0};
        int needKinds = 0;


        for (char c : t) {
            if (need[(unsigned char)c] == 0) needKinds++;
            need[(unsigned char)c]++;
        }

        int formed = 0;
        int bestLen = INT_MAX;
        int bestL = 0;
        int l = 0;

        for (int r = 0; r < (int)s.size(); ++r) {
            unsigned char c = s[r];
            window[c]++;

            if (need[c] > 0 && window[c] == need[c]) {
                formed++;
            }


            while (formed == needKinds) {
                if (r - l + 1 < bestLen) {
                    bestLen = r - l + 1;
                    bestL = l;
                }
                unsigned char lc = s[l];
                window[lc]--;
                if (need[lc] > 0 && window[lc] < need[lc]) {
                    formed--;
                }
                l++;
            }
        }

        return (bestLen == INT_MAX) ? "" : s.substr(bestL, bestLen);
    }
};
