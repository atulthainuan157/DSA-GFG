class Solution {
  public:
    int derangeCount(int n) {
        if(n == 1) {
            return 0;
        }
        if(n == 2) {
            return 1;
        }
        long long prev1 = 0;
        long long prev2 = 1;
        
        for(int i=3; i<=n; i++) {
            long long curr = (i-1) * (prev1 + prev2);
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};