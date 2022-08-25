#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list for all integers
 * in ascending order using the insert sort
 * @list: list to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *node, *temp1, *temp2;

	if (list == NULL)
		return;
	if ((*list)->next == NULL)
		return;
	tmp = (*list)->next;
	while (tmp)
	{
		node = tmp;
		while (node != NULL && node->n < node->prev->n)
		{
			temp1 = node->prev;
			if (temp1->prev == NULL)
				node = *list;
			temp2 = node->next;
			if (temp2 == NULL)
				break;
			node->prev->prev->next = node;
			node->prev->next = temp2;
			node->prev->prev = node;
			node->next->prev = temp1;
			node->next = node->prev;
			node->prev = node->prev->prev;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
