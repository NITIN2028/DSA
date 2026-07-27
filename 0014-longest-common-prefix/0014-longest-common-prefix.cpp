class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string st = strs[0];

        for (int i = 1; i < strs.size(); i++) {

            int j = 0;

            while (j < st.size() &&
                   j < strs[i].size() &&
                   st[j] == strs[i][j]) {
                j++;
            }

            st = st.substr(0, j);

            if (st.empty())
                return "";
        }

        return st;
    }
};