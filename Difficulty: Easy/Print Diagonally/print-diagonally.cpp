class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int m=mat.size();
        int n=mat[0].size();
        vector<int>result;
        for(int col=0; col<n; col++) {
            int i=0, j=col;
            while(i<n && j>=0) {
                result.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        for(int row=1; row<m; row++) {
            int i=row, j=n-1;
            while(i<m && j>=0) {
                result.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        return result;
    }
};