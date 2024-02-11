#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
	public:
		vector<int> sortedSquares(vector<int>& nums) {
			vector<int> squared;
			vector<int>::iterator it = nums.begin();
			for(; it != nums.end(); ++it) {
				squared.push_back(pow(*it, 2));
			}
			sort(squared.begin(), squared.end());
			return squared;
		}
};

int	main() {
	Solution	sol;
	vector<int> nums = {-4,-1,0,3,10};
	vector<int>	res = sol.sortedSquares(nums);
	
	vector<int>::iterator it = res.begin();
	cout << "[";
	for (; it != res.end(); ++it) {
		if (it != res.end() - 1)
			cout << *it << ",";
		else
			cout << *it;
	}
	cout << "]";
}