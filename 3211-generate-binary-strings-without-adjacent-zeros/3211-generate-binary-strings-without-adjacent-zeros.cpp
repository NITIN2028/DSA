class Solution {
public:
   void solve(int n,string&s,int prev ,vector<string>&ans){
    if(s.size()==n){
        ans.push_back(s);
        return;
    }
    s.push_back('1');
    solve(n,s,1,ans);
    s.pop_back();

    if(prev==1){
        s.push_back('0');
        solve(n,s,0,ans);
        s.pop_back();
    }
   }


   
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s="";
        int prev =1 ;
        solve(n,s,prev,ans);
        
      return ans;  
    }
};