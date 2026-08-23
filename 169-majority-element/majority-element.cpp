class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            count = 0;
        for(int j = n - 1; j >= 0; j--) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
            if(count > n / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};