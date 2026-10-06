class Solution {
public:

    int t[101][101];

    int findMaxForm(vector<string>& strs, int m, int n) {
         memset(t, 0, sizeof(t));
          for (int k = 0; k < strs.size(); k++) {
            int zeros = 0;
            int ones = 0;
             for (int j = 0; j < strs[k].length(); j++) {

            if (strs[k][j] == '0')
              zeros++;
             else
           ones++;
}            for (int i = m; i >= zeros; i--) {
             for (int j = n; j >= ones; j--) {
                 t[i][j] = max( t[i][j], 1 + t[i - zeros][j - ones] );
                }
            }
        }
     return t[m][n];
    }
};