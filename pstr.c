#include "monty.h"
/**
 * p_str - this prints the strin
 * @stk: stack stk
 * @cnt: this is the line cnt
 * Return: nothing
*/
void p_str(stack_t **stk, unsigned int cnt)
{
	stack_t *p;
	(void)cnt;

	p = *stk;
	while (p)
	{
		if (p->n > 127 || p->n <= 0)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}
