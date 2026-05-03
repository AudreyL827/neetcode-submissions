class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> counts;

        for (int i = 0; i < s.size(); i++) {
            counts[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            counts[t[i]]--;
        }
        for (auto x : counts) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
};
