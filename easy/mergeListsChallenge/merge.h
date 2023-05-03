#ifndef MERGE_H
#define MERGE_H


struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);
void add_node(struct ListNode **head, const int n);
void print_listint(const struct ListNode *h);
#endif
