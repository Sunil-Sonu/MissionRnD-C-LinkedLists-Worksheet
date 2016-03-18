/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*temp_1=NULL,*temp_2=NULL;

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	else
	{
		int t;
		temp_1 = head;
		temp_2 = temp_1->next;
		while (temp_1->next != NULL)
		{
			while (temp_2 != NULL)
			{
				if ((temp_1->num) > (temp_2->num))
				{
					t = temp_1->num;
					temp_1->num = temp_2->num;
					temp_2->num = t;
				}
				temp_2 = temp_2->next;
			}
			temp_1 = temp_1->next;
			temp_2 = temp_1->next;

		}
		return head;
	}
}