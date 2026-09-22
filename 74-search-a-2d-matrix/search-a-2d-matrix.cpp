class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int colums = matrix[0].size();
        int l = 0;
        int h = row*colums -1;
        while(l<=h){
            int mid = l+(h-l)/2;
            int r = mid / colums;
            int c = mid % colums;
            if (matrix[r][c] == target) {
                return true;
            } else if (matrix[r][c] < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        
        return false;
    }
};