#include "proj.h"
/**
 * div_to - this divides the stack
 * @stk: this stk stack
 * @cnt: this line num
 * Return: nothing
*/
void div_to(stack_t **stk, unsigned int cnt)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	p = *stk;
	if (p->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	a = p->next->n / p->n;
	p->next->n = a;
	*stk = p->next;
	free(p);
}
