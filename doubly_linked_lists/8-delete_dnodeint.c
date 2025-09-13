#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer of head node
 * @index: index of node to delete (0-based)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	/* Case 1: delete the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at position index */
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	/* If index out of range */
	if (temp == NULL)
		return (-1);

	/* unlink the node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}

