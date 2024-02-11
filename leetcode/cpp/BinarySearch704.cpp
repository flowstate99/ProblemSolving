#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int first = 0;
		int last = nums.size() - 1;
		int middle = (last + first) / 2;
		while (first <= last) {
			if (target == nums[middle])
				return middle;
			else if (target > nums[middle]) {
				first = middle + 1;
			}
			else
				last = middle - 1;
			middle = (last + first) / 2;
		}
		return (-1);
	}
};

int	main() {
	Solution	sol;
	vector<int> nums = {-1,0,3,5,9,12};
	std::cout << sol.search(nums, 9);
}