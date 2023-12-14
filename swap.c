#include "monty.h"
/**
 * swap_t - this swaps the top
 * @stk: stack stk
 * @cnt: this is cnt num
 * Return: nothing
*/
void swap_t(stack_t **stk, unsigned int cnt)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	p = *stk;
	a = p->n;
	p->n = p->next->n;
	p->next->n = a;
}
