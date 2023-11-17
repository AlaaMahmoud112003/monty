#include "main.h"
stack_t *headd = NULL;

/**
 * main - entry point
 * @arc: arguments 
 * @arv: arguments
 * Return: always 0
 */

int main(int arc, char *arv[])
{
	if (arc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	myopen_file(argv[1]);
	myfree_nodes();
	return (0);
}
