class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int a=0, b=1;
        if(n==0) {
            return a;
        }
        if(n==1) {
            return b;
        }
        int ans=a+b;
        for(int i=3; i<=n; i++) {
            a=b;
            b=ans;
            ans=a+b;
        }
        return ans;
    }
};