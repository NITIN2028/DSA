class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            int count = 1;

            while (i + 1 < n && nums[i] == nums[i +1]) {
                count++;
                i++;
            }

            if (count > n / 3) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};