class Solution {
public:
    double dp[105][105];

    double rec(vector<int>& nums, int curr, int k) {
 
        if (curr == nums.size()) {
            if (k == 0) return 0;
            return -1e9;
        }

       
        if (k == 0)
            return -1e9;

        if (dp[curr][k] != -1.0)
            return dp[curr][k];

        double sum = 0;
        double ans = 0;

        for (int i = curr; i < nums.size(); i++) {
            sum += nums[i];
            double avg = sum / (i - curr + 1);

            ans = max(ans, avg + rec(nums, i + 1, k - 1));
        }

        return dp[curr][k] = ans;
    }

    double largestSumOfAverages(vector<int>& nums, int k) {

        for (int i = 0; i < 105; i++)
            for (int j = 0; j < 105; j++)
                dp[i][j] = -1.0;

        return rec(nums, 0, k);
    }
};