#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 10)
    {
        putchar(i + '0'); // Convert integer to character and print

        if (i != 9)
        {
            putchar(',');
            putchar(' ');
        }

        i++;
    }

    putchar('\n');

    return (0);
}
