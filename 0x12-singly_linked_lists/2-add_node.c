#include "lists.h"

/**
 * add_node - adds nodes
 * @head: argument
 * @str: argument
 * Return: new node added
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *ptr = head;
int i;

if (head == NULL)
{
	ptr->str = str;
	ptr->next = NULL;
}
else
{
	for (i = 0; ptr->next == NULL)
	{
		ptr->str = str;
		ptr = ptr->next;
	}
ptr->next = NULL;
}
return (ptr);
}

