class Solution {
public:
    int minPartitions(string num) {
        int maxi = 0;
        int n = num.size();

        for (int i = 0; i < n; i++) {
            if (num[i] - '0' > maxi) {
                maxi = num[i] - '0';
            }
        }

        return maxi;
    }
};