#include <unistd.h>

/**
 * _putchar - writes the char to the standard output
 * stdio
 * @c: the character to print
 *
 * Return: on sucess 1
 * on error ,-1 returned , an erno is set apprioprately
 */
int _putchar(char c)
{
return (write(1, &c, 1);
}		
