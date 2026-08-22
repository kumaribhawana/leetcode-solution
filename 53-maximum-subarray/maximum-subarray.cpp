class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int currentsum = 0;
         for(int i = 0; i < nums.size(); i++) {
           currentsum =  currentsum +nums[i];
           ans = max(ans, currentsum);
            if(currentsum < 0) {
                currentsum = 0;
            }
        }

        return ans;
    }
};