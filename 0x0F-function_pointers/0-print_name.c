#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using a specified format
 * @name: name to be printed
 * @f: function pointer to specify the printing format
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
