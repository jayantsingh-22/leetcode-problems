class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>unomap;
        for(int i=0;i<nums.size(); ++i) {
            if(unomap.find(target-nums[i]) != unomap.end()) {
                ans.push_back(unomap[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            unomap[nums[i]] = i;
        }
        return ans;
    }
};