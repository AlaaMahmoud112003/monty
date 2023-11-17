#include "main.h"
stack_t *headd = NULL;

/**
 * mycreate_node - function 
 * @m: int
 * Return: NULL.
 */
stack_t *mycreate_node(int m)
{
	stack_t *mynode;

	mynode = malloc(sizeof(stack_t));
	if (mynode == NULL)
		myerror(4);
	mynode->next = NULL;
	mynode->prev = NULL;
	mynode->n = n;
	return (mynode);
}

/**
 * myfree_nodes - Function .
 */
void free_nodes(void)
{
	stack_t *tmmp;

	if (headd == NULL)
		return;

	while (headd != NULL)
	{
		tmmp = headd;
		headd = headd->next;
		free(tmmp);
	}
}


/**
 * myadd_to_queue - function that adds a node to the queue.
 * @n_node: new node.
 * @lnl: line opcode.
 */
void myadd_to_queue(stack_t **n_node, __attribute__((unused))unsigned int lnl)
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
	while (tmmp->next != NULL)
		tmmp = tmmp->next;

	tmmp->next = *n_node;
	(*n_node)->prev = tmmp;

}
