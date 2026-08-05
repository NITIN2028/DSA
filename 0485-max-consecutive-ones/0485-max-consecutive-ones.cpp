class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int left = 0;
        int right = 0;
        int largest = 0;

        while (right < n) {
            if (nums[right] != 0) {
                count++;
                largest = max(largest, count); 
            } else {
                count = 0;  
            }
            right++;
        }

        return largest;
    }
};