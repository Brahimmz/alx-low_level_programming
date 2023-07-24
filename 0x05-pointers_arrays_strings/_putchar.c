#include <unistd.h>
/**
 * _putchar - write the caracter c to stdout
 * @c: The caracter to print
 * Return: On seccess 1.
 */
int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
