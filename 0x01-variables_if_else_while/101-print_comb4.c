#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int x = '0';
int y;
int z;
while (x <= '7')
{
y = x + 1;
while (y <= '8')
{
z = y + 1;
while (z <= '9')
{
putchar (x);
putchar (y);
putchar (z);
if (x == '7' && y == '8' && z == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
z++;
}
y++;
}
x++;
}
return (0);
}
