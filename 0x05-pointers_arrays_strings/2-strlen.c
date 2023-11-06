#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of the string
 *
 * @s: is out test value to pass as an array
 * Return: returns the length
 */
int _strlen(char *s) {
  int i;

  i = 0;

  while (s[i] != '\0') {
    i++;
  }
  return i;
}
