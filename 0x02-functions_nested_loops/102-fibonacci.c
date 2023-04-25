#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
    int i, n = 50;
    unsigned long int a = 1, b = 2, next;

    for (i = 1; i <= n; ++i)
    {
        printf("%lu", a);
        if (i == n)
            putchar('\n');
        else
            printf(", ");

        next = a + b;
        a = b;
        b = next;
    }

    return (0);
}

