#include "monty.h"

/**
 * push_t - this push in code
 * @stk: this is the head stack
 * @cnt: this is the number
 * Return: nothing
*/
void push_t(stack_t **stk, unsigned int cnt)
{
	int a, x = 0, y = 0;

	if (bus.drag)
	{
		if (bus.drag[0] == '-')
			x++;
		for (; bus.drag[x] != '\0'; x++)
		{
			if (bus.drag[x] > 57 || bus.drag[x] < 48)
				y = 1; }
		if (y == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", cnt);
			fclose(bus.paper);
			free(bus.input);
			free_mem(*stk);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", cnt);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE); }
	a = atoi(bus.drag);
	if (bus.que == 0)
		node_t(stk, a);
	else
		enqueue_t(stk, a);
}
