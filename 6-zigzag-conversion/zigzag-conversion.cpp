class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1)
            return s;

        map<int, vector<char>> mp;

        int row = 0;
        bool down = true;

        for (char ch : s) {

            mp[row].push_back(ch);

            if (row == numRows - 1)
                down = false;
            else if (row == 0)
                down = true;

            if (down)
                row++;
            else
                row--;
        }

        string ans = "";

        for (auto &it : mp) {
            for (char ch : it.second)
                ans.push_back(ch);
        }

        return ans;
    }
};