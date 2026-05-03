class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int maxSoFar = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                current++;
            }

            if (nums[i] == 0) {
                current = 0;
            }

            maxSoFar = max(maxSoFar, current);
        }

        return maxSoFar;
    }
};