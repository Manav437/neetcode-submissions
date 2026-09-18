class Solution {
    static bool comparator(pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second;
    }

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> res;

        for(auto i : nums) {
            mpp[i]++;
        }

        vector<pair<int, int>> freq;
        for(auto i : mpp) {
            freq.push_back({i.first, i.second});
        }

        sort(freq.begin(), freq.end(), comparator);
        
        for(int i = 0; i < k; i++) {
            res.push_back(freq[i].first);
        }

        return res;
    }
};
