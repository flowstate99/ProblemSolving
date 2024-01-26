#include <iostream>
#include <vector>

using namespace std;
class Solution
{
	public:
		int	maxSubArraySum(vector<int>& nums) {
			// straightforward solution O(n^3)

		// 	int maxSub = 0;
		// 	for (int i = 0; i < nums.size(); i++) {
		// 		for (int j = i ; j < nums.size(); j++) {
		// 			int sum = 0;
		// 			for (int k = i; k <= j; k++)
		// 				sum += nums[k];
		// 			maxSub = max(maxSub, sum);
		// 		}
		// 	}

		// O(n^2)
			// int maxSub = 0;
			// for (int i = 0; i < nums.size(); i++) {
			// 	int sum = 0;
			// 	for (int j = i; j < nums.size(); j++) {
			// 		sum += nums[j];
			// 		maxSub = max(maxSub, sum);
			// 	}
			// }

			// O(n)
			int maxSub = 0, sum = 0;
			for (int i = 0; i < nums.size(); i++) {
				sum = max(nums[i], sum + nums[i]);
				maxSub = max(maxSub, sum);
			}
			return maxSub;
		}
};

int	main(int ac, char **av) {
	Solution sol;
	int	myInts[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	vector<int> nums(myInts, myInts + (sizeof(myInts) / (sizeof(myInts[0]))));

	cout << sol.maxSubArraySum(nums) << "\n";
}