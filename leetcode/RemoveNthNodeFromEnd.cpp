#include <iostream>

using namespace	std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;        
        ListNode* temp = new ListNode();
        temp -> next = head;
        
        ListNode* slow = temp;
        ListNode* fast = temp;
        
        while(n>0 ){
            fast = fast -> next;
            n--;
        }
		// std::cout << "fast: " << fast -> val << std::endl;
        
        while(fast->next){
            fast = fast -> next;
            slow = slow -> next;
        }
        // std::cout << "slow: " << slow -> val << std::endl;
        slow -> next = slow->next->next;
        slow = fast;
        
        return temp -> next;
    }
};

int	main() {
	Solution	sol;
	ListNode	*head = new ListNode(1);
	ListNode	*node1 = new ListNode(2);
	ListNode	*node2 = new ListNode(3);
	ListNode	*node3 = new ListNode(4);
	ListNode	*node4 = new ListNode(5);
	ListNode	*node5 = new ListNode(6);
	ListNode	*node6 = new ListNode(7);
	ListNode	*node7 = new ListNode(8);
	ListNode	*node8 = new ListNode(9);
	ListNode	*node9 = new ListNode(10);
	ListNode	*node10 = new ListNode(11);
	ListNode	*node11 = new ListNode(12);
	head -> next = node1;
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = node4;
	node4 -> next = node5;
	node5 -> next = node6;
	node6 -> next = node7;
	node7 -> next = node8;
	node8 -> next = node9;
	node9 -> next = node10;
	node10 -> next = node11;
	node11 -> next = NULL;
	ListNode	*res = sol.removeNthFromEnd(head, 2);
	while (res) {
		cout << res -> val << " ";
		res = res -> next;
	}
	cout << endl;
	return 0;
}