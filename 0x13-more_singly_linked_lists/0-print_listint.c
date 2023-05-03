#include "lists.h"

/**
 * print_listint - All the element of a linked list should be printed
 *
 * @m: Print linked list type of listint_t
 *
 * return: Total numbers of node
 *
 */

	size_t print_listint(const listint_t *m)

{
		size_t num = 0;

		while (m)
{
			printf("%i\n", m->w);
			m = m->next;
			num++;

}
		return (num);
}
