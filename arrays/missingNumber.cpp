class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans, res1=0, res2=0;
        for(int i=0;i<nums.size();i++) {
            res1 = res1^nums[i];
        }

        for(int i=1;i<=nums.size();i++) {
            res2 = res2^i;
        }     
        ans = res1^res2;   
        return ans;
    }
};