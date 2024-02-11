from typing import Optional

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

class Solution:
	def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
		head = ListNode()
		current = head
		carry = 0
		while l1 or l2 or carry:
			digit1 = l1.val if l1 else 0
			digit2 = l2.val if l2 else 0
			sum = digit1 + digit2 + carry
			current.next = ListNode(sum%10)
			carry = sum//10
			l1 = l1.next if l1 else None
			l2 = l2.next if l2 else None
			current = current.next
		return head.next

def main():
	# Create test cases
	l1 = ListNode(2)
	l1.next = ListNode(4)
	l1.next.next = ListNode(3)

	l2 = ListNode(5)
	l2.next = ListNode(6)
	l2.next.next = ListNode(4)

	# Create solution object
	solution = Solution()

	# Call the addTwoNumbers function
	result = solution.addTwoNumbers(l1, l2)

	# Print the result
	while result:
		print(result.val, end=" ")
		result = result.next
	print()

if __name__ == "__main__":
	main()
	
