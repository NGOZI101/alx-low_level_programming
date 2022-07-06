#include <stdio.h>
#include <time.h>
/**
 * main -enrty point
 * more headers goes there
 * Return: 'always 0'
 * description: this prints random integers
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		return (0);
}
