#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char x;
char y;
x = 48;
y = 97;
while (x <= 57)
{
putchar (x);
x++;
}
while (y <= 102)
{
putchar (y);
y++;
}
putchar('\n');
return (0);
}
