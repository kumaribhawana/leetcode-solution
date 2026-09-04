// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         int n = s.size();
//         for (int i = 0; i <= n; i++) {
//             for (int j = n - 1; j <= n; j--) {
//                 if (s[i] != s[j]) {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };

class Solution {
     public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        int i = 0;
        int j = n-1;

        while (i < j) {
           if (s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                return false;
            }
        }

        return true;
    }
};
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         int n = s.size();
//         for (int i = 0; i <= n; i++) {
//             for (int j = n - 1; j <= n; j--) {
//                 if (s[i] != s[j]) {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };