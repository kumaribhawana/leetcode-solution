class Solution {
public:
    int n;
    vector<vector<int>> t;
     int solve(int i, vector<int>& coins, int amount) {
          if (amount == 0) {
            return 0;
        }
        if (i == n) {
            return 1e9;
        }
         if (t[i][amount] != -1) {
            return t[i][amount];
        }
       if (coins[i] > amount) {
            return t[i][amount] =
                solve(i + 1, coins, amount);
        }
        int take = 1 + solve(i, coins, amount - coins[i]);
        int skip = solve(i + 1, coins, amount);
          return t[i][amount] = min(take, skip);
    }

    int coinChange(vector<int>& coins, int amount) {

        n = coins.size();
         t.assign(n, vector<int>(amount + 1, -1));
         int ans = solve(0, coins, amount);
         if (ans >= 1e9) {
            return -1;
        }

        return ans;
    }
};