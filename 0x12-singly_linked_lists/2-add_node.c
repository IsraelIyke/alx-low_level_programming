#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds nodes
 * @head: argument
 * @str: argument
 * Return: new node added
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;
int i;

ptr = malloc(sizeof(list_t));

if (head == NULL)
{
	ptr->str = str;
	ptr->next = NULL;
	*head = ptr;
}
else
{
ptr->str = str;
ptr->next = head->next;
head = ptr;
}
return (ptr);
}

