#include "main.h"

/**
 * mynop - function.
 * @mystack: stack.
 * @myline_number:  the line number of of the opcode.
 */
void mynop(stack_t **mystack, unsigned int myline_number)
{
	(void)mystack;
	(void)myline_number;
}

/**
 * myswap_nodes - function that swaps the top two elements of the stack.
 * @mystack: stack.
 * @myline_number: line number of of the opcode.
 */
void myswap_nodes(stack_t **mystack, unsigned int myline_number)
{
	stack_t *tmmp;

	if (mystack == NULL || *mystack == NULL || (*mystack)->next == NULL)
		mymore_error(8, myline_number, "swap");
	tmmp = (*mystack)->next;
	(*mystack)->next = tmmp->next;
	if (tmmp->next != NULL)
		tmmp->next->prevc = *mystack;
	tmmp->next = *mystack;
	(*mystack)->prevc = tmmp;
	tmmp->prevc = NULL;
	*mystack = tmmp;
}

