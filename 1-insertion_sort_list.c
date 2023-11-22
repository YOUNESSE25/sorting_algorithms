#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *t, *adr;

	if (!list || !(*list) || !(*list)->next)
		return;
	adr = *list;
	while (adr)
	{
		while (adr->next && (adr->n > adr->next->n))
		{
			t = adr->next;
			adr->next = t->next;
			t->prev = adr->prev;
			if (adr->prev)
				adr->prev->next = t;
			if (t->next)
				t->next->prev = adr;
			adr->prev = t;
			t->next = adr;
			if (t->prev)
				adr = t->prev;
			else
				*list = t;
			print_list(*list);
		}
		adr = adr->next;
	}
}
