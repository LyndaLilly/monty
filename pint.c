#include "proj.h"
/**
 * print_int - this prints the integer
 * @stk: this is the stack head
 * @num: the line num
 * Return: nothing
*/
void print_int(stack_t **stk, unsigned int num)
{
	if (*stk == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(bus.paper);
		free(bus.input);
		free_mem(*stk);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stk)->n);
}
