class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i =0 ;
        int j =m-1;
        int x=target;
        while(i<n&& j>=0){
            if(matrix[i][j]==x) return true ;
            
            if(matrix[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        // code here
      return false;  
        
    }
};