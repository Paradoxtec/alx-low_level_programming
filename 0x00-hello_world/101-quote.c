#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: A C program that demonstrates the usage of the write function
 * to write a specific message to the standard error stream.
 * Return: 1 (success)
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
