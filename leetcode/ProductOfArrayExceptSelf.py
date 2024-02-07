from typing import List

class	Solution:
	def	productExceptSelf(self, nums: List[int]) -> List[int]:
		ans = [1]*len(nums)
		right = nums - 1

		for i in range(len(nums)):
			
		return ans

def	main():
	sol = Solution()
	print(sol.productExceptSelf([1,2,3,4]))

main()