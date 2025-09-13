#include <stdlib.h>
#include "lists.h"
/**
 * free_list - bjdsghkjshksd
 * @head: jfd;okf;
 */
void free_list(list_t *head)
{
	list_t *temp;
		while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
