class Solution {
public:
    string shortestPalindrome(string s) {
        long long prefix = 0;
        long long suffix = 0;
        long long base = 29;
        long long power = 1;
        long long mod = 1000000007;

        int lastIndex = -1;

        for (int i = 0; i < s.size(); i++) {
            long long ch = s[i] - 'a' + 1;

            prefix = (prefix * base) % mod;
            prefix = (prefix + ch) % mod;

            suffix = (suffix + ch * power) % mod;
            power = (power * base) % mod;

            if (prefix == suffix) {
                lastIndex = i;
            }
        }

        string rem = s.substr(lastIndex + 1);
        reverse(rem.begin(), rem.end());

        return rem + s;
    }
};