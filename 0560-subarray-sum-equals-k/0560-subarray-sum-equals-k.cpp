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