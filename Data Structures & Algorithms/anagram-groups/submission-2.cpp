class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (auto str : strs) {
            string cpy = str;
            sort(cpy.begin(), cpy.end());
            if (map.count(cpy)) {
                map[cpy].push_back(str);
            } else {
                vector<string> insert = {str};
                map.insert({cpy, insert});
            }
        }

        vector<vector<string>> res;
        for (auto [key, value] : map) {
            res.push_back(value);
        }

        return res;
    }
};
