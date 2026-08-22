class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int>ans(nums1.size()+nums2.size());
     merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),ans.begin());
    int n = ans.size();
     if(n % 2==1){
        int odd = n/2;
        return ans[odd];
     }
     else {
            int even1 = n / 2 - 1;
            int even2 = n / 2;
           double median = (ans[even1] + ans[even2]) / 2.0;
            return median;
        }
    }
};
    
    