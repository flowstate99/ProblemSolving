#include <iostream>
#include <vector>
#include <algorithm>

using namespace	std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& numbers, int target) {
			vector<int> res;
			int i = 0, j = 1;
			for (; i < numbers.size() - 1; ++i) {
				for (; j < numbers.size(); ++j) {
					if (numbers[i] + numbers[j] == target) {
						res.push_back(i + 1);
						res.push_back(j + 1);
						return res;
					}
				}
			}
		}
};

int	main() {
	Solution	sol;


	vector<int> nums = {0,0,3,4};

	vector<int>	res = sol.twoSum(nums, 0);
	vector<int>::iterator	it = res.begin();
	for (; it != res.end(); ++it){
		if (it != nums.end() - 1)
			cout << *it << ",";
		else
			cout << *it;
	}
}