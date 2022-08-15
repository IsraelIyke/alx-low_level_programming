#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the list
 * @h: argument pointer
 * 
 * Return: count
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return count;
}
