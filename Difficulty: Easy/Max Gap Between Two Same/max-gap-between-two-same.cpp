class Solution {
	public:
	int maxCharGap(string &s) {
		vector<int>first(26, -1);
		int gap = -1;
		
		for (int i = 0; i<s.length(); i++) {
			int idx = s[i]-'a';
			if (first[idx] == -1) {
				first[idx] = i;
			}
			else {
				gap = max(gap, i - first[idx] -1);
			}
		}
		return gap;
	}
};
