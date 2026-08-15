class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();
        int g = goal.length();
        if (n != goal.length()) {
            return false;
        }
        if (s == goal) {

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {

                    if (s[i] == s[j]) {
                        return true;
                    }
                }
            }
          return false;
        }
         vector<int> diff;
         for (int i = 0; i < n; i++) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }
        if (diff.size() != 2) {
            return false;
        }
         swap(s[diff[0]], s[diff[1]]);
         return s == goal;
    }
};