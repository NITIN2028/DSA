class Solution {
public:
    int maxel(vector<int>&nums){
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
        }
        return maxi;}

        long long arrsum(vector<int>nums){
            int n= nums.size();
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=nums[i];
            }
            return sum;
        }

        long long checkday(vector<int>&nums,int mid){
            int counter=0;
            int n=nums.size();
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=nums[i];
                if(sum>mid){
                    counter++;
                    sum=nums[i];
                }
                


            }
            return counter+1;
        }
    int shipWithinDays(vector<int>& weights, int days) {
    int low=maxel(weights);
    long long high=arrsum(weights);
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(checkday(weights,mid)<=days){
            int ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }



      
    }
    return low;  

        
        
        
          }
};