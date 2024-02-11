#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
			int increasing = 1, decreasing = 1;
			for (int i = 1; i < nums.size(); i++)
			{
				if (nums[i] < nums[i - 1])
					increasing = 0;
			}
			for (int i = 1; i < nums.size(); i++)
			{
				if (nums[i] > nums[i - 1])
					decreasing = 0;
			}
			if (increasing || decreasing)
				return true;
			return false;
		}
};

int	main() {
	Solution sol;

	int myarray[] = {1, 2, 2, 3};
	vector<int> nums(myarray, myarray + sizeof(myarray) / sizeof(int));
	cout << sol.isMonotonic(nums);
}