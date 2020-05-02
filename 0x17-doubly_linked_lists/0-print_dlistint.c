#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * @h: address of list of elements
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		length++;
		current = current->next;

	}
	return (length);
}
