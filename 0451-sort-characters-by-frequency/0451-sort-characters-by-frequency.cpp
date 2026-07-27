class Solution {
public:
    string frequencySort(string s) {

        // Step 1: Count frequency
        map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Copy map into vector
        vector<pair<char, int>> v;

        for (auto it : freq) {
            v.push_back(it);
        }

        // Step 3: Sort according to frequency
        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });

        // Step 4: Build answer
        string ans = "";

        for (auto it : v) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};