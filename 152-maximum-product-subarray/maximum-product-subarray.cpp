class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxinumber = nums[0];
        int minnumber =nums[0];
        int ans = nums[0];
    
    for(int i =1;i<n;i++){
        if(nums[i]<0){
        swap(minnumber,maxinumber);
        }
       maxinumber= max(nums[i],maxinumber*nums[i]);
       minnumber = min(nums[i],minnumber*nums[i]);
       ans = max(ans,maxinumber);
    }
      return ans;
    }
};