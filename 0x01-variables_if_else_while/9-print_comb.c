#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
x = 48;
while (x <= 57)
{
putchar (x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
