class Solution {
public:
    int minel(vector<int>&nums){
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
        }
        return mini;
    }
    int maxel(vector<int>&nums){
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
        }
        return maxi;
    }
    bool possible(vector<int>&nums,int day,int m,int k){
        int n=nums.size();
         int b=0;
             int count=0 ;
       
        for(int i=0;i<n;i++){
             
            if(nums[i]<=day){
                count++;
            }
            else{
                b+=count/k;
                count=0;
            }
           
        }
         b+=count/k;

        if(b>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n =bloomDay.size();
        if((long long)m * k > n) return -1;
        int low=minel(bloomDay);
        int high= maxel(bloomDay);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)==true){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }


        
                   
     return low;   
    }
};