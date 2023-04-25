#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    unsigned long int a = 0, b = 1, c;

    for (i = 0; i < 98; i++)
    {
        c = a + b;
        a = b;
        b = c;

        if (i == 97)
            printf("%lu\n", c);
        else
            printf("%lu, ", c);
    }

    return (0);
}

