from typing import List
class Solution:
	def numIdenticalPairs(self, nums: List[int]) -> int:
		res = 0
		for i in range(0, len(nums)):
			for j in range(i + 1, len(nums)):
				if nums[i] == nums[j]:
					res += 1
					print("({},{})".format(i, j))
		return res


def	main():
	sol = Solution()
	nums = [1,2,3,1,1,3]
	result = sol.numIdenticalPairs(nums)
	print(f"number of good pairs: ", result)

if __name__ == "__main__":
	main()