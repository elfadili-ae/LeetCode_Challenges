#include <stdio.h>
#include "merge.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode *tmp, *merged;

    if (list1 == NULL)
        return (list2);
    if (list2 == NULL)
        return (list1);

    if (list1->val <= list2->val)
    {
        tmp = list1;
        list1 = list1->next;
    }
    else
    {
        tmp = list2;
        list2 = list2->next;
    }
    merged = tmp;

    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            tmp->next = list1;
            tmp = list1;
            list1 = list1->next;
        }
        else
        {
            tmp->next = list2;
            tmp = list2;
            list2 = list2->next;
        }
    }
    if (list1 == NULL)
        tmp->next = list2;
    if (list2 == NULL)
        tmp->next = list1;

    return merged;
}
