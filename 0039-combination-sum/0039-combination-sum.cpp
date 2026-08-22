class Solution {
public:
   void solve(int i,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds,int target ,int n){
    if(i==n){
        if(target==0){
            ans.push_back(ds);
        }
        return;

    
    }

    if(candidates[i]<=target){
        ds.push_back(candidates[i]);
        solve(i,candidates,ans,ds,target-candidates[i],n);
        ds.pop_back();
    }

    solve(i+1,candidates,ans,ds,target,n);
   }

   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        int n =candidates.size();

        solve(0,candidates,ans,ds,target,n);
     return ans;   
    }
};