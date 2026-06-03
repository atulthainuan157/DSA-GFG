class Solution {
public:
    int findMaxProduct(vector<int>& arr) {
        const long long MOD = 1000000007LL;
        int n = arr.size();

        if (n == 1) {
            return arr[0];
        }

        int zeroCount = 0;
        int negativeCount = 0;
        int maxNeg = INT_MIN;

        for (int x : arr) {
            if (x == 0) {
                zeroCount++;
            } else if (x < 0) {
                negativeCount++;
                maxNeg = max(maxNeg, x); // negative closest to 0
            }
        }

        // All zeros
        if (zeroCount == n) {
            return 0;
        }

        // Only one negative and all others are zero
        if (negativeCount == 1 && negativeCount + zeroCount == n) {
            return 0;
        }

        long long ans = 1;
        bool skipped = false;

        for (int x : arr) {
            if (x == 0) continue;

            if (negativeCount % 2 == 1 &&
                x == maxNeg &&
                !skipped) {
                skipped = true;
                continue;
            }

            long long val = x;
            val = (val % MOD + MOD) % MOD;
            ans = (ans * val) % MOD;
        }

        return (int)ans;
    }
};