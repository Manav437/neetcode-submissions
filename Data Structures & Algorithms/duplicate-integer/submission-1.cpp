class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            if(mpp.find(nums[i]) != mpp.end()) {
                return true;
            }
            else {
                mpp[nums[i]]++;
            }
        }
        return false;
    }
};

// (1 -> 1)
// (2 -> 1)
// (3 -> 2)
// ...