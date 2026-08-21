class Solution {
public:
    bool solve(vector<int>& arr, int i) {
        int n = arr.size();
         if (i < 0 || i >= n || arr[i] == -1)
            return false;
           if (arr[i] == 0)
            return true;
        int jump = arr[i];
         arr[i] = -1;
        bool a = solve(arr, i + jump);
        bool b = solve(arr, i - jump);

        return a || b;
    }

    bool canReach(vector<int>& arr, int start) {
        return solve(arr, start);
    }
};