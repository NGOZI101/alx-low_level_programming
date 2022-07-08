#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 *main - entry point
 *Description: this program teaches how to use conditionals and printf
 *
 *Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d ", n);
printf("is %d ", n % 10);
if (n > 5)
	printf("and is greater than 5 ");
if (n == 0)
	printf("and is 0 ");
if (n != 0 && n < 6)
	printf("and is less than 6 and not 0 ");
return (0);
}
