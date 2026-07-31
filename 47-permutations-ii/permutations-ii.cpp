class Solution {
public:

    void permutations( vector<int>& nums, vector<bool>& seen,vector<int>& current, vector<vector<int>>& res
    ) {

        if (current.size() == nums.size()) {
            res.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

             if (seen[i])
                continue;

           
            if (i > 0 && nums[i] == nums[i - 1] && !seen[i - 1])
                continue;

            
            seen[i] = true;
            current.push_back(nums[i]);

           
            permutations(nums, seen, current, res);

             current.pop_back();
            seen[i] = false;
        }
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> res;
        vector<int> current;

        vector<bool> seen(nums.size(), false);

        permutations(nums, seen, current, res);

        return res;
    }
};