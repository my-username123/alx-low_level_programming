#include <stdio.h>
/**
 * main - print argument number passed to it
 * @argc: arguments number supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
