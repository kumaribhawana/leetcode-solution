class Solution {
public:
    bool isPerfectSquare(int nums) {
       int l = 0;
       int r = nums;
       while(l<=r){
          int mid =l+(r-l)/2;
          long long Square = 1LL * mid * mid;
          if(Square==nums){
              return true; 
          } else if (Square < nums) { 
                l = mid + 1;
           } else {
                r = mid - 1;
            }
            }
        return false;
    }
};