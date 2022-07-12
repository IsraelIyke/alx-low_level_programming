#include "main.h"

/**
 * Pointer
 * 
 * @s: pointer to int
 * Return: 0 always
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}