from typing import List

class Solution:
  def largestPerimeter(self, nums: List[int]) -> int:
			maxPerimeter = 0
			for i in range(2, len(nums) - 2):
				if (nums[i] + (nums[i + 1]) > nums[i + 2] and nums[i] + nums[i + 2] > nums[i + 1] and nums[i + 1] + nums[i + 2] > nums[i]):
					perimeter = nums[i] + (nums[i] + 1) + (nums[i] + 2)
					if perimeter >= maxPerimeter:
							maxPerimeter = perimeter
				else:
					break
			return maxPerimeter
	
def	main():
	sol = Solution()
	print(sol.largestPerimeter([2,1,2]))

main()