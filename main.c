#include "proj.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{

	char *input;
	FILE *paper;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int cnt = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	paper = fopen(argv[1], "r");
	bus.paper = paper;
	if (!paper)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		input = NULL;
		read_line = getline(&input, &size, paper);
		bus.input = input;
		cnt++;
		if (read_line > 0)
		{
			ops(input, &stack, cnt, paper);
		}
		free(paper);
	}
	free_mem(stack);
	fclose(paper);
	return (0);
}
