class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int ans = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        for (auto m : mp) {
            int f = m.second;
            if (f % 2 == 0) {
                ans += f;
            } else {
                ans += (f - 1);
                
            }
        }
        for (auto m : mp) {
            int f = m.second;
            if (f % 2 == 1) {
                ans++;
                break;
            }
        }
        return ans;
    }
};
