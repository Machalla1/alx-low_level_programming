#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Struct listint_s - This is a singly linked list
 * @w:is an integer
 * @next: show which node is next
 * Details:Layout of Singly linked list node as regards ALX project
 */

	typedef struct listint_s
{
		int w;
		struct listint_s *next;

}	listint_t;

	listint_t *find_listint_loop(listint_t *head);
	size_t print_listint(const listint_t *m);
	size_t free_listint_safe(listint_t **m);
	size_t listint_len(const listint_t *m);
	size_t print_listint_safe(const listint_t *head);
	listint_t *add_nodeint(listint_t **head, const int w);
	listint_t *reverse_listint(listint_t **head);
	listint_t *add_nodeint_end(listint_t **head, const int w);
	int delete_nodeint_at_index(listint_t **head, unsigned int index);
	void free_listint(listint_t *head);
	listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int w);
	void free_listint2(listint_t **head);
	int sum_listint(listint_t *head);
	int pop_listint(listint_t **head);
	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
		#endif
