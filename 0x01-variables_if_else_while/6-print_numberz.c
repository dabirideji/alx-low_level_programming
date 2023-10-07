#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 10)
    {
        putchar(i + '0'); // Convert integer to character and print
        i++;
    }

    putchar('\n');

    return (0);
}
