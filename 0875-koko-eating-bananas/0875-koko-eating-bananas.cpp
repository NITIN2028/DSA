class Solution {
public: 
    int maxelement(vector<int>&v){
        int n=v.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
    long long totalhour(vector<int>&v, int hours){
        int n=v.size();
        long long  sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double) v[i]/(double) hours);

        }
        return sum;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1 ;
        int high=maxelement(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
             long long k= totalhour(piles,mid);
             if(k<=h){
                high=mid-1;
             }
             else{
                low=mid+1;

             }


        }
     return low;   
    }
};