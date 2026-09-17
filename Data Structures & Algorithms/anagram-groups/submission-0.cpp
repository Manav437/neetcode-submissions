class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(auto i : strs) {
            string curr = i;
            sort(i.begin(), i.end());
            mpp[i].push_back(curr);
        }

        vector<vector<string>> res;
        for(auto i : mpp) {
            res.push_back(i.second);
        }
        return res;
    }
};
