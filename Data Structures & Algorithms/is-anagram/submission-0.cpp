class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hashSet(26, 0);

        for(char i : s){
            hashSet[i - 'a']++;
        }

        for(char i : t){
            hashSet[i - 'a']--;
        }

        for(auto i : hashSet) {
            if(i != 0) return false;
        }

        return true;
    }
};
