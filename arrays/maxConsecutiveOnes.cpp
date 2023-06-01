class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current=0,maxCount=0;

        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                current +=1;
            }else {
                maxCount = max(current, maxCount);
                current = 0;
            }
             maxCount = max(current, maxCount);
        }
        return maxCount;
    }
};