#include <stdio.h>
#include "merge.h"
#include <stdlib.h>

int main(void)
{
	struct ListNode *head = NULL, *head2 = NULL, *merged;

	add_node(&head, 1);
	add_node(&head, 3);
	add_node(&head, 5);

	add_node(&head2, 0);
	add_node(&head2, 2);
	add_node(&head2, 4);

	print_listint(head);
	print_listint(head2);
	merged = mergeTwoLists(head, head2);
	printf("-----------------\n");
	print_listint(merged);
	return (0);
}

/**
 * add_nodeint_end - add an element in
 * end of a listint_t
 * @head: listint_t's head
 * @n: int value
 */
void add_node(struct ListNode **head, const int n)
{
	struct ListNode *newNode, *tmp = *head;

	newNode = malloc(sizeof(struct ListNode));
	if (newNode == NULL)
		return;

	newNode->val = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
	}
}

/**
 * print_listint - print the elements of listin_t
 * @h: listint_t
 * Return: number of nodes
 */
void print_listint(const struct ListNode *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->val);
		h = h->next;
		nodes++;
	}
}
