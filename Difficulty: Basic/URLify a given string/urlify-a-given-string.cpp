class Solution {
  public:
    string URLify(string &s) {
        int n = s.size();
        string result = "";
        for(int i=0; i<n; i++) {
            if(s[i]==' ') {
                result += "%20";
            }
            else {
                result += s[i];
            }
        }
        return result;
    }
};