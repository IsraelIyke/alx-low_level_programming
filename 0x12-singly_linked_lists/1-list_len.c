#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * @brief 
 * 
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
