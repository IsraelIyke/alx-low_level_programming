#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * @brief 
 * 
 */

size_t print_list(const list_t *h)
{
    list_t *ptr = h;

    while (ptr->next != NULL)
    {
        printf("%d %s", ptr->len, ptr->str);
        ptr = ptr->next;
    }
    return h;
}