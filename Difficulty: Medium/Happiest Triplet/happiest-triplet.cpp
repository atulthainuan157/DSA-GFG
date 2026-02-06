class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        vector<int>ans(3);
        int i=0, j=0, k=0;
        int bestDiff=INT_MAX;
        int bestSum=INT_MAX;
        while(i<a.size() && j<b.size() && k<c.size()) {
            int mini = min(a[i], min(b[j], c[k]));
            int maxi = max(a[i], max(b[j], c[k]));
            int diff = maxi-mini;
            int sum = a[i]+b[j]+c[k];
            
            if(diff < bestDiff || (diff = bestDiff && sum < bestSum)) {
                bestDiff = diff;
                bestSum = sum;
                ans = {a[i], b[j], c[k]};
            }
            if(mini == a[i]) i++;
            else if(mini == b[j]) j++;
            else k++;
        }
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
    }
};