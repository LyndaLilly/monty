#include "proj.h"
/**
 * add_t - adds the top two elements of the stack.
 * @stk: stack stk
 * @cnt: the cnt num
 * Return: void
*/
void add_t(stack_t **stk, unsigned int cnt)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	p = *stk;
	a = p->n + p->next->n;
	p->next->n = a;
	*stk = p->next;
	free(p);
}
