#include "monty.h"

/**
* ops - this runs the codes
* @stack: head linked list - stack
* @cnt: this si the line count
* @paper: this points to the code
* @input: this is the linpe input
* Return: nothing
*/
int ops(char *input, stack_t **stack, unsigned int cnt, FILE *paper)
{
	instruction_t opst[] = {
				{"push", push_t}, {"pall", print_all}, {"pint", print_int},
				{"pop", pop_t},
				{"swap", swap_t},
				{"add", add_t},
				{"nop", nop_t},
				{"sub", sub_t},
				{"div", div_to},
				{"mul", mul_t},
				{"mod", mod_t},
				{"pchar", p_char},
				{"pstr", p_str},
				{"rotl", rotl_t},
				{"rotr", rotr_t},
				{"queue", queue_t},
				{"stack", st_p},
				{NULL, NULL}
				};
	unsigned int c = 0;
	char *d;

	d = strtok(input, " \n\t");
	if (d && d[0] == '#')
		return (0);
	bus.drag = strtok(NULL, " \n\t");
	while (opst[c].opcode && d)
	{
		if (strcmp(d, opst[c].opcode) == 0)
		{	opst[c].f(stack, cnt);
			return (0);
		}
		c++;
	}
	if (d && opst[c].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", cnt, d);
		fclose(paper);
		free(input);
		free_mem(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

/**
 * node_t - this adds node to the tray
 * @stk: thisis the head stk
 * @n: the node to add
 * Return: nothing
 */

void node_t(stack_t **stk, int n)
{
	stack_t *m, *a;

	a = *stk;
	m = malloc(sizeof(stack_t));

	if (m == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (a)
		a->prev = m;
	m->n = n;
	m->next = *stk;
	m->prev = NULL;
	*stk = m;
}

/**
 * free_mem - this frees thelink
 * @stk: this is the head stack
 */
void free_mem(stack_t *stk)
{
	stack_t *a;

	a = stk;
	while (stk)
	{
		a = stk->next;
		free(stk);
		stk = a;
	}
}
