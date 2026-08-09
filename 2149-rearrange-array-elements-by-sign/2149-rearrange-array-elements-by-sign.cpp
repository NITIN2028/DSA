class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>nums1(n);
        
        int left=0;
        int right=1;
        for (int i=0;i<n;i++){
            
            if(nums[i]>0){
                nums1[left]=nums[i];
                left=left+2;
            }
            else{
                nums1[right]=nums[i];
                right=right+2;
            }
        }
        return nums1;
    

        
    }
};