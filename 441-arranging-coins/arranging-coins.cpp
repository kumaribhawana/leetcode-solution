class Solution {
public:
    int arrangeCoins(int n) {
        long long  l = 0;
        long long  h = n;
        while(l<=h){
            long long mid = l+(h-l)/2;
            long long coins = mid*(mid+1)/2;
            if(coins<=n){
                l = mid+1;
            }else{
                h = mid-1;
            }

        }
        return h;
    }
};