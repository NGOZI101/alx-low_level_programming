#include <stdlib.h>
#include <time.h>
/**
 *main : entry point
 *
 *Decription: this program prints random integers
 *
 *decription: random numbers 
 *
 *return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
return (0);
}
