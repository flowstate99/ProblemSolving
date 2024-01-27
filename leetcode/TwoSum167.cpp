#include <iostream>
#include <vector>
#include <algorithm>

using namespace	std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& numbers, int target) {
			vector<int> res;
			for (int i = 0; i < numbers.size() - 1; ++i) {
				for (int j = i + 1; j < numbers.size(); ++j) {
					if (numbers[i] + numbers[j] == target) {
						res.push_back(i);
						res.push_back(j);
						return res;
					}
				}
			}
		}
};

int	main() {
	Solution	sol;
	int myarray[] = {1, 2, 3, 4};
	vector<int> nums(myarray, myarray + sizeof(myarray) / sizeof(int));
	vector<int>	res = sol.twoSum(nums, 5);
	vector<int>::iterator it = res.begin();
	for (; it != res.end(); it++)
		cout << *it << ' ';
	return 0;
}