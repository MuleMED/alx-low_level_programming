#include "main.h"

/**
 * _puts - prints the output of string
 *
 * @str: the character point to string & char
 *
 *
 */
void _puts(char *str)
{
int i;

for (i = 0; *(str + i) != '\0'; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
