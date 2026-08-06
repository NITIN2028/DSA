class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<long long, int> mp;
        mp[0] = 1;   // Empty prefix sum

        long long sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            // Kitne prefix sums (sum-k) pehle aaye hain
            count += mp[sum - k];

            // Current prefix sum ki frequency badha do
            mp[sum]++;
        }

        return count;
    }
}; 

class Solution{
public:
    int longestSubarray(vector<int> &arr, int k){  // 
        int n =arr.size();
        int sum=0;
        int maxi=0;
        map<long long ,int>mp;
        for (int i=0;i<n;i++){
             sum+=arr[i];
             if(sum==k){
                 maxi=max(maxi,i+1);
                 
             }
             int rem=sum-k;
             if(mp.find(rem)!=mp.end()){
                 int len=i-mp[rem];
                 maxi=max(maxi,len);
             }
             if(mp.find(sum)==mp.end()){
                 mp[sum]=i;
             }
        }
        
       
     return maxi;
    }
};
