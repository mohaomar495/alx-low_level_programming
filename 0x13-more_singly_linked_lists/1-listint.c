#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @s: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *s)
{
	size_t num = 0;

	while (s)
	{
		num++;
		s = s->next;
	}

	return (num);
}
