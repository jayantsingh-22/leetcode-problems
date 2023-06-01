class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int num:nums) {
            sum+=num;
            int diff = sum-k;
            if(m.count(diff)) {
                count+=m[diff];
            }
            m[sum]++;
        }
        return count;
    }
};