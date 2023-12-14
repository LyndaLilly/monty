#include "monty.h"
/**
 * pop_t - this brings out all pop
 * @stk: this is the head stk
 * @cnt: this is the num
 * Return: nothings
*/
void pop_t(stack_t **stk, unsigned int cnt)
{
	stack_t *p;

	if (*stk == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	p = *stk;
	*stk = p->next;
	free(p);
}
