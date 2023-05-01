#include "lists.h"

/**
* len - num of elements in list
*@h: struct
*Return: unsign int
*/
unsigned int len(listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
	++i;
	h = h->next;
	}
	return (i);
}



/**
*delete_nodeint_at_index - deletes the nodes at (idx) of a listint_t
*@head: ptr to struct
*@index: index of postion to del
*Return: 1 if (SUCCESS), -1 (FAIL)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp, *del_node;
	unsigned int i = 0;

	if (!(*head) || index > len(*head))
		return (-1);


	tmp = *head;

	if (index == 0)
	{
	*head = (*head)->next;
	i++;
	}

	del_node = tmp->next;
	tmp->next = del_node->next;
	free(del_node);

	return (1);
}
