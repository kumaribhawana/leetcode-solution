    class Solution {
    public:
    vector<int> findDisappearedNumbers(vector<int>& nums){
      vector<int>ans;
        int index = 1;
        sort(nums.begin(),nums.end());

         for(int i = 0; i < nums.size(); i++) {   
            if(nums[i] == index) {
                index++;
        }
         else if(nums[i] > index) {           
                ans.push_back(index);
                index++;
                i--;
            }
        }while(index <= nums.size()){
            ans.push_back(index);
            index++;
        }
        return ans;
    }
};
 