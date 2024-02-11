#include <iostream>
#include <algorithm>

using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
	public:
		ListNode* middleNode(ListNode* head) {
			ListNode* slow = head;
			ListNode* fast = head;
			while (fast != nullptr && fast->next != nullptr) {
				slow = slow->next;
				fast = fast->next->next;
			}
			return slow;
		}
};

int main() {
	ListNode* head = new ListNode(1);
	ListNode* node1 = new ListNode(2);
	ListNode* node2 = new ListNode(3);
	ListNode* node3 = new ListNode(4);
	ListNode* node4 = new ListNode(5);
	ListNode* node5 = new ListNode(6);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	Solution s;
	ListNode* middle = s.middleNode(head);
	cout << middle->val << endl;
	return 0;
}