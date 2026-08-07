class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int ct1=0;
        int ct2=0;
        int el= INT_MIN;
        int el1=INT_MIN;
        for (int i=0;i<n;i++){
            if(ct1==0&&nums[i]!=el1){
                ct1++;
                el=nums[i];
            }
            else if(ct2==0&&nums[i]!=el){
                ct2++;
                el1=nums[i];
            }
            else if(nums[i]==el) {
                ct1++;
            }
            else if(nums[i]==el1){
                ct2++;
            }
            else{
                ct1--,ct2--;
            }


        }
     int count1=0;
     int count2=0;
     for(int i=0;i<n;i++)   {
        if(nums[i]==el){
            count1++;
        }
        if(nums[i]==el1){
            count2++;
        }
     }
     if(count1>n/3){
        ans.push_back(el);
     }
     if(count2>n/3){
        ans.push_back(el1);
     }
    return ans;
    }
};