#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       sort(arr.begin(), arr.end());
       int  diff = abs(arr[1] - arr[0]);
			 for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
			 {
				 if (it != arr.end() - 1)
					if (diff != *(it + 1) - *it)
						return false;
			 }
			 return true;
    }
};

int	main() {
	Solution sol;

	int myarray[] = {3, 5, 1};
	vector<int> arr(myarray, myarray + sizeof(myarray) / sizeof(int));
	cout << sol.canMakeArithmeticProgression(arr);
}