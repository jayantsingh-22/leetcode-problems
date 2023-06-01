class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>&
    currentCombination, int start, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(currentCombination);
        return;
    }
    
    for (int i = start; i < candidates.size(); i++) {
        if (candidates[i] > target)
            break;
        
        currentCombination.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], currentCombination, i, result);
        
        currentCombination.pop_back();
    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> currentCombination;
    
    sort(candidates.begin(), candidates.end());
    
    backtrack(candidates, target, currentCombination, 0, result);
    
    return result;
    }
};