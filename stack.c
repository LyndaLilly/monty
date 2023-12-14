#include "monty.h"
/**
 * queue_t - the ques the stack
 * @stk: this is stk
 * @cnt: this is is the line cnt
 * Return: nothing
*/
void queue_t(stack_t **stk, unsigned int cnt)
{
	(void)stk;
	(void)cnt;
	bus.que = 1;
}

/**
 * enqueue_t - this enques stack
 * @n: this is stk
 * @stk: this is the line cnt
 * Return: nothing
*/
void enqueue_t(stack_t **stk, int n)
{
	stack_t *xb, *a;

	a = *stk;
	xb = malloc(sizeof(stack_t));
	if (xb == NULL)
	{
		printf("Error\n");
	}
	xb->n = n;
	xb->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{

		*stk = xb;
		xb->prev = NULL;
	}
	else
	{
		a->next = xb;
		xb->prev = a;
	}
}

/**
 * st_p - this stacks the line
 * @stk: this is stk
 * @cnt: this is the line cnt
 * Return: nothing
*/
void st_p(stack_t **stk, unsigned int cnt)
{
	(void)stk;
	(void)cnt;
	bus.que = 0;
}
