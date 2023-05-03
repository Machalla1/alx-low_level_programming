#include "lists.h"

/**
 *listint_len - The number of element in linked list should be returned.
 *
 * @m: all linked list that contains listint_t type should be to traverse
 *
 * return: all nodes
 *
 */

	size_t listint_len(const listint_t *m)
{

		size_t num = 0;

		while (m)
		{
			num++;
			m = m->next;
		}
		return (num);
}
