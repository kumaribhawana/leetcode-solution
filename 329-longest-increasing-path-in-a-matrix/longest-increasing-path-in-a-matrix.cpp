class Solution {
public:
    int row = 0;
    int col = 0;
     int longestIncreasingPath(vector<vector<int>>& matrix) {
        row = matrix.size();
        col = matrix[0].size();
        int ans = 0;
        vector<vector<int>> memo(row, vector<int>(col, -1));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans = max(ans, maxPath(memo, matrix, i, j));
            }
        }
        return ans;
    }
        bool validCell(int i, int j) {
        if (i < 0 || j < 0 || i >= row || j >= col)
            return false;
             return true;
         }
     int maxPath(vector<vector<int>>& memo, vector<vector<int>>& matrix,int i, int j) {
        if (memo[i][j] != -1)
            return memo[i][j];
         int top = 0;
        int bottom = 0;
        int left = 0;
        int right = 0;
        if (validCell(i - 1, j) &&
            matrix[i - 1][j] > matrix[i][j]) {
            top = maxPath(memo, matrix, i - 1, j);
        }
           if (validCell(i + 1, j) &&
            matrix[i + 1][j] > matrix[i][j]) {
            bottom = maxPath(memo, matrix, i + 1, j);
        }
         if (validCell(i, j - 1) &&matrix[i][j - 1] > matrix[i][j]) {
            left = maxPath(memo, matrix, i, j - 1);
        }
         if (validCell(i, j + 1) && matrix[i][j + 1] > matrix[i][j]) {
            right = maxPath(memo, matrix, i, j + 1);
        }
        int ans = 1 + max({top, bottom, left, right});

        memo[i][j] = ans;

        return ans;
    }
};