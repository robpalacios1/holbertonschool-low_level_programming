#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (Success 0)
 */
int main(void)
{
int x = '0';
int y;
while (x <= '9')
{
y = x + 1;
while (y <= '9')
{
putchar(x);
putchar(y);
if ((x == '8') && (y == '9'))
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
y++;
}
x++;
}
return (0);
}
