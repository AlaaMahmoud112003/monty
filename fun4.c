#include "main.h"

/**
 * myadd_nodes - function that adds the top two elements of the stack.
 * @mystack: node of the stack.
 * @myline_number:  line number of of the opcode.
 */
void myadd_nodes(stack_t **mystack, unsigned int myline_number)
{
	int suum;

	if (mystack == NULL || *mystack == NULL || (*mystack)->next == NULL)
		more_err(8, myline_number, "add");

	(*mystack) = (*mystack)->next;
	suum = (*mystack)->m + (*mystack)->prevc->m;
	(*mystack)->m = suum;
	free((*mystack)->prevc);
	(*mystack)->prevc = NULL;
}

/**
 * mysub_nodes - function that adds the top two elements of the stack.
 * @mystack:  stack.
 * @myline_number: line number of of the opcode.
 */
void mysub_nodes(stack_t **mystack, unsigned int myline_number)
{
	int suum;

	if (mystack == NULL || *mystack == NULL || (*mystack)->next == NULL)

		mymore_error(8, myline_number, "sub");


	(*mystack) = (*mystack)->next;
	suum = (*mystack)->m - (*mystack)->prevc->m;
	(*mystack)->m = suum;
	free((*mystack)->prevc);
	(*mystack)->prevc = NULL;
}

/**
 * mydiv_nodes - function that adds the top two elements of the stack.
 * @mystack: stack.
 * @myline_number: line number of of the opcode.
 */
void mydiv_nodes(stack_t **mystack, unsigned int myline_number)
{
	int suum;
	if (mystack == NULL || *mystack == NULL || (*mystack)->next == NULL)
		mymore_error(8, myline_number, "div");
	if ((*mystack)->m == 0)
		mymore_error(9, myline_number);
	(*mystack) = (*mystack)->next;
	suum = (*mystack)->m / (*mystack)->prevc->m;
	(*mystack)->m = suum;
	free((*mystack)->prevc);
	(*mystack)->prevc = NULL;
}
