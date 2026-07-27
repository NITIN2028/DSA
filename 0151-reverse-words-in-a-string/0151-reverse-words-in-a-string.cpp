class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {

            // Extra spaces skip karo
            while (i < n && s[i] == ' ')
                i++;

            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if (!word.empty()) {
                if (!ans.empty())
                    ans += " ";

                ans += word;
            }
        }

        return ans;
    }
};