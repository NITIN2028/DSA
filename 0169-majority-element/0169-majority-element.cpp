class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int ct=0;
        int el;
        for(int i=0;i<n;i++){
            if(ct==0){
                ct++;
                el=nums[i];
            }
            else if(nums[i]==el){
                ct++;
            }
            else{
                ct--;
            }

        }
        
     return el;   
    }
};