#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		int searchInsert(vector<int>& nums, int target) {
			int f = 0, l = nums.size() - 1;
			int mid;
			while (f <= l) {
				mid = (l + f) / 2;
				if (f == l) {
					if (nums[f] < target)
						return f + 1;
					else
						return f;
				}
				if (nums[mid] < target)
					f = mid + 1;
				else
					l = mid;
			}
			return f;
		}
};

int	main() {
	Solution	sol;
	vector<int>	nums = {1,3,5,6};

	std::cout << sol.searchInsert(nums, 5) << endl;
	std::cout << sol.searchInsert(nums, 2) << endl;
	std::cout << sol.searchInsert(nums, 7) << endl;
}