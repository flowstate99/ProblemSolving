from typing import Optional
class ListNode:
		def __init__(self, val=0, next=None):
				self.val = val
				self.next = next
class Solution:
		def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
				num1, num2 = 0, 0
				''' using first test case:
				7 2 4 3, num1 starts at 0:
				so num1 = 0*10 + 7
				num1 = 7 * 10 + 2
				num1 = 72 * 10 + 4
				num1 = 724*10 + 3
				num1 = 7243 
				same thing works for second number
				we add them together then add them to a linked list
				digit by digit after converting it to a string'''
				while l1:
						num1 = num1 * 10 + l1.val
						l1 = l1.next
				while l2:
						num2 = num2 * 10 + l2.val
						l2 = l2.next
				dummyList = dummy = ListNode(0)
				ans = str(num1 + num2)
				for i in ans:
					dummy.next = ListNode(i)
					dummy = dummy.next
				return dummyList.next

if __name__ == "__main__":
	# Create sample linked lists
	l1 = ListNode(7)
	l1.next = ListNode(2)
	l1.next.next = ListNode(4)
	l1.next.next = ListNode(3)

	l2 = ListNode(5)
	l2.next = ListNode(6)
	l2.next.next = ListNode(4)

	# Create an instance of the Solution class
	solution = Solution()

	# Call the addTwoNumbers function and print the result
	result = solution.addTwoNumbers(l1, l2)
	print(result)
