from typing import List
import math

class	Solution:
	def	isSquare(self, num) -> int:
		if (num >= 0):
			sr = int(math.sqrt(num))
			return (sr * sr) == num
		return False
	def	maximumLength(self, nums: List[int]) -> int:
		
		for i in range(len(nums)):
			if (self.isSquare(nums[i])):
				