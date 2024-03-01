from typing import List

class Solution:
	def twoSum(self, nums: List[int], target: int) -> List[int]:
		ans = []
		left = 0
		right = len(nums) - 1
		while left < right:
			if nums[left] + nums[right] == target:
				ans.append(left + 1)
				ans.append(right + 1)
				return ans
			elif nums[left] + nums[right] > target:
				right -= 1
			elif nums[left] + nums[right] < target:
				left += 1
		return ans

def main():
	solution = Solution()
	numbers = [2, 7, 11, 15]
	target = 9
	result = solution.twoSum(numbers, target)
	print(result)

if __name__ == "__main__":
	main()
