#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses the string
 *
 * @s: character value for array
 *
 */
void rev_string(char *s)
{
int i;
char c;

for (i = 0; i < _strlen(s) / 2; i++)
{
c = s[i];
s[i] = s[_strlen(s) - i - 1];
s[_strlen(s) - i - 1] = c;
}
}
