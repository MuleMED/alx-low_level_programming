#include "main.h"

/**
 * swap_int -  swaps two intergers
 *
 * @a: variable 1
 * @b: are the comparison integers
 *
 */
void swap_int(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
