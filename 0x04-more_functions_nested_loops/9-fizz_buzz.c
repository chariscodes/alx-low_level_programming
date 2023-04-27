#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100, but for multiples of three, "Fizz" is printed instead of the number 
 * and for multiples of five "Buzz" is printed, and for multiples of both three and five "FizzBuzz" is printed. 
 * Each number/word is separated by a space.
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
