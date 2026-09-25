class Solution {
public:
     void fun(vector<char>& s,int l ,int r){
        if(l>=r){
         return;
        }
        swap(s[l],s[r]);
        l++;
        r--;
        fun(s,l,r);
     }
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size()-1;
        fun(s,l,r);
        return;
    }
};