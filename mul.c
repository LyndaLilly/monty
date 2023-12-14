#include "monty.h"
/**
 * mul_t - this multiplies stack
 * @stk: stack stk
 * @cnt: this is the line cnt
 * Return: nothing
*/
void mul_t(stack_t **stk, unsigned int cnt)
{
	stack_t *p;
	int w = 0, a;

	p = *stk;
	while (p)
	{
		p = p->next;
		w++;
	}
	if (w < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	p = *stk;
	a = p->next->n * p->n;
	p->next->n = a;
	*stk = p->next;
	free(p);
}
