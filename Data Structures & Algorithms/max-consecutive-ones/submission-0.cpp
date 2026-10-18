class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxSeq = 0;
        int tmpCounter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) 
                tmpCounter++;
            else  {
                maxSeq = max(maxSeq, tmpCounter);
                tmpCounter = 0;
            }
        }
        maxSeq = max(maxSeq, tmpCounter);
        return maxSeq;
    }
};