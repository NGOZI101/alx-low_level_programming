#include <unistd.h>
/**
 * _puthcar - writ somthing to the stdout
 *@c: the chharacter written out
 *Return: on sucess 1
 */
int _putchar(char c)
{ 
	return (write(1, &c, 1));
}
