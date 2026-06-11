class Solution {
  public:
    int findIndex(string &s) {
        int close = 0;
        for(char ch : s) {
            if(ch == ')') {
                close++;
            }
        }
        int openBefore = 0;
        int closeAfter = close;
        for(int i=0; i<=s.length(); i++) {
            if(openBefore == closeAfter) {
                return i;
            }
            if(i<s.length()) {
                if(s[i]=='(') {
                    openBefore++;
                }
                else {
                    closeAfter--;
                }
            }
        }
        return -1;
    }
};