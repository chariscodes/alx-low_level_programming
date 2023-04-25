#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    long int prev = 1, curr = 2, next = 0, sum = 0;

    for (i = 1; i <= 33; i++)
    {
        if (curr % 2 == 0)
            sum += curr;
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("%ld\n", sum);
    return (0);
}
