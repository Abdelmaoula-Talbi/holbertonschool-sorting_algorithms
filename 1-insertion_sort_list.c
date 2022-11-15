#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list of integers
 * in ascending order using the Insertion sort.
 * @list: list to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *node, *temp, *temp1, *temp2;

	if (list == NULL)
		return;
	if ((*list)->next == NULL)
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
			temp2 = node->next;
			/*if (temp2 == NULL)
				break;*/
			node->prev->prev = temp;
			node->prev->next = temp2;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = temp1;
			if (node->prev == NULL)
				*list = node;





			/*temp = node;
			temp1 = node->prev;
			temp2 = node->prev->prev;
			temp3 = node->next;
			if (temp2 != NULL)
				temp2->next = temp;
			else
				*list = temp;
			temp1->next = temp3;
			temp1->prev = temp;
			node->next = temp1;
			node->prev = temp2;
			if (node->next != NULL)
				node->next->prev = temp1;*/
/*



			if (node->prev->prev == NULL)
				*list = temp;
			node->prev->prev->next = temp;
			node->prev->prev = temp;
			node->prev = temp2;
			node->next = temp1;
			node->next->prev = temp1;
			node->prev->next = temp3;*/
			print_list(*list);
			if (node->prev == NULL)
				break;
		}
		tmp = tmp->next;
	}
}
