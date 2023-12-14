#include "proj.h"

/**
 * print_all - this prints all stack
 * @stk: this is the stack head
 * @num: number of stack
 * Return: nothing
*/
void print_all(stack_t **stk, unsigned int num)
{
	stack_t *p;
	(void)num;

	p = *stk;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
