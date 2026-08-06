class Solution {
public:
    bool chk(int n, int t) {
        int product = 1;
        while (n > 0) {
            product *= n % 10;
            n /= 10;
        }
        if (product % t > 0)
            return 0;
        return 1;
    }
    int smallestNumber(int n, int t) {
        for (int i = n; i <= n + 10; i++) {
            if (chk(i, t))
                return i;
        }
        return 0;
    }

    };
