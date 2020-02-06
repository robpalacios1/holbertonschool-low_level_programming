#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
  printf("Last digit of\%d is greater than 5");
}
else if (n < 6)
{
printf("Last digit of\%d is less than 6 and not 0");
}
else
{
printf("Last digit of\%d is zero");
}
return (0);
}
