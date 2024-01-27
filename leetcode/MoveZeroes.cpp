#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
			int zeros = 0;
			int i = 0;
			for (int j = 0; j < nums.size(); j++) {
				if (nums[j] != 0) {
					nums[i] = nums[j];
					i++;
				}
			}
			for (int k = i; k < nums.size(); k++)
				nums[k] = 0;
		}
};

int	main() {
	Solution sol;

	int numsArray[] = {0, 1, 0, 3, 12};
	vector<int> nums(numsArray, numsArray + sizeof(numsArray)/sizeof(int));
	sol.moveZeroes(nums);
}