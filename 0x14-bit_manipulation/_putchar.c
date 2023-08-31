#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * Return: On success 1.
 * @c: character to be writen
 * Or -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

