#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: A pointer to a function that prints a name.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
