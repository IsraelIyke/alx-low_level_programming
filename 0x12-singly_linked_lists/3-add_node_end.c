#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds end nodes
 * @head: argument
 * @str: argument
 * Return: end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t)), *temp;
	int i;
	
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = *head;
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;
	for (i = 0; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
	temp->next = ptr;

	return (*head);
}

