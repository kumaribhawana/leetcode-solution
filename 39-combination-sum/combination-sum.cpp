class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& candidates, int target, int idx,vector<int>& curr) {
         if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (target < 0 || idx == candidates.size())
            return;
         curr.push_back(candidates[idx]);
        backtrack(candidates, target - candidates[idx], idx, curr);
        curr.pop_back(); 
        backtrack(candidates, target, idx + 1, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(candidates, target, 0, curr);
        return ans;
    }
};