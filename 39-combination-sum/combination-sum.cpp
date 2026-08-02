class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& candidates, int target, int idx,vector<int>& curr) {
         if (target == 0) { //achive
            ans.push_back(curr);
            return;
        }
        if (target < 0 || idx == candidates.size())//wrong path
            return;
         curr.push_back(candidates[idx]);//take curr element
        backtrack(candidates, target - candidates[idx], idx, curr);
        curr.pop_back(); //back
        backtrack(candidates, target, idx + 1, curr);//skip curr element
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(candidates, target, 0, curr);
        return ans;
    }
};