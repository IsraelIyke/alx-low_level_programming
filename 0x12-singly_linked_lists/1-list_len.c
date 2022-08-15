#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * @brief 
 * 
 */

size_t list_len(const list_t *h)
{
    size_t count;

    for (count = 1; h->next != NULL; count++)
    {
        h = h->next;
    }

    return count;
}