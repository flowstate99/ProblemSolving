from typing import List

class	Solution:
	def	lemonadeChange(self, bills: List[int]) -> bool:
		fiveDollarBill = 0
		tenDollarBill = 0
		for i in bills:
			if i == 5:
				fiveDollarBill += 1
			elif i == 10:
				if fiveDollarBill == 0:
					return False
				tenDollarBill += 1
				fiveDollarBill -= 1
			else:
				if (tenDollarBill >= 1 and fiveDollarBill >= 1):
					tenDollarBill -= 1
					fiveDollarBill -= 1
				elif fiveDollarBill >= 3:
					fiveDollarBill -= 3
				else:
					return False
		return True

def	main():
	sol = Solution()
	print(sol.lemonadeChange([5,5,5,5,20,20,5,5,20,5]))
main()