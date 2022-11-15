#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list for all integers
 * in ascending order using the insert sort
 * @list: list to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *node, *temp, *temp1, *temp2;

	if (list == NULL || (*list)->next == NULL)
		return;
	tmp = (*list)->next;
	while (tmp)
	{
		node = tmp;
		while (node->n < node->prev->n)
		{
			temp = node;
			temp1 = node->prev->prev;
			if (temp1 != NULL)
				temp1->next = temp;
			temp2 = node->next; /*if (temp2 == NULL) break;*/
			node->prev->prev = temp;
			node->prev->next = temp2;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = temp1;
			if (node->prev == NULL)
				*list = node;
			print_list(*list);
			if (node->prev == NULL)
				break;
		}
		tmp = tmp->next;
	}
}
