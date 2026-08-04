class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;

        for (int x : nums) {
            st.insert(x);
        }

        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        for (int i = min + 1; i < max; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};