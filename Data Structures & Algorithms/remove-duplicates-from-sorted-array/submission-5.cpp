class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) return 1;
        int l = 0, r = 0;
        int n = nums.size();
        while (r < n) {
            nums[l] = nums[r];
            while (r < n && nums[l] == nums[r]) r++;
            l++;
        }
        return l;
    }
};