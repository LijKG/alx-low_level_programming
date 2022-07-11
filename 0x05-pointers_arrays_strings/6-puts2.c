#include <stdio.h>
#include "main.h"

/**
 * put2 - prints every other character
 * @str: string
 *
 * Return: nothing
 */

void put2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
