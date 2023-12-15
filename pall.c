#include "monty.h"

/**
 * print_all - this prints all stack
 * @stk: this is the stack head
 * @cnt: number of stack
 * Return: nothing
*/
void print_all(stack_t **stk, unsigned int cnt)
{
	stack_t *p;
	(void)cnt;

	p = *stk;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
