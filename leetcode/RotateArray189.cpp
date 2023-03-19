#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
	public:
		void rotate(vector<int>& nums, int k) {
			if (nums.empty() || (k %= nums.size()) == 0)	return;
			k %= nums.size();
			reverse(nums.begin(), nums.end());
			reverse(nums.begin(), nums.begin() + k);
			reverse(nums.begin() + k, nums.end());
		}
};

int	main() {
	Solution	sol;
	vector<int>	nums = {1,2,3,4,5,6,7};
	sol.rotate(nums, 3);
	cout << "[";
	for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
		if (it != nums.end() - 1)
			cout << *it << ",";
		else
			cout << *it;
	}
	cout << "]\n";
}