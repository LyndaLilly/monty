#include "monty.h"
/**
 * rotr_t- this rotates the tack
 * @stk: stack stk
 * @cnt: this is the line cnt
 * Return: nothing
 */
void rotr_t(stack_t **stk, __attribute__((unused)) unsigned int cnt)
{
	stack_t *mx;

	mx = *stk;

	if (*stk == NULL || (*stk)->next == NULL)
	{
		return;
	}
	while (mx->next)
	{
		mx = mx->next;
	}
	mx->next = *stk;
	mx->prev->next = NULL;
	mx->prev = NULL;
	(*stk)->prev = mx;
	(*stk) = mx;
}
