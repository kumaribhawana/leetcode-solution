class Solution {
public:
       int findFirst(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int first = -1;
         while (l <= r) {
         int mid = l + (r - l) / 2;
          if (nums[mid] == target) {
                first = mid;
                r = mid - 1;      
            }
        else if (nums[mid] < target) {
                l = mid + 1;
            }
        else {
                r = mid - 1;
            }
        }
        return first;
    }
    int findlast(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int last = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                last = mid;
                l = mid + 1;      
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
       return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findlast(nums, target);
        return {first, last};
    }
};
