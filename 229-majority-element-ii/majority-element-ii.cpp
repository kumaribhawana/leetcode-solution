class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int majority1 = 0;
        int count2 = 0;
        int majority2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == majority1) {
                count1++;
            } else if (nums[i] == majority2) {
                count2++;
            } else if (count1 == 0) {
                majority1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                majority2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        int freq1 = 0;
        int freq2 = 0;
        for (int i = 0; i < n; i++) {
        if (nums[i] == majority1) {
        freq1++;
            }

        if (nums[i] == majority2) {
        freq2++;
            }
        }
        if (freq1 > n / 3) {
         ans.push_back(majority1);
        }
        if (freq2 > n / 3 && majority1 != majority2) {
         ans.push_back(majority2);
        }
        return ans;
    }
};