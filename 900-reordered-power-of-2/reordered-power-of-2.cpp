// class Solution {
// public:
// string getSortedStr(int n){
//     string s = to_string(n);
//     sort(begin(s),end(s));
//     return s;
// }
//     bool reorderedPowerOf2(int n) {
//         string s = getSortedStr(n);
//         for(int p = 0 ; p<=29;p++){
//             if(s==getSortedStr(1<<p)){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
 int getVectorCountFormat(int n) {
        int num = 0;
          while (n) {
            num += pow(10, n % 10);
            n /= 10;
        }
        return num;
    }

    bool reorderedPowerOf2(int n) {
      int input = getVectorCountFormat(n);
        for (int p = 0; p <= 29; p++) {
           if (input == getVectorCountFormat(1 << p)) {
                return true;
            }
        }

        return false;
    }
};