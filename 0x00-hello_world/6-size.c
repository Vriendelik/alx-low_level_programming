#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("size of char: %zu byte(s)", sizeof(char));
printf("size of int: %zu byte(s)", sizeof(int));
printf("size of long int: %zu byte(s)", sizeof(long int));
printf("size of long long int: %zu byte(s)", sizeof(long long int));
printf("size of a float: %zu byte(s)", sizeof(float));
return (0);
}
