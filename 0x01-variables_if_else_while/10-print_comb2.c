#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
int j;
i = 0;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
putchar ('0' + i);
putchar ('0' + j);
if (i != 9 || j != 9)
{
putchar (',');
putchar (' ');
}
j++;
}
i++;
}
putchar ('\n');
return (0);
}
