class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin(), nums.end());
        int longestSeq = 0;

        for(int num:numSet) {
            if(numSet.find(num-1) == numSet.end()) {
                int currentNum = num;
                int currentSeq = 1;
                
                while(numSet.find(currentNum+1) != numSet.end()) {
                    currentNum++;
                    currentSeq++;
                }
                longestSeq = max(longestSeq, currentSeq);
            }
            
        }
        return longestSeq;
    }
};