class Solution {
public:
   bool check(int row,int col,vector<string>&board,int n){
    int dumrow=row;
    int dumcol=col;

    while(row>=0&& col>=0){
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }
    row=dumrow;
    col=dumcol;
    while(col>=0){
        if(board[row][col]=='Q') return false;
        col--;
    }
    row=dumrow;
    col=dumcol;  
    while(row<n&& col>=0){
        if(board[row][col]=='Q')return false;
        row++;
        col--;
    }
    return true;
   }
  void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n ){

    if(col==n){
        ans.push_back(board);
        return ;
    }

    for(int i=0;i<n;i++){
        if(check(i,col,board,n)){
            board[i][col]='Q';
            solve(col+1,ans,board,n);
            board[i][col]='.';
        }
    }


  }

   
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>str(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            str[i]=s;
        }
        solve(0,ans,str,n);

        return ans;
        
    }
};