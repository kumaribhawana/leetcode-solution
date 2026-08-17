class Solution {
public:
    int hIndex(vector<int>& citations) {
       int n = citations.size();
       for(int i = 0; i<n;i++){
        int paper = n-i;
        if(citations[i]>=paper){
            return paper;
        }
       }
       return 0;
    }
};