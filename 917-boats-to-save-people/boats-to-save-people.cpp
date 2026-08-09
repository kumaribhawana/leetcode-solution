class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(begin(people),end(people));
        int i = 0 , j = n-1;
        int boots = 0;
        while(i<=j){
            if(people[j]+people[i]<=limit){
                i++;
                j--;

            }else{
                j--;
               
            }
            boots += 1;
        }
        return boots;
    }
};