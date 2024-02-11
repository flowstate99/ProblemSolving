from typing import Optional

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

class Solution:
	def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
		curr = head
		prev = None
		while curr:
			nextNode = curr.next
			curr.next = prev
			prev = curr
			curr = nextNode
		return prev

def main():
	head = ListNode(1)
	head.next = ListNode(2)
	head.next.next = ListNode(3)
	head.next.next.next = ListNode(4)
	head.next.next.next.next = ListNode(5)

	solution = Solution()

	reversed_head = solution.reverseList(head)

	while reversed_head:
		print(reversed_head.val)
		reversed_head = reversed_head.next

if __name__ == "__main__":
	main()
