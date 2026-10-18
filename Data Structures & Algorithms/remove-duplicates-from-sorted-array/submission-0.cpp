class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> visited;

        /*
        visited={1}
        nums=[1,2,3,4]
        i = 2
        */

        for (int i = 0; i < nums.size(); i++) {
            if (visited.contains(nums[i])) {
                nums.erase(nums.begin() + i);
                i--;
            } else {
                visited.insert(nums[i]);
            }
        }

        return visited.size();
    }
};