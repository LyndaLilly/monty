#include "monty.h"

/**
 * push_t - this push in code
 * @stk: this is the head stack
 * @num: this is the number
 * Return: nothing
*/
void push_t(stack_t **stk, unsigned int num)
{
	int a, x = 0, flag = 0;

	if (bus.drag)
	{
		if (bus.drag[0] == '-')
			x++;
		for (; bus.drag[x] != '\0'; x++)
		{
			if (bus.drag[x] > 57 || bus.drag[x] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(bus.paper);
			free(bus.input);
			free_mem(*stk);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
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
