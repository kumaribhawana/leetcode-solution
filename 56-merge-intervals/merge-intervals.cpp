class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {

            vector<int> ab = ans.back();

            if (ab[1] >= intervals[i][0]) {
                ans.pop_back();
                ab[1] = max(ab[1], intervals[i][1]);
                ans.push_back(ab);
            } else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};