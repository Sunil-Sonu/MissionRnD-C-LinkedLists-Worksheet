/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*pre_node=NULL,*cur_node=NULL;

struct node * removeEveryKthNode(struct node *head, int K) {
	int i,j=1;
	if (head==NULL ||K<0)
	return NULL;
	else
	{
		if (K <=1){
			head = NULL;
			return head;
		}
		else{
				cur_node = head;
				while (cur_node->next != NULL)
				{
					for (i = j; i < K; i++)
					{
						if (cur_node == head){
							pre_node = cur_node;
							cur_node = cur_node->next;
						}
						else
						{
							pre_node = cur_node;
							cur_node = cur_node->next;
						}
					}
					j = 0;
					if (cur_node != NULL)
						pre_node->next = cur_node->next;
					else
						break;
				}
				return head;
			}
			
		}
	}