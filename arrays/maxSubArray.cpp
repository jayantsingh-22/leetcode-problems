class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int maxCurrent = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        maxCurrent = max(nums[i], nums[i] + maxCurrent);
        maxSum = max(maxSum, maxCurrent);
    }

    return maxSum;
}
};