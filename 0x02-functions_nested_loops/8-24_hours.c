#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
    int hour1, hour2, minute1, minute2;

    for (hour1 = 0; hour1 <= 2; hour1++)
    {
        for (hour2 = 0; hour2 <= 9; hour2++)
        {
            if (hour1 == 2 && hour2 == 4)
                break;
            for (minute1 = 0; minute1 <= 5; minute1++)
            {
                for (minute2 = 0; minute2 <= 9; minute2++)
                {
                    _putchar(hour1 + '0');
                    _putchar(hour2 + '0');
                    _putchar(':');
                    _putchar(minute1 + '0');
                    _putchar(minute2 + '0');
                    _putchar('\n');
                }
            }
        }
    }
}

