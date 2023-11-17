#include "main.h"

/**
 * mymul_nodes - function that adds the top two elements of the stack.
 * @mystack: stack.
 * @myline_number: line number of of the opcode.
 */
void mymul_nodes(stack_t **mystack, unsigned int myline_number)
{
	int suum;
	if (mystack == NULL || *mystack == NULL || (*mystack)->next == NULL)
		mymore_error(8, myline_number, "mul");
	(*mystack) = (*mystack)->next;
	suum = (*mystack)->m * (*mystack)->prevc->m;
	(*mystack)->m = suum;
	free((*mystack)->prevc);
	(*mystack)->prevc = NULL;
}

/**
 * mymod_nodes - function that adds the top two elements of the stack.
 * @mystack: stack.
 * @myline_number: line number of of the opcode.
 */
void mymod_nodes(stack_t **mystack, unsigned int myline_number)
{
	int suum;
	if (mystack == NULL || *mystack == NULL || (*mystack)->next == NULL)
		mymore_error(8, myline_number, "mod");
	if ((*mystack)->m == 0)
		mymore_error(9, myline_number);
	(*mystack) = (*mystack)->next;
	suum = (*mystack)->m % (*mystack)->prevc->m;
	(*mystack)->m = suum;
	free((*mystack)->prevc);
	(*mystack)->prevc = NULL;
}
