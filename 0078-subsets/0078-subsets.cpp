class Solution {
public:
    void solve(int i,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        solve(i+1,ds,ans,nums);
        ds.pop_back();

        solve(i+1,ds,ans,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ds,ans,nums);

     return ans;
    }
};