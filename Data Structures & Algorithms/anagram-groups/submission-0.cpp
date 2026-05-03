class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            groups[key].push_back(strs[i]);
        }
        
        vector<vector<string>> results;
        for (auto x : groups) {
            results.push_back(x.second);
        }

        return results;
    }
};
