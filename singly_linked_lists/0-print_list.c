#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints list
 * @h: pointer
 * Return: count
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h) {
        if (h->str) {
            printf("[%u] %s\n", h->len, h->str);
        } else {
            printf("[0] (nil)\n");
        }
        h = h->next;
        count++;
    }

    return count;
}

