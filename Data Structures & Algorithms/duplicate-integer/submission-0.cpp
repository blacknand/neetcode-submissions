class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> table;
        for (const int& i : nums) {
            if (table.count(i))
                return true;
            else
                table.insert({i, 1});
        }

        return false;
    }
};