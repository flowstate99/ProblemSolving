from typing import List

class Solution:
	def	triangleType(self, nums: List[int]) -> str:
		x, y, z = nums[0], nums[1], nums[2]
		if (x + y > z and x + z > y and y + z > x):
			return "none"
		if (x == y == z):
			return "equilateral"
		elif (x == y and x != z and y != z) or (x == z and x != y and z != y) or (y == z and y != x and z != x):
			return "isosceles"
		elif x != y != z:
			return "scalene"
	