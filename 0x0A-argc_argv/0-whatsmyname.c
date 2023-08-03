#include <stdio.h>
/**
 * main - print its name, followd by a new line
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arg..
 *
 * Return: (0) when seccessful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
