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
    long long totaldivisor(vector<int>&v, int div){
        int n=v.size();
        long long  sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double) v[i]/(double)div);

        }
        return sum;
    }



    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1;
    int high=maxelement(nums);
    int ans;
    while(low<=high){
        
        int mid=low+(high-low)/2;
        long long val= totaldivisor(nums,mid);
        
        if(val<=threshold){
        ans=mid;
        high=mid-1;
    }
    else{
        low=mid+1;;
    }
    }   
   return ans; }
};