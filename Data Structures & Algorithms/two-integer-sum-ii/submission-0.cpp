class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        // numbers = [1,2,2,2,3,4], target = 3
        while (l < r) {
            if (numbers[l] + numbers[r] > target) r--;
            else if (numbers[l] + numbers[r] < target) l++;
            else return vector<int>{l + 1, r + 1};
        }
        return vector<int>();
    }
};
