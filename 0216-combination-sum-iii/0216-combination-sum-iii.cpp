class Solution {
public:
    void solve(int ind, vector<int>& comb, vector<vector<int>>& ans,
               vector<int>& ds, int k, int n) {

        if (k == 0 && n == 0) {
            ans.push_back(ds);
            return;
        }

        if (ind == comb.size() || k == 0 || n < 0) {
            return;
        }

        
        ds.push_back(comb[ind]);
        solve(ind + 1, comb, ans, ds, k - 1, n - comb[ind]);
        ds.pop_back();

        
        solve(ind + 1, comb, ans, ds, k, n);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> comb = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, comb, ans, ds, k, n);

        return ans;
    }
};