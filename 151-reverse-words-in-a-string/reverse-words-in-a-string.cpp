// class Solution {
// public:
//     string reverseWords(string s) {
//         string ans ="";
//         for(int i = nums.size()-1; i>=0;i++){
//         ans += s[i]
//         }
//     }
//     return ans;
// };
class Solution {
public:
 string reverseWords(string s) {
    vector<string>ans;
    int n = s.size();
    int i = 0;
    while(i<n){
        string temp = "";
        while(i<n&&s[i]==' '){
            
            i++;
        }
        int j = i;
        while(j<n&&s[j]!=' '){
            temp += s[j];
            j++;
        }
        if(temp.size()!=0)
        ans.push_back(temp);
        i = j;
        
    }
    string fans = "";
    n = ans.size();
    for(int k = n-1;k>=0;k--){
       fans += ans[k];
         fans.push_back(' ');
    }
    fans.pop_back();



    return fans;
 }
};


