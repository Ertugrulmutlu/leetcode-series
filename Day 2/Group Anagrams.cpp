# include <vector>
# include <string>
# include <unordered_map>
# include <algorithm>
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    groups.reserve(strs.size());
    for(string word: strs){
        string key = word;
        sort(key.begin(), key.end());
        groups[key].push_back(move(word));
    }
    vector<vector<string>> result;
    result.reserve(groups.size());
    for (auto &kv : groups){
        result.push_back(kv.second);
    }
    return result;
    }
};
