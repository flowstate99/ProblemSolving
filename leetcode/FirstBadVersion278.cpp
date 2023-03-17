#include <vector>
#include <iostream>

using namespace std;


class Solution {
	private:
		bool	isBadVersion(int n);
	public:
		int firstBadVersion(int n) {
			long long int first = 1, last = n;
			long long int mid = (last + first)/2;
			long long int bad = 1;
			while (first <= last) {
				mid = (last + first)/2;
				if (isBadVersion(mid)) {
					bad = mid;
					last = mid - 1;
				}
				else
					first = mid + 1;
			}
			return bad;
		}
};