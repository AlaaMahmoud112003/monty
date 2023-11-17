#include "main.h"
/**
 * myadd_to_stack - function that adds a node to the stack.
 * @n_node: new node.
 * @lnl: number of of the opcode.
 */
void myadd_to_stack(stack_t **n_node, __attribute__((unused))unsigned int lnl)
{
	stack_t *tmmp;

	if (n_node == NULL || *n_node == NULL)
		exit(EXIT_FAILURE);
	if (headd == NULL)
	{
		headd = *n_node;
		return;
	}
	tmmp = headd;
	headd = *n_node;
	headd->next = tmmp;
	tmmp->prev = headd;
}

/**
 * myprint_stack - function that adds a node to the stack.
 * @mystack: stack.
 * @myline_number: line number of  the opcode.
 */
void myprint_stack(stack_t **mystack, unsigned int myline_number)
{
	stack_t *tmmp;

	(void) myline_number;
	if (mystack == NULL)
		exit(EXIT_FAILURE);
	tmmp = *mystack;
	while (tmmp != NULL)
	{
		printf("%d\n", tmmp->n);
		tmmp = tmmp->next;
	}
}

/**
 * mypop_top - function that adds a node to the stack.
 * @mystack: stack.
 * @myline_number: opcode.
 */
void pop_top(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		more_err(7, line_number);

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}

/**
 * print_top - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void print_top(stack_t **mystack, unsigned int myline_number)
{
	if (mystack == NULL || *mystack == NULL)
		mymore_error(6, myline_number);
	printf("%d\n", (*mystack)->n);
}
