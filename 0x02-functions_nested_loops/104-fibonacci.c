#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned long prev = 1, curr = 2, next;

    printf("%lu, %lu, ", prev, curr);

    for (i = 3; i <= 98; ++i)
    {
        next = prev + curr;
        prev = curr;
        curr = next;

        if (i < 98)
            printf("%lu, ", next);
        else
            printf("%lu\n", next);
    }

    return (0);
}

