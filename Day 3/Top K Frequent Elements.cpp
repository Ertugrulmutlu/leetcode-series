class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // Step 1: Count frequencies
    unordered_map<int,int> freq;
    freq.reserve(nums.size()*2);
    // TODO: fill freq from nums
    for (int x : nums){
        freq[x]++;
    }
    int n = nums.size();
    vector<vector<int>> buckets(n+1);
    for (const auto& [val,f]: freq){
        buckets[f].push_back(val);
    }
    vector<int> res;
    res.reserve(k);
    for (int f = n; f >= 1 && (int)res.size() < k; --f){
        for (int val : buckets[f]){
            res.push_back(val);
            if ((int)res.size() == k) break;
        }
    }
    return res;
    }
};
