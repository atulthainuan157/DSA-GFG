class Solution {
  public:
    int myAtoi(string &s) {
        int n = s.size();
        int idx = 0;
        while(idx<n && s[idx]==' ') {
            idx++;
        }
        if(idx==n) {
            return 0;
        }
        int sign = 1;
        if(s[idx]=='-' || s[idx]=='+') {
            if(s[idx]=='-') {
                sign=-1;
            }
            idx++;
        }
        long long result=0;
        while(idx<n && s[idx]>='0' && s[idx] <='9') {
            int temp = s[idx]-'0';
            result = result*10 +temp;
            if(sign*result>INT_MAX) {
                return INT_MAX;
            }
            if(sign*result<INT_MIN) {
                return INT_MIN;
            }
            idx++;
        }
        return sign*result;
    }
};
