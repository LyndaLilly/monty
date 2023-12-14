#include "proj.h"
/**
  *sub_t- this is the sub
  *@stk: stack stk
  *@cnt: this is the line num
  *Return: nothing
 */
void sub_t(stack_t **stk, unsigned int cnt)
{
	stack_t *a;
	int b, c;

	a = *stk;
	for (c = 0; a != NULL; c++)
		a = a->next;
	if (c < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	a = *stk;
	b = a->next->n - a->n;
	a->next->n = b;
	*stk = a->next;
	free(a);
}
