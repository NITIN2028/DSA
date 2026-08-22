class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        long long product = 1;

        while (n != 0) {
            int k = n % 10;

            sum += k;
            product *= k;

            n /= 10;
        }

        return original % (sum + product) == 0;
    }
};