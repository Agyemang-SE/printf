#include "_printf.h"
#include <unistd.h>

/**
 * _putchar - custom putchar function that writes a character to the console
 * @c: character to be written
 * Return: number of characters written (1) or -1 on error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
