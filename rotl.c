#include "monty.h"
/**
 * rotl_t - this turns the stack around
 * @stk: stack stk
 * @cnt: this is the line cnt
 * Return: nothing
 */
void rotl_t(stack_t **stk,  __attribute__((unused)) unsigned int cnt)
{
	stack_t *x = *stk, *a;

	if (*stk == NULL || (*stk)->next == NULL)
	{
		return;
	}
	a = (*stk)->next;
	a->prev = NULL;
	while (x->next != NULL)
	{
		x = x->next;
	}
	x->next = *stk;
	(*stk)->next = NULL;
	(*stk)->prev = x;
	(*stk) = a;
}
