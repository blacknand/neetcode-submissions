class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> posMap;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (posMap.count(diff))
                return {posMap[diff], i};
            else
                posMap.insert({nums[i], i});
        }

        return {};
    }
};
