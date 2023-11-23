#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: the result of the multiplication
 */
int multiply(int num1, int num2)
{
    return num1 * num2;
}

int is_digit_string(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = multiply(num1, num2);

    printf("%d\n", result);

    return 0;
}

