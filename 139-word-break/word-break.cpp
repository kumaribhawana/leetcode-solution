class Solution {
public:
    unordered_set<string> st;
    vector<int> dp;
    int n;

    bool solve(int idx, string &s) {

        if (idx >= n) {
            return true;
        }

       
        if (dp[idx] != -1) {
            return dp[idx];
        }

        for (int l = 1; l <= n - idx; l++) {

            string temp = s.substr(idx, l);

            if (st.find(temp) != st.end() &&
                solve(idx + l, s)) {

                return dp[idx] = true;
            }
        }

        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        n = s.length();

        dp.assign(n, -1);

        for (string &word : wordDict) {
            st.insert(word);
        }

        return solve(0, s);
    }
};