class Solution {
public:

    bool check(int n, vector<string>& board, int i, int j) {

        int row = i, col = j;

        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q')
                return false;

            row--;
            col--;
        }

        
        row = i;
        col = j;

        while (row >= 0 && col < n) {
            if (board[row][col] == 'Q')
                return false;

            row--;
            col++;
        }

        return true;
    }


    void find(int row,
              int n,
              vector<vector<string>>& ans,
              vector<string>& board,
              vector<bool>& column) {

       
        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int j = 0; j < n; j++) {

            if (column[j] == false && check(n, board, row, j)) {

                
                column[j] = true;
                board[row][j] = 'Q';

               
                find(row + 1, n, ans, board, column);

                
                board[row][j] = '.';
                column[j] = false;
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        vector<bool> column(n, false);

        find(0, n, ans, board, column);

        return ans;
    }
};