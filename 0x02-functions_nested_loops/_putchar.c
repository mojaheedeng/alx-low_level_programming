#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stduot
 * @c: characterto print
 *
 * Return: on success 1
 */
int _putchar(cahr c)
{
	return (write(1, &c, 1));
}
