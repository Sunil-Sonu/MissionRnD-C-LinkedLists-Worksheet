/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/
void insert(int);
#include <stdio.h>
#include <stdlib.h>
struct node {
	int num;
	struct node *next;
}*head,*temp;

struct node * numberToLinkedList(int N) {
	int x;
	head = NULL;
	N = abs(N);
	if (N==0)
	{
		insert(N);
	}
	while (N > 0)
	{
			x = N % 10;
			insert(x);
			N = N / 10;
	}
		return head;
}

void insert(int x)
{
	temp=(struct node *)malloc(sizeof(struct node));
	temp->num = x;
	temp->next = head;
	head = temp;
}
