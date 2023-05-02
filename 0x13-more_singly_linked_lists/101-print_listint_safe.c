#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	/* declarations */
	size_t nodeCount = 0;
	/* check for null pointer */
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodeCount += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (nodeCount);
}
