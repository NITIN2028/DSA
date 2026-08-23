class Solution {
public:
    void solve(int ind, int k, int n, vector<int>& nums,
               vector<int>& ds, vector<vector<int>>& ans) {

        if (k == 0) {
            if (n == 0) {
                ans.push_back(ds);
            }
            return;
        }

        for (int i = ind; i < nums.size(); i++) {

            if (nums[i] > n)
                break;

            ds.push_back(nums[i]);

            solve(i + 1, k - 1, n - nums[i], nums, ds, ans);

            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};

        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, k, n, nums, ds, ans);

        return ans;
    }
};