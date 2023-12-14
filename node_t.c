#include "monty.h"
/**
 * node_t - this adds node to the tray
 * @stk: thisis the head stk
 * @n: the node to add
 * Return: nothing
*/
void node_t(stack_t **stk, int n)
{
	stack_t *m, *a;

	a = *stk;
	m = malloc(sizeof(stack_t));

	if (m == NULL)
	{ 
		printf("Error\n");
		exit(0);
	}
	if (a)
		a->prev = m;
	m->n = n;
	m->next = *stk;
	m->prev = NULL;
	*stk = m;
}
