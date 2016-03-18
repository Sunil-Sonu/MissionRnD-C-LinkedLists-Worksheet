/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/
int toInt(char *);
#include <stdio.h>
#include <malloc.h>
struct node {
	int digit1;
	int digit2;
	struct node *next;
}*n=NULL;

int convert_sll_2digit_to_int(struct node *head){
	char *str; int i=0,x,j,res=0;
	str = (char*)malloc(sizeof(char));
	str[i] = '\0';
	n = head;
	while (n != NULL)
	{
		x = n->digit1;
		x = n->digit2;
		str[i] =n->digit1+'0';
		str[i + 1] =n->digit2+'0';
		i=i + 2;
		n = n->next;
	}
	str[i] = '\0';
	res=toInt(str);
	return res;
}
int toInt(char *str)
{
	int c = 0,n=0;
	for (c = 0; str[c] != '\0'; c++) {
		n = n * 10 + str[c] - '0';
	}
	return n;
}