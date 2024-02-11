from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        res = dummy = ListNode()
        while list1 and list2:
            if list1.val < list2.val:
                res.next = list1
                list1, res = list1.next, list1
            else:
                res.next = list2
                list2, res = list2.next, list2
        if list1 or list2:
            res.next = list1 if list1 else list2
        return dummy.next
    
def main():
		list1 = ListNode(1)
		list1.next = ListNode(2)
		list1.next.next = ListNode(4)
		list2 = ListNode(1)
		list2.next = ListNode(3)
		list2.next.next = ListNode(4)

		solution = Solution()

		merged_head = solution.mergeTwoLists(list1, list2)

		while merged_head:
				print(merged_head.val, end=" ")
				merged_head = merged_head.next

if __name__ == "__main__":
	main()
