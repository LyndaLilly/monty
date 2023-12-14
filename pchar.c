#include "monty.h"
/**
 * p_char - this prints the char type
 * @stk: stack stk
 * @cnt: the line cnt
 * Return: nothing
*/
void p_char(stack_t **stk, unsigned int cnt)
{
	stack_t *p;

	p = *stk;
	if (!p)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	if (p->n > 127 || p->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", p->n);
}
