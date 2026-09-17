class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> mpp;

        for(int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if(mpp.find(diff) != mpp.end()) {
                res.push_back(mpp.find(diff)->second);
                res.push_back(i);
                return res;
            }
            mpp[nums[i]] = i;
        }

        return res;
    }
};
