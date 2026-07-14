class Solution {
	public:
	vector<int> getMinMax(vector<int> &arr) {
		int a = INT_MAX, b = INT_MIN;
		for (int i = 0; i<arr.size(); i++) {
			a = min(a, arr[i]);
			b = max(b, arr[i]);
		}
		return {a, b};
	}
};
