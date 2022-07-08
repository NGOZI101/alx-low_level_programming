#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 *Decription: this program prints random integer
 *Return: always 0 (suceess)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
	printf("is positive: %d\n", n);
if (n == 0)
	printf("is Zero %d\n", n);
if (n < 0)
	printf("is negative %d\n", n);
return (0);
}
